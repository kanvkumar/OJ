// Smaller root is printed first


#include<stdio.h>
#include<math.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		double a,b,c;
		scanf("%lf %lf %lf",&a,&b,&c);
		double D = b*b - 4*a*c;
		if(D>=0)
		{
			double x1,x2;
			x1 = (b*(-1) - sqrt(D))/(2*a);
			x2 = (b*(-1) + sqrt(D))/(2*a);
			printf("%0.2lf %0.2lf\n",x1,x2);
		}
		else
		{
			double x1,y1;
			x1 = (b*(-1))/(2*a);
			y1 = (sqrt(D*(-1)))/(2*a);
			printf("%0.2lf - i%0.2lf,%0.2lf + i%0.2lf\n",x1,y1,x1,y1);
		}
	}
	return 0;
}
		



