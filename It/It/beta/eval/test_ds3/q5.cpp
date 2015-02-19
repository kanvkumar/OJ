#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

	int n;
	cin>>n;
	vector <int> vec;
	for(int i=0;i<n;i++)
	{

		int temp;
		cin>>temp;
		vec.push_back(temp);

	}
	sort(vec.begin(),vec.end());
	int q;
	cin>>q;
	while(q--)
	{
		long long temp;
		int pointer1=0;
		int pointer2=vec.size()-1;
		cin>>temp;
		while(pointer1<pointer2)
		{
			if(vec.at(pointer1)*vec.at(pointer2)<temp)
				pointer1++;
			else if(vec.at(pointer1)*vec.at(pointer2)>temp)
				pointer2--;
			else
			{
				cout<<"Yes"<<endl;
				break;
			}
		}
		if(pointer1>=pointer2)
			cout<<"No"<<endl;
	}

}

