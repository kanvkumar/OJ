#include<stdio.h>
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
int t=10;
cout<<"10"<<endl;
srand (time(NULL));
while(t--)
{
cout<<"20"<<endl;
for(int i=0;i<20;i++)
{

for(int j=0;j<20;j++)
	cout<<rand()%10000000<<" ";
cout<<endl;
}	
}
}


