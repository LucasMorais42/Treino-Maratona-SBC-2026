#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/116/A

int main(){
	
	int n;
	cin >> n;
	int total_passageiros =0;
	int maximo=0;
	for(int i=0; i<n; i++){
		int entrando, saindo;
		cin >> saindo >> entrando;
		total_passageiros-=saindo;
		total_passageiros+=entrando;
		if(total_passageiros>maximo){
			maximo = total_passageiros;
		}
	}

	cout << maximo << "\n";
}