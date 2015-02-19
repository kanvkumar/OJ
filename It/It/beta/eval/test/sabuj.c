#include<stdio.h>
#include<math.h>

int main(void)
{

int test;
scanf("%d",&test);
while(test)
{

 double P,A; int time;
 scanf("%lf%d",&P,&time);
 A = P;

 while(time)
 {
    A = A + (0.12*A);
    A -= P/10;

    time--;
 }


printf("%lf\n",A);

test--;
}

return 0;
}
