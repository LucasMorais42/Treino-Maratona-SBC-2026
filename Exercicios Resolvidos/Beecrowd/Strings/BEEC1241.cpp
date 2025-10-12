#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		string palavra_1, palavra_2;
		cin >> palavra_1 >> palavra_2;
		if(palavra_2.size()> palavra_1.size()){
			cout << "nao encaixa\n";
			continue;
		}
		int encaixa = palavra_1.compare(palavra_1.size()-palavra_2.size(), palavra_2.size(), palavra_2);
		if(encaixa==0){
			cout << "encaixa\n";
		}
		else{
			cout << "nao encaixa\n";
		}
		
	}
}

