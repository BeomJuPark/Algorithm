#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M, S;

vector<int> adjList[1001];
bool visited[1001] = {0,};
queue<int> que;

void bfs(int V)
{
	que.push(V);

	while( !que.empty())
	{
		int cur = que.front();
		que.pop();

		if( visited[cur]) { continue;}
		visited[cur] = true;

		printf("%d ", cur);
		for( int i = 0 ; i < adjList[cur].size(); i ++)
		{
			int next= adjList[cur][i];
			que.push(next);
		}
	}
}

int main()
{
	scanf("%d %d %d", &N, &M, &S);

	for(int i = 0 ; i<M ; i++)
	{
		int s, e;
		scanf("%d %d", &s, &e);
		adjList[s].push_back(e);
		adjList[e].push_back(s);
	}
	//sort
	for(int i = 0 ; i < 1001 ; i ++)
	{
		sort(adjList[i].begin(), adjList[i].end());
	}
	fill_n( visited, 1001, false);
	bfs(S);
	
	return 0;
}

