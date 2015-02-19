#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int t;
	t=10;
	cout<<t<<endl;
	int V=1000,E=1000;
	for(int i=0;i<t;i++)
	{
		cout<<V<<" "<<E<<endl;
		for(int j=0;j<E;j++)
		{
			cout<<rand()%1000+1<<" "<<rand()%1000+1<<endl;
		}
	}
}
