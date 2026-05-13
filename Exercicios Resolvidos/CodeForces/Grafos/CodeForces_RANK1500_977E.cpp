#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> grafo;
vector<bool> visited;
bool eh_ciclo;
void dfs(int u){

    visited[u] = true;

    if(grafo[u].size()!=2){
        eh_ciclo= false;
    } 

    for(auto w: grafo[u]){
        if(!visited[w]){
            dfs(w);
        }
    }
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
            eh_ciclo = true;
            dfs(i);
            if(eh_ciclo){
                ciclos++;
            }
        }
        
    }
        cout << ciclos << "\n";
    }
  


