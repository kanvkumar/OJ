#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int t;
	int n;
	cout<<"100"<<endl;
	for(int i=0;i<100;i++)
	{
		for(int j=0;j<100;j++)
		{
			if(i==j)
			{

				cout<<"0 ";
			}
			else
			{
				if(rand()%2==0)
				cout<<rand()%1000<<" ";
				else
					cout<<"-1 ";
			}
		}
		cout<<endl;
	}
	cout<<"100"<<endl;
	for(int i=0;i<100;i++)
	{
		cout<<rand()%100+1<<" "<<rand()%100+1<<endl;
	}

}
