#include<stdio.h>
int main()
{
	double a,b,m1,m2,m3,x1,y1,x2,y2,x3,y3,x4,y4,cx,cy,l,y,m,n;
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		cx=(x1+x2+x3)/3;
		cy=(y1+y2+y3)/3;
		m1=(y2-y1)/(x2-x1);
		m2=(y3-y2)/(x3-x2);
		m3=(y3-y1)/(y3-y1);
		l=((y4-y1)-(m1*(x4-x1)))*((cy-y1)-(m1*(cx-x1)));
		m=((y4-y2)-(m2*(x4-x2)))*((cy-y2)-(m2*(cx-x2)));
		n=((y4-y3)-(m3*(x4-x3)))*((cy-y3)-(m3*(cx-x3)));
		if (l>=0 && m>=0 && n>=0)
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



