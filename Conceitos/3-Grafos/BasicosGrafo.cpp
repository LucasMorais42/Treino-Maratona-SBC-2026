#include <bits/stdc++.h>
using namespace std;


int main(){
	
	//Representa��o Lista de Adjac�ncia (grafos n�o-ponderados)
	
	vector<vector<int>> lista_adj; //vetor de vetores, pode crescer dinamicamente
	//lista_adj[0] -> representa as rela��es do v�rtice 0, ou seja 0->1, 0->2...
	
	//pode ser representado tamb�m como:
	vector<int> lista_adj[n+1];	//representa��o est�tica, � mais r�pida, mas menos segura
	//cada posi��o no lista_adj tem um vector<int>
	
	//Representa��o Lista de Adjac�ncia (grafos-ponderados)
	vector<vector<pair<int, int>>> lista_adj_ponderada; 
	//Aqui mant�m-se a l�gica do vetor de vetores, por�m adicionando um pair
	//lista_adj_ponderada[0] -> tem um vetor de posi��es pair, em que representam v�rtices relacionados a 0 e sua distancia
	//lista_adj_ponderada[0] -> {{1,2}, {3,4}, {5, 6}}; 
	//Significa que 0 tem rela��o com 1, 3 e 5, e a dist�ncia para cada um � o segundo valor (2, 4 e 6).
	
	
}

	
	//Adicionando rela��es entre v�rtices:
	
	//Como cada posi��o do lista_adj representa um v�rtice, n�s simplesmente fazemos um push_back no vetor naquela representacao
	
//pego a refer�ncia pra minha lista de adjcencia, um v�rtice u que � o que eu quero criar uma liga��o, v�rtice v quem vai ser ligado a u
void adicionarArestaGrafosNaoPonderados(vector<vector<int>>& lista_adj, int u, int v){
	
	//u-1 pq pensa que minha lista come�a em 0, mas a posicao 0 representa o v�rtice 1.
	lista_adj[u-1].push_back(v);
	
	//Fazendo dessa maneira estou fazendo um grafo-direcionado, pois vai de u at� v, se quisermos um grafo n�o direcionado precisamos:
	
	lista_adj[v-1].push_back(u);
	//ou seja, u vai at� v, mas tamb�m v vai at� u.
	
}

void adicionarArestaGrafosPonderados(vector<vector<pair<int, int>>>& lista_adj, int u, int v, int peso){
	
	lista_adj[u-1].push_back({v, peso});
	//ou seja adiciono na posi��o u-1 o v�rtice v e o peso, ou seja, u -> v com -> tendo peso.
	
	//Caso o grafo seja n�o-direcionado, precisa fazer o mesmo caminho mas inversamente
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



