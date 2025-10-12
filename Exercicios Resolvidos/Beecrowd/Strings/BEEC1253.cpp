#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int N;
	cin >> N;
	
	string letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	for(int i=0; i<N; i++){
		string palavra;
		string nova_frase = "";
		int movimentacao;
		cin >> palavra;
		cin >> movimentacao;
		
		
		
		for(char letra:palavra){
			
			auto it = find(letras.begin(), letras.end(), letra);
			int distancia = distance(letras.begin(), it);
		
			//(distancia da letra - movimentacao + 26)%26
			//V QUE ANDOU 2 POSICOES PRA FRENTE
			//OU SEJA, (V - 2 + 26)%26
			//21-2 + 26 -> 19+ 26 = 45%26 = 19
			nova_frase+=letras.at((distancia - movimentacao + letras.length()) % 26);

		}
		cout << nova_frase << "\n";
	}
	
}
