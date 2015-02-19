#include<stdio.h>
#include<math.h>
int main()
{
	int k;
	scanf("%d",&k);
	while(k>0)
	{	
		double a,b,c,x1,x2,det,re,img,i;
		scanf("%lf %lf %lf",&a,&b,&c);
		det=(b*b)-(4*a*c);
		if(det>=0)
		{
			x1=(-b+sqrt(det))/(2*a);
			x2=(-b-sqrt(det))/(2*a);
			if(x1<x2)
			{
				printf("%.2lf %.2lf\n",x1,x2);
			}
			else
			{
				printf("%.2lf %.2lf\n",x2,x1);
			}
		}
		else
		{
			det=-(det);
			re=-(b/(2*a));
			i=sqrt(det);
			img=(i)/(2*a);
			printf("%.2lf - i%.2lf,%.2lf + i%.2lf\n",re,img,re,img);
		}
		k--;
	}
	return 0;
}
