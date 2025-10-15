#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int alice, beatriz;
	
	while(cin>>alice>>beatriz && alice!=0 && beatriz!=0){
		set<int> cartas_alice;
		set<int> cartas_beatriz;
		int trocas =0;
		int valor;
		for(int i =0; i<alice; i++){
			
			cin>>valor;
			cartas_alice.insert(valor);
		}
		
		for(int j=0; j<beatriz; j++){
			cin>>valor;
			cartas_beatriz.insert(valor);
		}
		
		int maior=min(cartas_beatriz.size(), cartas_alice.size());
		if(maior==cartas_beatriz.size()){
			for(int cartas : cartas_beatriz){
				auto it = cartas_alice.find(cartas);
				if(it == cartas_alice.end()){
					trocas++;
				}
			}
		}
		else if(maior==cartas_alice.size()){
			for(int cartas : cartas_alice){
				auto it = cartas_beatriz.find(cartas);
				if(it == cartas_beatriz.end()){
					trocas++;
				}
			}
		}
		
		cout << trocas << "\n" << flush;
	}
}

