#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
int q;
q=1000000;
cout<<q<<endl;
while(q--)
{
cout<<rand()%2+1<<" "<<4020000000+((rand()%99)*100000)<<endl;
}
}
