#include<stdio.h>
int main()
{char c;
int n,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%c",&c);
	scanf("%c",&c);
	int b=c;
	if(b>=65&&b<=90)
		printf("UPPER CASE CHARACTER\n");
	else if(b>=97&&b<=122)
		printf("LOWER CASE CHARACTER\n");
	else if(b>=48&&b<=57)
		printf("NUMERAL\n");
	 else
		printf("NON-ALPHANUMERAL\n");
}
return 0;
}

