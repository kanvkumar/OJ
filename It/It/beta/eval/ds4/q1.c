#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;

};
void rightviewUtil(struct node *root,int level,int *max_level)
{
	if(root==NULL) return;
	if(*max_level<level)
	{
		printf("%d ",root->data);
		*max_level=level;

	}
	rightviewUtil(root->right,level+1,max_level);
	rightviewUtil(root->left,level+1,max_level);
}
void rightView(struct node *root)
{
	int max_level=0;
	rightviewUtil(root,1,&max_level);
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
		struct node* root=NULL;
		int n,i;
		scanf("%d",&n);
		int temp;
		for(i=0;i<n;i++)
		{
			
			scanf("%d",&temp);
			root=insert(root,temp);

		}
		rightView(root);
		printf("\n");

	}
	return 0;
}
