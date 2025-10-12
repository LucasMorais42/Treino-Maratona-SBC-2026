#include <bits/stdc++.h>
using namespace std;


int main(){
	
	//Representação Lista de Adjacência (grafos não-ponderados)
	
	vector<vector<int>> lista_adj; //vetor de vetores, pode crescer dinamicamente
	//lista_adj[0] -> representa as relações do vértice 0, ou seja 0->1, 0->2...
	
	//pode ser representado também como:
	vector<int> lista_adj[n+1];	//representação estática, é mais rápida, mas menos segura
	//cada posição no lista_adj tem um vector<int>
	
	//Representação Lista de Adjacência (grafos-ponderados)
	vector<vector<pair<int, int>>> lista_adj_ponderada; 
	//Aqui mantém-se a lógica do vetor de vetores, porém adicionando um pair
	//lista_adj_ponderada[0] -> tem um vetor de posições pair, em que representam vértices relacionados a 0 e sua distancia
	//lista_adj_ponderada[0] -> {{1,2}, {3,4}, {5, 6}}; 
	//Significa que 0 tem relação com 1, 3 e 5, e a distância para cada um é o segundo valor (2, 4 e 6).
	
	
}

	
	//Adicionando relações entre vértices:
	
	//Como cada posição do lista_adj representa um vértice, nós simplesmente fazemos um push_back no vetor naquela representacao
	
//pego a referência pra minha lista de adjcencia, um vértice u que é o que eu quero criar uma ligação, vértice v quem vai ser ligado a u
void adicionarArestaGrafosNaoPonderados(vector<vector<int>>& lista_adj, int u, int v){
	
	//u-1 pq pensa que minha lista começa em 0, mas a posicao 0 representa o vértice 1.
	lista_adj[u-1].push_back(v);
	
	//Fazendo dessa maneira estou fazendo um grafo-direcionado, pois vai de u até v, se quisermos um grafo não direcionado precisamos:
	
	lista_adj[v-1].push_back(u);
	//ou seja, u vai até v, mas também v vai até u.
	
}

void adicionarArestaGrafosPonderados(vector<vector<pair<int, int>>>& lista_adj, int u, int v, int peso){
	
	lista_adj[u-1].push_back({v, peso});
	//ou seja adiciono na posição u-1 o vértice v e o peso, ou seja, u -> v com -> tendo peso.
	
	//Caso o grafo seja não-direcionado, precisa fazer o mesmo caminho mas inversamente
	lista_adj[v-1].push_back({u,peso});
	
}

void imprimirLigacoesGrafosNaoPonderados(vector<vector<int>>& lista_adj){
	
	for(int i=0; i<lista_adj.size(); i++){
		cout << "vertice " << i << " ->";
		for(int vizinho:lista_adj[i]){
			cout << vizinho << " ";
		}
		cout << "\n";
	}
}

void imprimirLigacoesGrafosPonderados(vector<vector<pair<int, int>>>& lista_adj){
	
	for(int i=0; i<lista_adj.size(); i++){
		cout << "vertice " << i <<  " ->";
		
		for(auto vizinho:adj[i]){
			cout << "(" << vizinho.first << ", peso=" << vizinho.second << ")";
		}
		cout << "\n";	
	}	

}



