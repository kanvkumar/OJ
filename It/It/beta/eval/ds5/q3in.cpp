#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int t=1;
	cout<<t<<endl;
	while(t--)
	{
		cout<<"1000"<<" "<<"999"<<endl;
		for(int i=0;i<999;i++)
		{
			int x=i+1;
			int y=x+1;
			cout<<x<<" "<<y<< endl;
		}
	}
}
