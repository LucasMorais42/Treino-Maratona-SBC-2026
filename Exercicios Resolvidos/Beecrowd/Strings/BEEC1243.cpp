#include <bits/stdc++.h>
using namespace std;

bool check_palavra(string palavra){
	for(int i=0; i<palavra.size(); i++){
		if(isdigit(palavra[i])){
			return false;
		}
		if(palavra[i]=='.' && (i!=palavra.size()-1 || palavra.size()==1)){
			return false;
		}
		if(!isalpha(palavra[i]) && palavra[i]!='.'){
			return false;
		} 	
	}
	return true;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	string frase;
	while(getline(cin, frase)){
		int total_letras=0;
		int palavras_validas=0;
		stringstream ss(frase);
		string palavra;
		vector<string> palavras_vector;
		while(ss>>palavra){
			palavras_vector.push_back(palavra);
		}
		
		for(string palavra_verif : palavras_vector){
			if(check_palavra(palavra_verif)){
				int tamanho_palavra = palavra_verif.size();
				palavras_validas++;
				if(palavra_verif[palavra_verif.size()-1]=='.'){
					total_letras+=tamanho_palavra-1;
				}else{
					total_letras+=tamanho_palavra;
				}
				
				
			}
		}
		if(palavras_validas==0){
			cout << "250" << "\n" << flush;
			continue;
		}
		int media = total_letras/palavras_validas;
		
		if(media<=3){
			cout << "250" << "\n" << flush;
		}
		else if(media<=5){
			cout << "500" << "\n" << flush;
		}
		else{
			cout << "1000" << "\n" << flush;
		}
	}

}

