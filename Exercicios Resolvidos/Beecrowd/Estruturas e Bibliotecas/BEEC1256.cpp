#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	int n, valor;
	bool first = true;
	cin >> n;
	for(int i=0; i<n; i++){
		if(first)   first = false;
        else        cout << "\n"<<flush;
		int chave_hash, qtd_itens;
		map<int, vector<int>> mapeamento;
		cin>> chave_hash >> qtd_itens;
		for(int j=0; j<qtd_itens;j++){
			cin >> valor;
			int posicao_map = valor%chave_hash;
			mapeamento[posicao_map].push_back(valor);
		}
		
		for(int i=0; i<chave_hash; i++){
			cout << i << " ->" << " ";
			vector<int> lista = mapeamento[i];
			if(lista.empty()){
				cout << "\\" << "\n"; 
			}
			for(int j=0; j<lista.size();j++){
				cout << lista[j] << " ";
				if(j!=lista.size()-1){
					cout << "-> ";
				}
				else{
					cout << "-> " << "\\" << "\n";
				}
			}
		}
	
		
	}

}

