#include <bits/stdc++.h>
using namespace std;


int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int a, b;
	while(cin>>a>>b && (a!=0 && b!=0)){
		vector<int> posicoes;
		posicoes.assign(10, 0);
		for(int i=a; i<=b; i++){
			int auxiliar = i;
			//12
			while(auxiliar>0){
				int resto = auxiliar%10; //1
				posicoes[resto]++;
				auxiliar/=10; // 2
				}
		}
	
		for(int value : posicoes){
			cout << value << " ";
		}
		cout << "\n";
	
	}
	
//LEÃO RUGIU! 
}

