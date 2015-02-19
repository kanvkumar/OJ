#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		double x1,y1,x2,y2;
		scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
		double xx=(x2-x1)*(x2-x1),yy=(y2-y1)*(y2-y1);
		double ans=sqrt(xx+yy);
		printf("%.1lf\n",ans);
	}
	return 0;
}
