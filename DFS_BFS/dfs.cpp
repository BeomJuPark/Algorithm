#include <iostram>
#include <ctsdio>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int N,M,S;

vector<int> adjList[1001];
blool visited[1001] = { 0,};
stack<int> st;

//recurcive function
void dfs_rec(int V)
{
	if ( vistied[V]) { return;}
	visitied[V] = true;
	printf("%d ", V);
	for(int i = 0 ; i < adjList[V].size() ; i++)
	{
		int next = adjList[V][i];
		dfs(next);
	}
}

//using the stack
void dsf_st(int V)
{
	st.push(V);
	while( !st.empty() )
	{
		int cur = st.top();
		st.pop();

		if( visited[cur]) { continue;}
		visited[cur] = true;
		printf("%d ", cur);

		for( int i = adjList[cur].size()-1 ; i >= 0 ; i--)
		{
			int next = adjList[cur][i];
			st.push(next);
		}
	}
}

int main()
{
	scanf("%d %d %d", &N, &M, &S);
	for( int i = 0; i < M ; i++)
	{
		int s, e;
		scanf("%d %d", &s, &e);
		adjList[s].push_back(e);
		adjList[e].push_Back(s);
	}
        //sort
	for(int i = 0 ; i < 1001 ; i ++)
	{
		sort(adjList[i].begin() , adjList.end());
	}
	fill_n(visited,1001,false);
	dfs(S);
	fill_n(visited,1001,false);
	dfs(S);
	return 0;
}


