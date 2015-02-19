#include <stdio.h>
#include <limits.h>
#include<stdbool.h>
// Number of vertices in the graph
#define V 100

// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
int minDistance(int dist[], bool sptSet[])
{
	// Initialize min value
	int min = INT_MAX, min_index;
	int v;
	for (v = 0; v < V; v++)
		if (sptSet[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;

	return min_index;
}

// A utility function to print the constructed distance array
int printSolution(int dist[], int n,int des)
{
		if(dist[des]!=INT_MAX)	
		printf("%d\n", dist[des]);
		else
			printf("-1\n");
}

// Funtion that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
void dijkstra(int graph[V][V], int src,int des)
{
	int dist[V];     // The output array.  dist[i] will hold the shortest
	// distance from src to i

	bool sptSet[V]; // sptSet[i] will true if vertex i is included in shortest
	// path tree or shortest distance from src to i is finalized
	int i;
	// Initialize all distances as INFINITE and stpSet[] as false
	for (i = 0; i < V; i++)
		dist[i] = INT_MAX, sptSet[i] = false;

	// Distance of source vertex from itself is always 0
	dist[src] = 0;
	int count;
	// Find shortest path for all vertices
	for (count = 0; count < V-1; count++)
	{
		// Pick the minimum distance vertex from the set of vertices not
		// yet processed. u is always equal to src in first iteration.
		int u = minDistance(dist, sptSet);

		// Mark the picked vertex as processed
		sptSet[u] = true;

		// Update dist value of the adjacent vertices of the picked vertex.
		int v;
		for (v = 0; v < V; v++)

			// Update dist[v] only if is not in sptSet, there is an edge from 
			// u to v, and total weight of path from src to  v through u is 
			// smaller than current value of dist[v]
			if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX 
					&& dist[u]+graph[u][v] < dist[v])
			{dist[v] = dist[u] + graph[u][v];
				if(dist[u]==INT_MAX||graph[u][v]==INT_MAX)
				{
					dist[v]=INT_MAX;
				}
			}

	}

	// print the constructed distance array
	printSolution(dist, V,des);
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[V][V];
	int i;
	for( i=0;i<n;i++)
	{
		int j;
		for( j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==-1)
				a[i][j]=INT_MAX;
		}
	}
	int k;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		int src,des;
		scanf("%d %d",&src,&des);
		dijkstra(a,src-1,des-1);


	}
}
