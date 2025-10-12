#include <bits/stdc++.h>
using namespace std;

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	cin.ignore();
	for(int i=0;i<n;i++){
		string frase;
		getline(cin, frase);
		int metade = frase.length()/2;
		
		string esquerda = frase.substr(0, metade);
		reverse(esquerda.begin(), esquerda.end());
		
		string direita = frase.substr(metade, frase.length());
		reverse(direita.begin(), direita.end());
		
		string nova_frase = esquerda.append(direita);
		cout << nova_frase << "\n";
	}
}

/*Explica��o:

A impressora estava imprimindo errado, do come�o at� a metade, o texto estava sendo invertido, ou seja:
saindo do centro pra margem esquerda.

Da metade pro final, estava saindo do centro pra margem direita

ou seja, a frase:

HAPPY HOLIDAYS estava sendo impressa H YPPAHSYADILOH, pq:
metade dessa string � 7.
HAPPY H -> 7 caracteres
Esta saindo do centro -> margem direita (ou seja, imprimindo aos contrarios) -> H YPPAH

O mesmo ocorre com:
OLIDAYS -> SYADILO

No caso a impress�o final fica junta pq inverteu a string que tinha o espa�o " "H[olidays]

A ideia � pegar a frase quebrada, separar em direita e esquerda, depois reverter e concatenar 

*/
