#include<stdio.h>
int main()
{
	long long int N,i,k,e,b;
	long long int a;
	scanf("%lld",&N);
	for(i=1;i<=N;i++)
	{	
		scanf("%lld",&a);
		e=0;
		for(k=a;k>0;k=k/10)
		{
			b=k%10;
			if(b==3)
			{
				e=e+1;
			}
		
		}
		printf("%lld\n",e);
	}
	return 0;
}

