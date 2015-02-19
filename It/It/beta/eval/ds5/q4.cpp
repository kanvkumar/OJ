#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int colored[1000];
int V,E;
int mat[1000][1000];
int xcount,ycount;
int color(int ind,int tocolor)
{
//	cout<<ind<<" "<<tocolor<<endl;
	colored[ind]=tocolor;
	
	if(tocolor==1)
	{	tocolor=2;
		xcount++;
	}
	else if(tocolor==2)
	{	tocolor=1;
		ycount++;
	}
	for(int i=0;i<V;i++)
	{
		if(mat[ind][i]==1)
		{
			if(colored[i]!=0&&colored[i]!=tocolor)
				return 0;
			else if(colored[i]==0)
			{
				colored[i]=tocolor;
				if(!color(i,tocolor))
					return 0;
			}
		}
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(colored,0,sizeof colored);
		memset(mat,0,sizeof mat);
		cin>>V>>E;
		for(int i=0;i<E;i++)
		{
			int a,b;
			cin>>a>>b;
			a--;
			b--;
			mat[a][b]=1;
			mat[b][a]=1;
		}
		int flag=0;
		int players=0;
		long long permutations=1;
		for(int i=0;i<V;i++)
		{
			if(colored[i]==0)
			{
				int temp;
				xcount=0;
				ycount=0;
				temp=color(i,2);
//				cout<<temp<<endl;
				
				if(xcount>ycount)
					players+=xcount;
				else
					players+=ycount;

				if(temp==0)
					flag=1;
				permutations*=2;
				permutations=permutations%1000000007;
				

			}
		}
		if(flag==0)
			cout<<players<<" "<<permutations<<endl;
		else
			cout<<"-1"<<endl;
	}
}
