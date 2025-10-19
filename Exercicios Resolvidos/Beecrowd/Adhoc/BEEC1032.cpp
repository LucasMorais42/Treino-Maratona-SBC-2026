#include <bits/stdc++.h>
using namespace std;

vector<int> primos;
void adiciona_primos(int n){
	primos.clear();
    int quantidade_desejada = n - 1;  // Para n=10, queremos 9 primos
    int numero = 2;
    
    while(primos.size() < quantidade_desejada){
        bool eh_primo = true;
        // Verifica se o n�mero � primo
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
            
            int pos = 0; // Come�a na primeira pessoa (�ndice 0 = pessoa 1)
            
            for(int i = 0; i < n - 1; i++) { //n-1, pois s�o 5 elimina��es no circulo de  6 pessoas
                // Pega o i-�simo primo
                int m = primos[i];
                
                // Conta m pessoas a partir da posi��o atual
                // A m-�sima pessoa � eliminada
                //m-1 pois a primeira pessoa j� � um passo
                pos = (pos + m - 1) % pessoas.size();
                
                // Remove a pessoa na posi��o calculada
                pessoas.erase(pessoas.begin() + pos);
                
                // N�o precisa ajustar posi��o porque erase j� mant�m o vetor consistente
                // A pr�xima elimina��o come�a na pessoa seguinte � que foi eliminada
            }
            
            cout << pessoas[0] << "\n" << flush;
		}
		
	}
}

/*
Esse exercicio come�a tendo uma lista de primos, sendo n-1 primos, pois n � o total de pessoas no circulo
como s� tem n-1 elimina��es para sobrar 1, s�o n-1 primos

Ap�s isso inicia um vetor em que coloca na posi��o 0 um representante numero dele, por exemplo
pessoas[0] -> 1, pois aqui eu quero falar que a primeira posi��o do vetor � a pessoa 1

Vamos come�ar as elimina��es na primeira pessoa
Vamos come�ar as elimina��es pelo primeiro primo

pos = (pos + m - 1) % pessoas.size();
Aqui quem � eliminado na primeira elimina��o �:
pos = (0+2-1)%6  -> 1%6 -> 1
Contamos m-1, pois a primeira pessoa j� � o primeiro m-passo

pessoas.erase(pessoas.begin() + pos);
vai remover a posi��o 0+1, ou seja, remove a pessoas[1], que no nosso caso � a pessoa 2.

Caso de teste n = 4
pessoas = [1, 2, 3, 4]
primos = [2, 3, 5] -> n-1 primos

Elimina��es
pos = (0+1)%4 -> elimina pessoas[1] (ou o 2)
pessoas = [1,3,4]

Vamos come�ar a elimnar a partir da pessoa 3

pos(1+2)%3 -> elimina pessoas[0] (ou o 1)
pessoas = [3,4]

pos = (0+4)%2 -> elimina pessoas[0] (ou o 3)
pessoas [4] -> sobrevivente

*/

