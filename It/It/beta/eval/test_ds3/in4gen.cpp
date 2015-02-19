#include<iostream>

using namespace std;
int main()
{
	for(char i='a';i<'z';i++)
	{
		cout<<i<<" "<<(char)(i+1)<<" "<<"3"<<endl;
	}
	cout<<"z A 2000"<<endl;
	for(char i='A';i<'Z';i++)
		cout<<i<<" "<<(char)(i+1)<<" "<<"5"<<endl;
}
