#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;
//https://open.kattis.com/problems/fire2
int n, m;
vector<vector<char>> grafo;
vector<vector<bool>> vis;
vector<vector<int>> dist;
vector<int> dx = {0, 0, 1, -1};
vector<int> dy = {1, -1, 0, 0};
bool valido(int x, int y){
    return x>=0 and y>=0 and x<n and y <m and !vis[x][y] and grafo[x][y]!='#';
}

void bfs_ms(vector<pair<int, int>> sources){
    queue<pair<int, int>> q; 
    for(auto& p : sources){
        q.push(p);
        vis[p.first][p.second]=true;
        dist[p.first][p.second]=0;
    }

    while(!q.empty()){
        auto u = q.front(); q.pop();
        for(int i=0; i<4; i++){
            int n_x = u.first + dx[i];
            int n_y = u.second + dy[i];

            if(valido(n_x, n_y)){
                q.push({n_x, n_y});
                vis[n_x][n_y] = true;
                dist[n_x][n_y] = dist[u.first][u.second]+1;
            }
        }
    }
}

int bfs(pair<int, int> st){
    for(auto& linha: vis){
        fill(linha.begin(), linha.end(), false);
    }
   
    queue<pair<int, int>> q; q.push(st);
    vis[st.first][st.second] = true;
    dist[st.first][st.second] = 0;

    while(!q.empty()){
        auto u = q.front(); q.pop();
        if(u.first==0 or u.second==0 or u.first==n-1 or u.second==m-1) 
            return dist[u.first][u.second]+1;

        for(int i=0; i<4; i++){
            int n_x = u.first + dx[i];
            int n_y = u.second + dy[i];
            if(valido(n_x, n_y) and dist[u.first][u.second]+1 < dist[n_x][n_y]){
                q.push({n_x, n_y});
                dist[n_x][n_y] = dist[u.first][u.second]+1;
                vis[n_x][n_y] = true;
            }
        }
    }
    return -1;
}

int main(){ _

    
    int t;
    cin >> t;
 
    while(t--){
        cin >> m >> n;
        pair<int, int> source;
        vector<pair<int, int>> ms;
        vis.assign(n, vector<bool>(m, false));
        dist.assign(n, vector<int>(m, INF));
        grafo.assign(n, vector<char>(m));

        for(int i=0; i<n; i++) {
            for(int j=0;j<m;j++){
                cin>>grafo[i][j];
                if(grafo[i][j]=='@'){
                    source = {i,j};
                }
                if(grafo[i][j]=='*'){
                    ms.push_back({i,j});
                }
            }
        }
        bfs_ms(ms);
        int ans = bfs(source);
        if(ans==-1) cout << "IMPOSSIBLE\n" << flush;
        else cout << ans << "\n" << flush;
    }

    return 0;
}