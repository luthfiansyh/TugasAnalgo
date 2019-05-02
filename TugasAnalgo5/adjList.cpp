#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u-1].push_back(v);
	adj[v-1].push_back(u);
}

void displayList(vector<int> adj[],int n)
{
	for (int i = 0; i < n; i++) 
    { 
        cout << "\n Adjacency list of node "
             << i+1 << "\n head "; 
        for (auto x : adj[i]) 
           cout << "-> " << x; 
        printf("\n"); 
    }
}

int main()
{
	int n = 8;
	vector<int> adj[n];
	cout << "Program Undirected Graph for Adjacency List" << endl;
	cout << endl;
	addEdge(adj,1,2);
	addEdge(adj,1,3);
	addEdge(adj,2,3);
	addEdge(adj,2,4);
	addEdge(adj,2,5);
	addEdge(adj,3,5);
	addEdge(adj,3,7);
	addEdge(adj,3,8);
	addEdge(adj,4,5);
	addEdge(adj,5,6);
	addEdge(adj,7,8);
	displayList(adj,n);

	return 0;
}