#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;

int dfs(vector<vector<int>>& grafo, int no){
	int cont = 0;
	stack<int> st;
	st.push(no);
	vector<bool> visitados(grafo.size(), false); 

	while(!st.empty()){
		int no = st.top();
		st.pop();
		
		if(visitados[no]) continue;
		visitados[no] = true;
		cont+=2;
		
		
		for(int vizinho : grafo[no]){
			if(!visitados[vizinho]){
				st.push(vizinho);
			}
		}
	}
	return cont-2;
}

int main() { _ //define de io
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int v, a; cin >> v >> a;
		
		vector<vector<int>> grafo(v);
		for(int i=0; i<a; i++){
			int v1, v2; cin >> v1 >> v2;
			grafo[v1].push_back(v2);
			grafo[v2].push_back(v1);
		}
		
		int dfs_result = dfs(grafo, n);
		cout << dfs_result << "\n" << flush;
	}

}

