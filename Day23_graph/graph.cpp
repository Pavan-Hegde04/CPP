#include<iostream>
#include<vector>
using namespace std;

//Data structure to store graph
struct Edge
{
	int src,dest,weight;
};

typedef pair<int,int>Pair;
class Graph
{
	public:
		//a vector of vectors of Pairs to represent an adjancency list
		vector<vector<Pair>>adjList;
		Graph(vector<Edge>const &edges,int n)
		{
			adjList.resize(n);  //resize the vector to hold 'n' elements of type vector<Edge>
			for(auto &edge: edges)  //add edges to the directed graph
			{
				int src=edge.src;
				int dest=edge.dest;
				int weight=edge.weight;
				
				adjList[src].push_back(make_pair(dest,weight)); //insert at the end
				//uncomment the following code for undirected graph
				//adjList[dest].push_back(make_pair(src,weight));
			} //end for
		} //end graph
}; //end class


//function to print adjacency list
void printGraph(Graph const &graph,int n)
{
	for(int i=0;i<n;i++)
	{
		//function to print all neighboring vertices of a given vertex
		
		for(Pair v: graph.adjList[i])
		{
			cout<<"("<<i<<","<<v.first<<","<<v.second<<")";
		}
		cout<<endl;
	} //end for
} //end printGraph

int main()
{
	vector<Edge>edges={{0,1,6},{1,2,7},{2,0,5},{2,1,4},{3,2,10},{5,4,1},{4,5,3}}; //(x,y,w)->edge from 'x' to 'y' with weight 'w'
	
	//total number of nodes in the graph
	int n=6;
	
	Graph graph(edges,n);
	
	//print adjacency list representation of a graph
	printGraph(graph,n);
	return 0;
}
