#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/gym/101873/problem/D
bool bfs(map<string, set<string>>& g, string first, string procurado){
    queue<string> q; q.push(first);
    map<string, bool> visited;
    visited[first] = true;
    while(!q.empty()){
        string atual = q.front(); q.pop();
        for(auto vizinhos : g[atual]){
           
            if(vizinhos==procurado){
           
                return true;
            }
            else if(!visited[vizinhos]){
             
                q.push(vizinhos);
                visited[vizinhos] = true;
            }
        }
    }
    return false;
}

int main(){

    int n, m; cin>>n>>m;
    cin.ignore();
    map<string, set<string>> grafo;
    for(int i=0; i<n; i++){
        string linha;
      
        getline(cin, linha);
        stringstream ss(linha);
        vector<string> palavras(5);
        for(int i=0; i<5; i++){
            ss >> palavras[i];
        }
        
        grafo[palavras[0]].insert(palavras[4]);
    }

    for (int i=0; i<m; i++){
        string linha;
       
        getline(cin, linha);
        stringstream ss(linha);
        vector<string> palavras(5);
        for(int i=0; i<5; i++){
            ss >> palavras[i];
        }
        string ida = palavras[0];
        string volta = palavras[4];
        if(bfs(grafo, ida, volta)){
            cout << "Fact\n";
        }else if(bfs(grafo, volta, ida)){
            cout << "Alternative Fact\n";
        }else{
            cout << "Pants on Fire\n";
        }
    }
}