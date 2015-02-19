#include<stdio.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
	struct node* next;
	int val;
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
			arr[i]->val=0;
			arr[i]->next=NULL;
		}
		for(int i=0;i<n;i++)
		{
			char from;
			char to;
			int value;
			cin>>from;
			cin>>to;
			cin>>value;
			arr[from]->next=arr[to];
			arr[from]->val=value;
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
				cnt+=temp->val;
				temp=temp->next;


			}

			cnt+=temp->val;
			//if(flag==1)
			//cout<<endl;
			if(cnt>maxi)
				maxi=cnt;
		}
		if(n==0)
			cout<<"0"<<endl;
		else
			cout<<maxi<<endl;
	}

}
