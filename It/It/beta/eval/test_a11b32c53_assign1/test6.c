#include<stdio.h>

int main()
{
        int a = 0, b =1 , c = 1, n = 17;
        while(n){

		int k = a+b+c;
		printf("%d\n",k);
		a = b;
		b = c;
		c = k;

                n--;
        }
        return 0;
}

