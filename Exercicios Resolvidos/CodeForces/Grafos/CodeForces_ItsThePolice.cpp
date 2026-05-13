#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define F first
#define S second
#define PB push_back
#define MP make_pair

//https://codeforces.com/gym/101149/problem/I
int main() {
  
    int n, m; cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i=0; i<m; i++){
        int u, v; cin>>u>>v; u--,v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int minimo = 0;
    for(int i=1; i<n; i++)
    {   
        if(g[i].size()<g[minimo].size()){
            minimo=i;
        }
    }
    
    vector<int> posicoes(n, 1);
    posicoes[minimo]=0;
    for(auto w: g[minimo]){
        posicoes[w] = 0;
    }   

    for(auto i : posicoes){
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}