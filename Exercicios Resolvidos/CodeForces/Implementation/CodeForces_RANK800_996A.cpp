#include <bits/stdc++.h>
using namespace std;
	

int main(){
	
	cin.tie(0);
	ios::sync_with_stdio(0);
	int total=0;
	int valor;
	int notas=0;
	
	cin >> valor;
	vector<int> opcoes = {100, 20, 10, 5, 1};
		
	for(int opcao: opcoes){
		for(int j=0; j<opcoes.size(); j++)
		
		if(opcao>valor){
			continue;
		}
		notas = valor/opcao; 
		total+=notas; 
		valor-=opcao*notas; 
	}
	cout << total << "\n";
}


