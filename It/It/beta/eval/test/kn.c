#include<stdio.h>
#include<math.h>
int main()
{
	long int i,j,t,n,count;
	scanf("%ld",&t);
	for(j=1;j<=t;j++)
	{
		count=0;

		scanf("%ld",&n);
		if(n<2)
			printf("FALSE\n");
		else if(n==2)
			printf("TRUE\n");
		else if(n%2==0)
			printf("FALSE\n");
		else
		{
			i=3;
			while(i<=sqrt(n))
			{
				if(n%i==0)
				{
					count++;
					i=n;
				}
				i+=2;
			}

			if(count>0)
				printf("FALSE\n");
			else
				printf("TRUE\n");
		}
	}

	return 0;
}
