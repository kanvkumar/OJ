#include<stdio.h>
int main()
{
	double p,k,a;
	long int n,m,x,y;
	scanf("%ld",&y);
	for(x=1;x<=y;x++)
	{
		scanf("%lf%ld",&p,&n);
		k=p/10;
		if(n!=0)
		{
			for(m=1;m<=n;m++)
			{
				a=((112*p)/100)-k;
				p=a;
			}
			printf("%lf\n",a);
		}
		else
			printf("0.000000\n");
	}
	return 0;
}
