#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;

int main() { _ //define de io

	pair<int, char> bota;
	int numero_botas;
	cin >> numero_botas;
	vector<pair<int, int>> botas(61, {0,0}); 
	for(int i=0; i<numero_botas; i++){
		int numero_bota;
		char pe_bota;
		cin >> numero_bota >> pe_bota;
		if(pe_bota=='E'){
			botas[numero_bota].first++;
		}
		else if(pe_bota=='D'){
			botas[numero_bota].second++;
		}
	}
	int total = 0;
	for(int i=0; i<botas.size(); i++){
		
		pair<int, int>& index_bota = botas[i];

		int pares_possiveis = min(index_bota.first, index_bota.second);
		//Usamos o minimo, pois sempre se baseia no minimo que temos para formar pares
		//exemplo: se tenho mais botas esquerdas que direitas, posso pegar o minimo entre ambas
		// min(0, 3) -> nn forma nenhum par de botas
		// min (2, 7) -> forma 2 pares de botas.
		total+=pares_possiveis;
	}
	cout << total << endl;
}
/*Esse é o exercicio das botas, a ideia é receber diversas botas informando
o tamanho e o pé que é (direito ou esquerdo).

A solução para esse exercício faz com que crie-se um vetor que representa em cada
posição o tamanho da bota, ex: posição 30 é uma bota de tamanho 30.

Cada posição do vector possui um pair, representando quantas botas daquele tamanho
são direitas, e quantas são esquerdas, então:
botas[30] = {2, 3} // significa que temos 2 botas esquerdas e 3 direitas
*/

