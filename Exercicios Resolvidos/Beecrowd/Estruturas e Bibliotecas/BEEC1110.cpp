#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	
	while((cin >> n) && n!=0){
	
		deque<int> cartas;
		vector<int> descartadas;
		for(int i=1; i<=n; i++){
			cartas.push_back(i);
		}
		while(cartas.size()>=2){
			int apagada = cartas.front();
			cartas.pop_front();
			descartadas.push_back(apagada);
			
			int troca = cartas.front();
			cartas.pop_front();
			cartas.push_back(troca);
		
			
		}
		cout << "Discarded cards: ";
		for(int w=0; w<descartadas.size(); w++){
			cout << descartadas[w];
			if(w<descartadas.size()-1) cout << ", ";
			else cout << "\n";
		}
		cout << "Remaining card: " << cartas.front() << "\n";
	}
}

