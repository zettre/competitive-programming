#include <iostream>
#include <list>
using namespace std;
class Graph
{
	int V;
	list<int> *adj;
	bool isCyclic(int v,bool visited[],int parent)
	{
		visited[v]=true;
		list<int>::iterator i;
		for(i=adj[v].begin();i!=adj[v].end();i++)
		{
			if(!visited[*i])
			{
				if(isCyclic(*i,visited,v))
					return true;
			}
			else if(*i!=parent)
				return true;
		}
		return false;
	}
public:
	Graph(int V)
	{
		this->V=V;
		adj=new list<int>[V];
	}
	void addEdge(int v,int w)
	{
		adj[v].push_back(w);
		adj[w].push_back(v);
	}
	bool isTree()
	{
		bool *visited=new bool[V];
		for(int i=0;i<V;i++)
			visited[i]=false;
		if(isCyclic(0,visited,-1))
			return false;
		for(int i=0;i<V;i++)
			if(!visited[i])
				return false;
			return true;
	}
};
int main()
{
	int nodes,edges;
	cin>>nodes>>edges;
	Graph g(nodes);
	int i=1;
	int v,w;
	while(i<=edges)
	{
		cin>>v>>w;
		g.addEdge(v-1,w-1);
		i++;
	}
	if(g.isTree()) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}