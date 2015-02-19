#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	srand(time(NULL));
	cout<<"8000"<<endl;
	int num=10;
	cout<<"2 3 7 ";
	for(int i=0;i<7997;i++)
	{
		cout<<num<<" ";
		num+=(rand()%1000000000);
		
	}

	cout<<"1000"<<endl;
	cout<<"21"<<endl;
	cout<<"20"<<endl;
	cout<<"14"<<endl;
	cout<<"6"<<endl;
	cout<<"7"<<endl;
	for(int i=0;i<995;i++)
	{
		cout<<(rand()%100000000)<<endl;
	}
}
