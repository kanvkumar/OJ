#include <math.h>
#include <stdio.h>
int main()
{
	double a,b,c,p,q,r;
	int N;
	scanf("%d",&N);
	while(N>0)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		r=b*b-4*a*c;
		if(r>=0)
		{
			p=(-b-sqrt(r))/(2*a);
			q=(-b+sqrt(r))/(2*a);
			printf("%.2lf %.2lf\n",p,q);
		}
		else
		{
			p=(-b/(2*a));
			q=(sqrt(-1*r)/(2*a));
			printf("%.2lf - i%.2lf",p,q);
			printf(",%.2lf + i%.2lf\n",p,q);
		}
		N--;
	}
	return 0;
}
