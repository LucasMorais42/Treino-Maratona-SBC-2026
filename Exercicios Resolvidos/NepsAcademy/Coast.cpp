#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){ _

    int M, N;
    cin >> M >> N;

    vector<vector<char>> g(M+2, vector<char>(N+2, '.'));

    for(int i=1;i<=M;i++){
        for(int j=1;j<=N;j++){
            cin >> g[i][j];
        }
    }

    vector<int> dx = {1,-1,0,0};
    vector<int> dy = {0,0,1,-1};

    int coast = 0;

    for(int i=1;i<=M;i++){
        for(int j=1;j<=N;j++){

            if(g[i][j] != '#') continue;

            bool ok = false;

            for(int k=0;k<4;k++){

                int nx = i + dx[k];
                int ny = j + dy[k];

                if(g[nx][ny] == '.'){
                    ok = true;
                }
            }

            if(ok) coast++;
        }
    }

    cout << coast << '\n';
}
