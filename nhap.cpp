#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int m, n, k;
vector<int> ke[10001];
bool visited[10001];
void DFS(int u){
    visited[u] = true;
	cout << u << " ";
	for(auto x : ke[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
}
void testcase(){
	cin >> m >> n >> k;
	for(int i = 0; i < n; i++){
		int u, v;
		cin >> u >> v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	memset(visited, false, sizeof(visited));
	DFS(k);
	cout << endl;
	for(int i = 1; i < m; i++){
	    ke[i].clear();
	}
}
int main(){
    int t;
    cin >> t;
    while (t--){
    	testcase();
    }
    return 0;
}
