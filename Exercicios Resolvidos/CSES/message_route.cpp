#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;

int n, m;
vector<vector<int>> grafo;
vector<int> pai;
vector<bool> vis;
int bfs(int start, int dest){
    queue<pair<int, int>> q;
    q.push({start, 0});
    vis[start]=true;
    pai[start] = start;
    while(!q.empty()){
        auto [u, d] = q.front(); q.pop();
        if(u == dest) return d;
        for(auto v : grafo[u]){
            if(!vis[v]){
                q.push({v, d+1});
                vis[v] = true;
                pai[v] = u;
            }
        }
    }
    return -1;
}

vector<int> path(int v){
    vector<int> ret;
    if(!vis[v]) return ret;

    ret.push_back(v);
    while(pai[v]!=v){
        v = pai[v];
        ret.push_back(v);
    }
    reverse(ret.begin(), ret.end());
    return ret;
}


int main(){
    cin >> n >> m;
    grafo.resize(n);
    pai.resize(n, -1);
    vis.resize(n, false);
    for(int i=0; i<m; i++){
        int u, v; cin >> u >> v; u--, v--;
        grafo[u].push_back(v); grafo[v].push_back(u);
    }
    int dist = bfs(0, n-1);
    vector<int> caminho = path(n-1);
    if(dist==-1){
        cout << "IMPOSSIBLE\n";
    }else{
        cout << caminho.size() << "\n";
        for(auto x: caminho){
            cout << ++x << " ";
        }
        cout << "\n";
    }

}