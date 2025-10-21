#include <bits/stdc++.h>
using namespace std;

vector<int> primos;
void adiciona_primos(int n){
	primos.clear();
    int quantidade_desejada = n - 1;  // Para n=10, queremos 9 primos
    int numero = 2;
    
    while(primos.size() < quantidade_desejada){
        bool eh_primo = true;
        // Verifica se o número é primo
        for(int j = 2; j * j <= numero; j++){
            if(numero % j == 0){
                eh_primo = false;
                break;
            }
        }
        
        if(eh_primo){
            primos.push_back(numero);
        }
        numero++;
    }
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	
	while(cin >> n && n!=0){
		
		
		if(n==1){
			cout << 1 << "\n" << flush;
		}
		else{
			adiciona_primos(n);
	
            
            vector<int> pessoas;
            for(int i = 1; i <= n; i++) {
                pessoas.push_back(i);
            }
            
            int pos = 0; // Começa na primeira pessoa (índice 0 = pessoa 1)
            
            for(int i = 0; i < n - 1; i++) { //n-1, pois são 5 eliminações no circulo de  6 pessoas
                // Pega o i-ésimo primo
                int m = primos[i];
                
                // Conta m pessoas a partir da posição atual
                // A m-ésima pessoa é eliminada
                //m-1 pois a primeira pessoa já é um passo
                pos = (pos + m - 1) % pessoas.size();
                
                // Remove a pessoa na posição calculada
                pessoas.erase(pessoas.begin() + pos);
                
                // Não precisa ajustar posição porque erase já mantém o vetor consistente
                // A próxima eliminação começa na pessoa seguinte à que foi eliminada
            }
            
            cout << pessoas[0] << "\n" << flush;
		}
		
	}
}

/*
Esse exercicio começa tendo uma lista de primos, sendo n-1 primos, pois n é o total de pessoas no circulo
como só tem n-1 eliminações para sobrar 1, são n-1 primos

Após isso inicia um vetor em que coloca na posição 0 um representante numero dele, por exemplo
pessoas[0] -> 1, pois aqui eu quero falar que a primeira posição do vetor é a pessoa 1

Vamos começar as eliminações na primeira pessoa
Vamos começar as eliminações pelo primeiro primo

pos = (pos + m - 1) % pessoas.size();
Aqui quem é eliminado na primeira eliminação é:
pos = (0+2-1)%6  -> 1%6 -> 1
Contamos m-1, pois a primeira pessoa já é o primeiro m-passo

pessoas.erase(pessoas.begin() + pos);
vai remover a posição 0+1, ou seja, remove a pessoas[1], que no nosso caso é a pessoa 2.

Caso de teste n = 4
pessoas = [1, 2, 3, 4]
primos = [2, 3, 5] -> n-1 primos

Eliminações
pos = (0+1)%4 -> elimina pessoas[1] (ou o 2)
pessoas = [1,3,4]

Vamos começar a elimnar a partir da pessoa 3

pos(1+2)%3 -> elimina pessoas[0] (ou o 1)
pessoas = [3,4]

pos = (0+4)%2 -> elimina pessoas[0] (ou o 3)
pessoas [4] -> sobrevivente

*/

