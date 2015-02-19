#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>
#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *left,*right;

};
long long maxi;
void maxprint(struct node *root,long long sum,int level)
{
	
	if(root==NULL)
		return;
	if(level%2==1)
		root->data=root->data * (-1);
	if(root->left!=NULL&&root->right!=NULL)
	{maxprint(root->left,root->data+sum,level+1);
	maxprint(root->right,root->data+sum,level+1);
	return;
	}
	if(root->left!=NULL)
	{
		maxprint(root->left,(long long)root->data+sum,level+1);
		return;
	}
	if(root->right!=NULL)
	{
		maxprint(root->right,(long long)root->data+sum,level+1);
		return;
	}
	if(sum+(long long)root->data>maxi)
		maxi=sum+(long long)root->data;
}
struct node* newNode(int data)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
struct node* insert(struct node* node,int data)
{
	if(node==NULL)
		return newNode(data);
	else
	{
		if(data<=node->data)
			node->left=insert(node->left,data);
		else
			node->right=insert(node->right,data);
		return node;
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	maxi=-1000000000000000000;
		struct node* root=NULL;
		int n,i;
		scanf("%d",&n);
		int temp;
		for(i=0;i<n;i++)
		{
			
			scanf("%d",&temp);
			root=insert(root,temp);

		}
		maxprint(root,0,0);
		cout<<maxi;
		printf("\n");

	}
	return 0;
}
