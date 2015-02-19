#include<stdio.h>
#include<math.h>
int main()
{
	long long int num,b,c,m,n,s;
	scanf("%lld",&n);
	for(m=0;m<n;m++)
	{
		scanf("%lld%lld",&num,&b);
		if(num==0)
			s=0;
		else if(num==1)
			s=1;
		else
		{

			for(c=1;num/2>0;num=num/2)
			{
				if(num%2==1)
					c=c+1;
			}
			if(b>1)
				s= (pow(b,c)-1)/(b-1);
		}
		printf("%lld\n",s);
	}
	return 0;
}
