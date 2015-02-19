#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		double P,A;
		int n;
		scanf("%lf %d",&P,&n);
		int i;
		A=P;
		for(i=0;i<n;i++)
			A = A*1.12 - (P/10);
		printf("%lf\n",A);
	}
	return 0;
}

	

