
//AUTHOR : Mallipeddi Hardhik 
// Matrix Addition and then transpose the resultant matrix
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[100][100],B[100][100],C[100][100];
	int test,i,j,k;
	int n,m;
	scanf("%d",&test);
	while(test--)
	{
		scanf(" %d %d %d %d",&n,&m,&i,&j);
	if(i!=n || m!=j)
{
	printf("error\n");
continue;
}
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				scanf("%d",&A[i][j]);
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				scanf("%d",&B[i][j]);
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				C[i][j]=A[i][j]+B[i][j];

		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				A[j][i]=C[i][j];
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n-1;j++)
			{
				printf("%d ",A[i][j]);
			}
			printf("%d\n",A[i][j]);
				
		}

	}
	return 0;
}


