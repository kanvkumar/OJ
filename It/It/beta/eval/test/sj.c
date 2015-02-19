#include<stdio.h>

int main()
{
	double X,R,t,t1;
	int i,j,m;
	double P,r;
	i=0;
	scanf("%d",&j);
	while(i<j)
	{
		scanf("%lf %lf %lf",&X,&t,&R);
		t1=12*t;
		r=R/12;
		for(m=1;m<=t1;m++)
		{
			P=X/(1+(r/100));
			X=P;
		}
		printf("%.2lf\n",P);
		i++;
	}
	return 0;
}




