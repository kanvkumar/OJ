#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<vector>
using namespace std;
int main()
{
	srand(time(NULL));
	vector<int> v;
	int t=30009;
	int temp=0;
	cout<<t<<endl;
	for(int i=0;i<10000;i++)
	{
		temp+=rand()%1000;
		cout<<"1 "<<temp<<endl;
		v.push_back(temp);
	}
	for(int i=0;i<10000;i++)
	{
		cout<<"3"<<endl;
		cout<<"2 "<<v.at(i)<<endl;

	}
	cout<<"1 5"<<endl;
	cout<<"1 7"<<endl;
	cout<<"3"<<endl;
	cout<<"1 2"<<endl;
	cout<<"3"<<endl;
	cout<<"2 5"<<endl;
	cout<<"3"<<endl;
	cout<<"2 2"<<endl;
	cout<<"3"<<endl;
}
