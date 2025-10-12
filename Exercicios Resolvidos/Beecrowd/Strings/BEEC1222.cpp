#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main(){
	
	int n, l, c;
	string frase;

	
	while(cin >> n >> l >> c){
		

	cin.ignore();
	getline(cin, frase);
	stringstream ss(frase);
	string palavra;
	vector<string> palavras;
	
	while(ss >> palavra){
		palavras.push_back(palavra);
	}
	
	int tamanho=0;
	int linhas=1;
	int paginas=1;
	
	int espaco=0;
	for(int i=0; i<palavras.size(); i++){
		
		
		espaco = (tamanho==0?0:1);
		
		if(tamanho+palavras[i].size()+espaco>c){
			linhas++;
			tamanho=palavras[i].size();
		}
		else{
			tamanho+=palavras[i].size()+espaco;
		}
		
		
		if(linhas>l){
			paginas++;
			linhas=1;
		}
		
	}
	

	cout << paginas << "\n";
	

}
	}
