#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	double R,X,xx,ans,t;
	scanf("%d",&i);
	while(i!=0)
	{
		scanf("%lf %lf %lf",&X,&t,&R);
		xx=pow ((1+R/1200), 12*t);
		ans=X/xx;
		printf("%.2lf",ans);
		i--;
	}
	return 0;
}
