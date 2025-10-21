#include <bits/stdc++.h>
using namespace std;

int check_linha(int matriz[9][9]){
	int linhas =0;
	map<int, int> numeros;
	for(int i=0; i<9; i++){
		map<int, int> numeros;
		int soma =0;
		for(int j=0; j<9; j++){
			numeros[matriz[i][j]]++;
			soma+=matriz[i][j];
		}
		//bool todos_diferentes = all_of(numeros.begin(), numeros.end(), [&](const pair<int, int>& it){
		//	return it.second == 1;
		//});
		if(soma==45 && numeros.size()==9){
			linhas++;
		}
	}

	return linhas;
}

int check_coluna(int matriz[9][9]){
	
	int colunas =0;
	for(int i=0; i<9; i++){
		map<int, int> numeros;
		int soma =0;
		for(int j=0; j<9; j++){
			numeros[matriz[j][i]]++;
			soma+=matriz[j][i];
		}
		//bool todos_diferentes = all_of(numeros.begin(), numeros.end(), [&](const pair<int, int>& it){
		//	return it.second == 1;
	//	});
		if(soma==45 && numeros.size()==9){
			colunas++;
		}
	}

	return colunas;
}

int check_subgrids(int matriz[9][9]){
	int subgrid=0;
	//pois temos 3 linhas com 3 subgrids
	for(int br=0; br<3; br++){
		//pois temos 3 colunas com 3 subgrids
		for(int bc=0; bc<3; bc++){
			map<int, int> numeros;
			int soma=0;
			for(int i=0; i<3; i++){
				for(int j=0; j<3; j++){
					numeros[matriz[i+br*3][j+bc*3]]++; //*3 pois se é a segunda coluna de subgrid, temos que começar com j=3
					//se é a segunda linha de subgrids, tem começar na matriz com linha = 3
					soma+=matriz[i+br*3][j+bc*3];
				}
			}
			if(soma==45 && numeros.size()==9){
				subgrid++;
			}
		}
	}
	return subgrid;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	
	int n;
	cin >> n;
	for(int i=0; i<n;i++){

		int matriz[9][9];
		int linhas=0, colunas=0, subgrid=0;
		int cont=0;
		for(int j=0; j<9; j++){
			for(int w=0; w<9; w++){
				int valor;
				cin>>valor;
				matriz[j][w] = valor;
			}
		}
		
		linhas = check_linha(matriz);
		colunas = check_coluna(matriz);
		subgrid=check_subgrids(matriz);
		
		
		cout << "Instancia " << i+1 << "\n";
		if(linhas==9 && colunas==9 && subgrid==9){ //tem que ter 9 linhas com somatoria =45, e com todos os numeros de 1 a 9
		//o mesmo para as colunas e o mesmo para cada subgrid
			cout << "SIM\n"<< flush;
		}
		else{
			cout << "NAO\n"<< flush;
		}
		cout << "\n" << flush;
}}




