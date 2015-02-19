#include<stdio.h>
int leapyear(int y)
{
	if(y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
				return 1;
			else
				return 0;
		}
		else
			return 1;
	}
}
long long int noofdays(long long int d1,long long int m1,long long int y1,long long int d2,long long int m2,long long int y2)
{
	int leap[12]={0,31,60,91,121,152,182,213,244,274,305,335};
	int nonleap[12]={0,31,59,90,120,151,181,212,243,273,304,334};
	long long int n=0;
	if(y1!=y2)	
	{
		while(y1!=y2)
		{
			if(leapyear(y1))
			{
				n=n+366-(leap[m1-1]+d1);
			}
			else
			{
				n=n+365-(nonleap[m1-1]+d1);
			}
			y1++;
			m1=1;
			d1=1;
	//		printf("%lld %lld %lld-%lld\n",d1,m1,y1,n);
		}
		n++;
	}
	if(y1==y2)
	{
		if(leapyear(y1))
		{
			n=n+(leap[m2-1]+d2)-(leap[m1-1]+d1)+1;
		}
		else
		{
			n=n+(nonleap[m2-1]+d2)-(nonleap[m1-1]+d1)+1;
		}
		//printf("%lld %lld %lld-%lld\n",d1,m1,y1,n);
	}
	return n;
}
int main()
{
	long long int j;
	scanf("%lld",&j);
	long long int i=0;
	for(i=0;i<j;i++)
	{
		long long int d1,d2,m1,m2,y1,y2,d,m,y,n1;
		scanf("%lld%lld%lld%lld%lld%lld",&d1,&m1,&y1,&d2,&m2,&y2);
		if((y1*10000+m1*100+d1)>(y2*10000+m2*100+d2))
		{
			d=d1;
			m=m1;
			y=y1;
			y1=y2;
			m1=m2;
			d1=d2;
			d2=d;
			m2=m;
			y2=y;
		}
		n1=noofdays(d1,m1,y1,d2,m2,y2);
		printf("%lld\n",n1);
	}
	return 0;
}
