#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;
int posibleX[4]={0,-1,0,1};
int posibleY[4]={-1,0,1,0};
queue <pair<int,int> > s;
int n,m;
bool validPosition(int a,int b)
{
	return ((a<n && a>=0) && (b<m && b>=0))?true:false;
}
int bfs(vector<vector<int> > *visited,vector<vector<int> > *graph)
{
	while(s.empty()==false)
	{
		pair <int,int> top=s.front();
		s.pop();
		for(int i=0;i<4;i++)
		{
			int newx=top.first+posibleX[i],newy=top.second+posibleY[i];
			if(validPosition(newx,newy))
			{
				if(visited->at(top.first)[top.second]+1<visited->at(newx)[newy])
				{
					visited->at(newx)[newy]=visited->at(top.first)[top.second]+1;
					pair<int,int> node(newx,newy);
					s.push(node);
				}
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		vector<vector<int> > graph;
		vector<int> c(m,0);
		vector<vector<int> > visited(n,c);
		string line;
		for(int i=0;i<n;i++)
		{
			vector<int> temp;
			cin>>line;
			for(int j=0;j<m;j++)
			{
				visited[i][j]=1<<30;
				int borw=line[j]-'0';
				if(borw==1)
				{
					pair <int,int> start(i,j);
					s.push(start);
					visited[i][j]=0;
				}
				temp.push_back(borw);
			}
			graph.push_back(temp);
		}
		bfs(&visited,&graph);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(graph[i][j]==0)
				{
					(j+1<m)?printf("%d ",visited[i][j]):printf("%d",visited[i][j]);
				}
				else
				{
					(j+1<m)?printf("0 "):printf("0");
				}

			}
			printf("\n");
		}
	}
	return 0;
}