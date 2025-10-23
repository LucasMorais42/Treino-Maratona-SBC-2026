#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	vector<int> largada;
	vector<int> chegada;
	int valor;
	while(cin>>n){
		int total = 0;
		for(int j=0; j<n; j++){
			cin >> valor;
			largada.push_back(valor);
		}
		for(int w=0; w<n; w++){
			cin >> valor;
			chegada.push_back(valor);
		}
		
		for(int z=chegada.size()-1; z>=0; z--){
			auto posicao_chegada = find(chegada.begin(), chegada.end(), largada[z]);
			int distancia_pos_chegada = distance(chegada.begin(), posicao_chegada);
			cout << "DISTANCIA POS CHEGADA: " << distancia_pos_chegada << "\n";
			int quanto_deslocou = z-distancia_pos_chegada;
			if(distancia_pos_chegada<z){
				
				total+=quanto_deslocou;
				cout << "VALOR " << largada[z] << " QUANTO DESLOCOU: " << quanto_deslocou << "\n";
			}
			else{
				continue;
			}
		}
		cout << total << "\n";
	}
}
/*
*** enviando com erro, a logica vai ser:
- movimenta a partir do ultimo elemento (valor 5)
- movimenta ele, caso ele foi pra frente (soma o valor)

- mas toda vez o array vai mudar.*/
