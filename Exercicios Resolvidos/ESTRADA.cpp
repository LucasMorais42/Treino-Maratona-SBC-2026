#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;

set<int> cypria;
vector<vector<tuple<int, int, int>>> grafo;
vector<vector<vector<long long>>> dist;
//o estado dist é: [vertice][passou_por_cypria][estradas_perigosas]
void djikstra(int s, int t, int k){
	priority_queue<tuple<long long, int, int, int>, vector<tuple<long long, int, int, int>>, greater<>> pq;
	//a pq aqui salva {distancia_ate_o_vertice, vertice, eh_cypria_ou_nao, cidades_perigosas}
	int eh_cypria = cypria.find(s)!=cypria.end()? 1 : 0;
	pq.push({0, s, eh_cypria, 0});
	dist[s][eh_cypria][0] = 0;
	while(!pq.empty()){
		auto [w, u, c, p] = pq.top(); pq.pop();
		if(w > dist[u][c][p]) continue;
		
		
		for(auto& [v, d, perig] : grafo[u]){
			int np = p + perig;
			int nc = c || cypria.count(v);
			
			if(np>k) continue;
			
			if(w+d < dist[v][nc][np]){
				dist[v][nc][np] = w+d;
				pq.push({dist[v][nc][np], v, nc, np});
			}
		}
	}
}

int main() { _ //define de io
	int n, m, k, r;
	cin >> n >> m >> k >> r;
	
	grafo.resize(n+1);
	dist.assign(n+1, vector<vector<long long>>(2, vector<ll>(k+1, LINF)));		
	for(int i=0; i<r; i++){
		int x; cin >> x;
		cypria.insert(x);
	} 
	
	int s, t; cin >> s >> t;
	
	for(int i=0; i<m; i++){
		int u, v, w, p; cin >> u >> v >> w >> p;
		grafo[u].push_back({v, w, p});
		grafo[v].push_back({u, w, p});
	}
	djikstra(s, t, k);
	
	long long ans = LINF;
	for(int c=0; c<2; c++){
		
		ans = min(ans, dist[t][1][p]);
		
	}
	
	if(ans!=LINF){
		cout << ans << "\n";
	}else{
		cout << "-1" << "\n";
	}
}

