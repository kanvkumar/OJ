#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	int t;
	cin>>t;
	vector <long long> vec;
	for(int i=0;i<t;i++)
	{
		long long temp;
		cin>>temp;
		vec.push_back(temp);
	}
	long long maxi=0;
	sort(vec.begin(),vec.end());
	for(int i=1;i<vec.size();i++)
	{
		if(vec.at(i)-vec.at(i-1)>maxi)
			maxi=vec.at(i)-vec.at(i-1);
	}
	cout<<maxi<<endl;
}
