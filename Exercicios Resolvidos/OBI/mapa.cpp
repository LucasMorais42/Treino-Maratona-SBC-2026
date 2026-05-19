#include <bits/stdc++.h>
using namespace std;

int l, c;
vector<vector<char>> grafo;
vector<int> dx = {0, 0, 1, -1};
vector<int> dy = {1, -1, 0, 0};
vector<vector<bool>> vis;

bool val(int x, int y){
    return x>=0 and y>=0 and x<l and y<c and grafo[x][y]=='H' and !vis[x][y];
}

pair<int, int> bfs(pair<int, int> st)
{
    queue<pair<int, int>> q;
    pair<int, int> v;
    q.push(st); vis[st.first][st.second] = true;
    while(!q.empty()){
        v = q.front(); q.pop();
        for(int i=0; i<4; i++){
            int n_x = dx[i]+v.first;
            int n_y = dy[i]+v.second;
            if(val(n_x, n_y)){
                q.push({n_x, n_y}); 
                vis[n_x][n_y] = true;
            }
        }
    }
    return v;
}

int main(){
    cin >> l >> c;
    grafo.resize(l, vector<char>(c));
    vis.resize(l, vector<bool>(c, false));
    pair<int, int> start;
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            cin>> grafo[i][j];
            if(grafo[i][j]=='o'){
                start = {i, j};
            }
        }
    }
    pair<int, int> ans = bfs(start);
    cout << ++ans.first << " " << ++ans.second << "\n";
}

