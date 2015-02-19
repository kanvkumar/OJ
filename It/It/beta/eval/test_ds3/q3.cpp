#include<stdio.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
	struct node* next;
	char c;
};
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int maxi=0;		
		int n;
		cin>>n;
		struct node *arr[256];
		for(int i=0;i<256;i++)
		{
			arr[i]=(node *)malloc(sizeof(struct node));
			arr[i]->c=i;
			arr[i]->next=NULL;
		}
		for(int i=0;i<n;i++)
		{
			char from;
			char to;
			cin>>from;
			cin>>to;
			arr[from]->next=arr[to];
		}
		for(int i=0;i<256;i++)
		{
			int cnt=0;
			int flag=0;
			node *temp=arr[i];
			while(temp->next!=NULL)
			{
				flag=1;
				//cout<<temp->c;
				temp=temp->next;

				cnt++;
			}
			//if(flag==1)
			//cout<<endl;
			if(cnt>maxi)
				maxi=cnt;
		}
		if(n==0)
			cout<<"0"<<endl;
		else
			cout<<maxi+1<<endl;
	}

}
