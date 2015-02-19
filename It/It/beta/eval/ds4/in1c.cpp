#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
bool arr[1000000000];
int main()
{
	cout<<"100"<<endl;
	srand(time(NULL));	
	for(int i=0;i<100;i++)
	{
		cout<<"10000"<<endl;
		for(int j=0;j<10000;)
		{
			int temp=rand()%1000000000;
			if(arr[temp]==false)
			{
				j++;
				arr[temp]=true;
				cout<<temp<<" ";
			}
		}
		cout<<endl;

	}
}
