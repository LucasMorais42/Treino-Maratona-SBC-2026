#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<bool> visited;

void dfs(int u){

    visited[u] = true;
    for(auto w : g[u]){
        if(!visited[w]){
            dfs(w);
        }    
    }
}

int main(){

    int n, m; cin >> n >> m;
    g.resize(n);
    visited.resize(n, false);
    for(int i=0; i<m; i++){
        int u, v; cin >> u >> v;
        u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int times = 0;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            times++;
            dfs(i);
        }
    }
    cout << times << "\n";

}