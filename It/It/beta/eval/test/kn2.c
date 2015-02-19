#include<stdio.h>
int main()
{
	int n,i;
	double x1,x2,x3,x4,y1,y2,y3,y4;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%lf%lf",&x1,&y1);
		scanf("%lf%lf",&x2,&y2);
		scanf("%lf%lf",&x3,&y3);
		scanf("%lf%lf",&x4,&y4);
		if (((y3-y1)*(x2-x1)-(y2-y1)*(x3-x1))*((y4-y1)*(x2-x1)-(y2-y1)*(x4-x1))>=0&&((y2-y1)*(x3-x1)-(y3-y1)*(x2-x1))*((y4-y1)*(x3-x1)-(y3-y1)*(x4-x1))>=0&&((y1-y3)*(x2-x3)*(y2-y3)*(x1-x3))*((y4-y3)*(x2-x3)-(y2-y3)*(x4-x3))>=0)

		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
