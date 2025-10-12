#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string jogo;
	cin >> jogo;
	int contagem_x =0;
	int contagem_o = 0;
	int repet = 0;
	
	for(char letra:jogo){
		
		if(letra == 'X'){
			contagem_x++;
		}
		else if(letra == 'O'){
			contagem_o++;
		}
	}
	

	
	
	if((contagem_o>contagem_x) || contagem_x-contagem_o > 1){ //se tem mais O do que X, e a diferença de X e O é maior que 1 (exemplo 3 X, 0 O)
		cout << "?" << "\n";
		return 0;
	}
	
	bool alice = ((jogo[0]=='X' && jogo[1]=='X') || (jogo[1]=='X' && jogo[2]=='X')); //ganha se tem 2 em sequencia
	bool bob = ((jogo[0]=='O' && jogo[1]=='O') || (jogo[1]=='O' && jogo[2]=='O'));
	
	if(alice && bob){ //Se ambos ganham, é inconsistente
		cout << "?" << "\n";
		return 0;
	}
	
	if(alice && contagem_x!=contagem_o+1){ //se a alice ganha, e X != O +1, OU SEJA, se a diferença é maior do que apenas 1, é inconsistente
		cout << "?" << "\n";
	}
	
	if(bob && contagem_x !=contagem_o){ //Se Bob Ganha, e a contagem de X é diferente da contagem de O, ou seja, há mais X ou menos X
		cout << "?" << "\n";
	}
	
	if(alice) cout << "Alice\n";
	else if(bob) cout << "Bob\n";
	else cout << "*" << "\n";
	
	
