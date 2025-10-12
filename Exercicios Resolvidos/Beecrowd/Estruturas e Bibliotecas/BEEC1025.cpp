#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	

	int n, q;
	int caso_teste = 1;
	while((cin>>n>>q) && n!=0 && q!=0){
		vector<int> min_pq; 
		for(int i=0; i<n; i++){
			int valor;
			cin >> valor;
			
			min_pq.push_back(valor);
		}
		sort(min_pq.begin(), min_pq.end());
		cout << "CASE# " << caso_teste << ":\n";
		for(int j=0; j<q; j++){
			int buscando;
			cin >> buscando;
			auto it = find(min_pq.begin(), min_pq.end(), buscando);
			
			if(it!=min_pq.end()){
				int posicao = distance(min_pq.begin(), it)+1;
				cout << buscando << " found at " << posicao << "\n";
			}
			else{
				cout << buscando << " not found\n";
			}
			
		
		}
		caso_teste++;
	} 
}

