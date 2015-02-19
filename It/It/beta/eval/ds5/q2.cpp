#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include<iostream>
using namespace std;
#define ROW 10000
#define COL 10000
bool M[10000][10000];
// A function to check if a given cell (row, col) can be included in DFS
bool visited[10000];
int n;
// A utility function to do DFS for a 2D boolean matrix. It only considers
// the 8 neighbors as adjacent vertices
void DFS( int row)
{
	// These arrays are used to get row and column numbers of 8 neighbors 
	// of a given cell
	
	// Mark this cell as visited
	visited[row] = true;

	// Recur for all connected neighbours
	for (int k = 0; k < n; ++k)
		if (M[row][k]&&!visited[k])
			DFS(k);
}

// The main function that returns count of islands in a given boolean
// 2D matrix
int countIslands()
{
	// Make a bool array to mark visited cells.
	// Initially all cells are unvisite
/*	for(int i=0;i<n;i++)
		cout<<visited[i]<<endl;
*/	memset(visited, 0, sizeof(visited));

	// Initialize count as 0 and travese through the all cells of
	// given matrix
	int count = 0;
	for (int i = 0; i < n; ++i)
			if (!visited[i]) // If a cell with value 1 is not
			{                              // visited yet, then new island found
				DFS( i);     // Visit all cells in this island.
				++count;                   // and increment island count
			}

	return count;
}

// Driver program to test above function
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int V,E;
	
		cin>>V;
		cin>>E;
n=V;
	memset(M,0,sizeof(M));
	
	for(int i=0;i<E;i++)
	{
		int a,b;
		cin>>a>>b;
		M[a-1][b-1]=true;
		M[b-1][a-1]=true;
		
	}

	printf("%d\n", countIslands());
	}
	return 0;
}
