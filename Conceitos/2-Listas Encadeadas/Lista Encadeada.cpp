#include <bits/stdc++.h>
using namespace std;

class Node{

	
	public:
		int valor;
		Node* next;
		Node(int valor){
			this->valor = valor;
			this->next = nullptr;
		}
};

class LinkedList{

	
	private:
		Node* head;
	
	public:
		
		LinkedList(){
			this->head = nullptr;
		}
		
		
		void adicionarNodeNoInicio(int valor){
			Node* no = new Node(valor);
			//O proximo do no que estou inserindo é meu head (inicio)
			no->next = head;
			//O inicio passa a ser o nó que eu acabei de inserir
			head = no; 
		}
		
		void adicionarNodeNoFim(int valor){
			
			Node* no = new Node(valor);
			//Se a lista está vazia, a partir de agora eu insiro no final
			//e meu head vira o no
			if(head==nullptr){
				head = no;
				return;
			}
			Node* atual = head;
			//Enquanto o próximo do atual não for um nullptr, entao nn cheguei no fim
			while(atual->next != nullptr){
				atual = atual->next;
			}
			
			//quando chegar no fim, faço o next do atual (ultimo no) apontar para o no a ser inserido
			atual -> next = no;
		}
		
		//tipo, inserir na frente do valor 7
		void inserirEntreValores(int valor, int pos){
			Node* atual = head;
			Node* inserir = new Node(valor);
			while(atual->valor != pos){
				atual= atual->next;
			}
			atual->next = inserir;
			
			
		}
		
		void imprimirNos(){
			Node* atual = head;
			//mesmo esquema do inserir ao fim, pego do head até o final, enquanto o atual nn for um ponteiro vazio
			//eu vou imprimindo e puxando o next
			while(atual !=nullptr){
				cout << atual->valor << "\n";
				atual = atual->next;
				
			}
		}	
		
		
};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	LinkedList* listaEncadeada = new LinkedList();
	listaEncadeada->adicionarNodeNoFim(10);
	listaEncadeada->adicionarNodeNoInicio(1);
	listaEncadeada->adicionarNodeNoInicio(3);
	listaEncadeada->imprimirNos();
	
}

