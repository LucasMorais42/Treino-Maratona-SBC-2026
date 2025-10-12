#include <bits/stdc++.h>
using namespace std;

typedef pair<string, int> psi;
typedef pair<int, int> pii; //distancia e no
typedef vector<vector<pii>> adj_ponderada; //grafo[u] = ({vertice

const int INFTO = 100000009;

int djikstra(adj_ponderada& grafo, int origem, int destino){
	
	int n = grafo.size(); //pego todos os vértices que um grafo tem
	vector<int> dist(n, INFTO); //todas as distancias sao infinitas
	dist[origem] = 0; // da origem até a origem é 0.

	priority_queue<pii, vector<pii>, greater<pii>> pq; //a priority queue usa a concepcao {distancia e no}

	pq.push({0, origem}); //pois da origem até a origem eu tenho 0 de distancia
	
	while(!pq.empty()){
		int peso = pq.top().first;  
		int vizinho = pq.top().second; 
		pq.pop();
		
		
		if(peso>dist[vizinho]){
			continue;
		}
		
		
		// VIZINHOS DE INDAITUBA
		for(auto &viz: grafo[vizinho]){
			//aqui eu acesso os vizinhos de um vizinho
			
			int v = viz.first;   //CAMPINAS
			int w = viz.second;  //50
			
			
			//SE DE ITU -> INDAIATUBA + (DISTANCIA DE INDAIATUBA -> CAMPINAS) < ITU -> CAMPINAS
			if(dist[vizinho]+w < dist[v]){
				dist[v] = dist[vizinho]+w; DIST[INDAIATUBA] = 20;
				pq.push({dist[v], v}); 
			}
		
		}
		
		
		
	}
	return dist[destino];
	
	/*Inicio verificando da ORIGEM a seus vizinhos, exemplo:
	Itu -> Sorocaba -> Campinas -> Indaiatuba
	
	Vimos quanto leva saindo de ITU direto a todas as outras cidades.
	
	Depois, na priority QUEUE, vai ter:
	
	({10, SOROCABA}, {20, CAMPINAS}, {30, INDAIATUBA}), Ou seja, as distancias de ITU até as cidades.
	
	Pego Sorocaba, e vejo as distancias de SOROCABA até as suas vizinhas, se tivermos um caminho mais rápido
	pensando:
	Saindo de sorocaba até campinas, eu levo menos do que 20 (ou seja, de ITU -> CAMPINAS). Se sim, o menor caminho
	de Itu -> Campinas passa a ser:
	
	DIST[CAMPINAS] = DIST[SOROCABA] + PESO (SOROCABA -> CAMPINAS)
	pois aqui temos: PESO(ITU -> SOROCABA) + PESO(SOROCABA -> CAMPINAS) < PESO(ITU -> CAMPINAS)
	
	Caso isso aconteça, esse menor caminho entra na PQ para analisarmos se haverá outro caminho menor.
	
	Vamos fazer isso para INDAIATUBA tbm, e de SOROCABA -> ITU (oq acaba sendo uma verificacao meio sem sentido na maior parte
	das vezes, pois da origem até a origem sempre vai ser mais rapido, mas faz parte do algoritmo).
	
	
	Depois vamos pegar outra posição na PQ, que seria por exemplo campinas, e todo o processo acima se repete
	
	
	*/
	
	
	
	
}

int main(){
	
	int N;
	cout << "Digite o numero de vertices do seu grafo: " << "\n";
	cin >> N;
	adj_ponderada grafo(N+1);
	for(int i=1; i<=N; i++){
		
		while(true){
			int vizinho;
			int peso;
			cout << "Voce esta recebendo os vizinhos do vertice: " << i <<"\n";
			cout << "Digite vizinho-peso" << "\n";
			cin >> vizinho >> peso;
			
			if(vizinho==0 && peso==0){
				break;
			}
			else{
				grafo[i].push_back({vizinho, peso});
			}
			
		}		
	
		
	}
	
	cout << "A distancia entre a cidade: 1 e 4 eh de " << djikstra(grafo, 1, 4) << "\n";
	
	
	
}
