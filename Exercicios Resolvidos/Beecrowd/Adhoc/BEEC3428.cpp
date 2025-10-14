#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	int n;
	cin >> n;
	vector<int> baloes;
	
	for(int i=0; i<n; i++){
		int valor;
		cin >> valor;
		baloes.push_back(valor);
		
	}
	
	
	unordered_map<int, int> contador;
	int flechas = 0;
	
	for (int h : baloes) {
	    if (contador[h + 1] > 0) { //contador[3] > 0, ou seja, se vem uma flecha da altura 3
	        contador[h + 1]--; //diminui a flecha
	    } else {
	        flechas++; // se não for, ou seja, 0 flechas soma as flechas (novo disparo)
	    }
	    contador[h]++; //coloca que na altura 3, 1 flecha
	}
	 
	cout << flechas << "\n" << flush;
	
}

