#include<stdio.h>
int main()
{
	int i,n,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		if(a!=0&&b!=0)
		{if((a%b==0)||(b%a==0))
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
		else
		{
			printf("YES\n");
		}
	}
	return 0;
}
