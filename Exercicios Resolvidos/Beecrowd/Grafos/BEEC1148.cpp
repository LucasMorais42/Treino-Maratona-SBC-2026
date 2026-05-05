#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;

int bfs(vector<vector<pair<int, int>>>& grafo, int o, int dest){
	vector<int> dist(grafo.size(), 1e9);
	
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	
	dist[o] = 0;
	pq.push({0, o});
	

	while(!pq.empty()){
		int d = pq.top().first;
		int u = pq.top().second;
		pq.pop();
		if(d>dist[u]) continue;
		
		for(pair<int, int> p : grafo[u]){
			if(dist[p.first]>dist[u]+p.second){
				dist[p.first] = dist[u] + p.second;
				pq.push({dist[p.first], p.first});
			}
		}
	}
	return dist[dest];
	
}

int main() { _ //define de io
	
	int n, e;
	while(cin>>n>>e && n!=0 && e!=0){
		
		int x, y, h;
		vector<vector<pair<int,int>>> g(n+1);
		for(int i=0; i<e; i++){
			cin >> x >> y >> h;
			g[x].push_back({y,h});
		}
		
		int k; cin >> k;
		
		for(int i=0; i<k; i++){
			int o, d;
			cin >> o >> d;
			
			int ida = -1;
			int volta = -1;
			for(int i=0; i<g[o].size(); i++){
				int vizinho = g[o][i].first;
				if(vizinho == d){
					ida = i;
					break;
				}
			}
			
			for(int i=0; i<g[d].size(); i++){
				int vizinho = g[d][i].first;
				if(vizinho == o){
					volta = i;
					break;
				}
			}
		
			
			if(ida!=-1 && volta!=-1){
				g[o][ida].second=0;
				g[d][volta].second=0;
			}
			int result = bfs(g, o,d);
			
			if(result==1e9){
				cout << "Nao e possivel entregar a carta\n" << flush;
			}
			else {
				cout << result << "\n" << flush;
			}
		}
		
		
	} 

}

