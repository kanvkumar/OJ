#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		vector <int> vec;
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			vec.push_back(temp);
		}
		sort(vec.begin(),vec.end());
		long long sum1=0,sum2=0;
		for(int i=0;i<vec.size()-1;i+=2)
		{
			sum1+=vec.at(i);
			sum2+=vec.at(i+1);
			
		}
		if(sum1>sum2)
		{
			cout<<"0.50 "<<sum1-sum2<<endl;
		}
		if(sum2>sum1)
		{
			cout<<"0.50 "<<sum2-sum1<<endl;

		}
		if(sum1==sum2)
			cout<<"0"<<endl;
	}
}
