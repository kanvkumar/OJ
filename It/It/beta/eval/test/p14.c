#include<stdio.h>
int main()
{
	int a,b,n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&a,&b);
		if(a==0 || b==0)
		{
			printf("YES\n");
			continue;
		}
		int x,y;
		x=(a>=b)?a:b;
		y=(a+b)-x;
		if(x%y==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
