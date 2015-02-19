#include<iostream>

using namespace std;
int main()
{
	for(char i='a';i<'z';i++)
	{
		cout<<i<<" "<<(char)(i+1)<<endl;
	}
	cout<<"z A"<<endl;
	for(char i='A';i<'Z';i++)
		cout<<i<<" "<<(char)(i+1)<<endl;
}
