#include<stdio.h>
int left[100000],right[100000],data[100000],level[100000];
long long int maximum=-1000000000000000000;
int recfun(int sum, int index2);
int function(int value,int point,int index);
int main()
{
	int len,i,test,j,k,max=0;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		scanf("%d",&len);
		if(len>max)
			max=len;
		for(k=0;k<max;k++)
		{
			left[k]=0;
			right[k]=0;
		}
		level[0]=1;
		for(j=0;j<len;j++)
		{
			scanf("%d",&data[j]);

			if(j>0)
				function(data[j],0,j);
		}
		int sum=0;
		recfun(sum,0);
		printf("%lld\n",maximum);
		maximum=-1000000000000000000;
	}
	return 0;
}
int function(int value,int point,int index)
{
	if(value>data[point])
	{
		if(right[point]==0)
		{
			right[point]=index;
			level[index]=level[point]+1;
			return ;
		}
		else
		{
			function(value,right[point],index);
			return;
		}
	}
	else
	{
		if(left[point]==0)
		{
			left[point]=index;
			level[index]=level[point]+1;
			return;
		}
		else
		{
			function(value,left[point],index);
			return;
		}
	}
	return;
}

int recfun(int sum, int index2)
{
	if(level[index2]%2!=0)
		sum=sum+data[index2];
	else
		sum=sum-data[index2];
	if(sum>maximum && right[index2]==0 && left[index2]==0)
	{maximum=sum;}
	if(right[index2]!=0)
	{recfun(sum,right[index2]);}
	if(left[index2]!=0)
	{recfun(sum,left[index2]);}
	return;
}
