#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> grafo;
vector<bool> visited;

bool dfs(int u, int parent){


    visited[u] = true;
    for(auto w: grafo[u]){
       
        if(!visited[w]){
            if(dfs(w, u)) return true;
        }
        else if(w!=parent){
           return true;
        }
    }
    return false;
}


int main(){

    int n, m; cin>>n>>m;
    grafo.resize(n);
    visited.resize(n, false);
    for(int i=0; i<m; i++){
        int u, v; cin>>u>>v;
        u--, v--;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }
    int ciclos=0;
    for(int i=0; i<n;i++){
        if(!visited[i]){
            if(dfs(i, -1)){
                ciclos++;
            }
        }
        
    }
    cout << ciclos << "\n";

}
