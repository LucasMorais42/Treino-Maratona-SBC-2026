#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	vector<char> letras = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int N, L;
	
	cin >> N;
	for(int i=0; i<N; i++){
		int hash_value = 0;
		cin >> L;
		for(int j=0; j<L;j++){
			string palavra;
			cin >> palavra;
			for(int k=0; k<palavra.size(); k++){
				auto it = find(letras.begin(), letras.end(), palavra[k]);
				hash_value+=distance(letras.begin(), it) + j + k; 
			}
		}
		cout << hash_value << "\n";
	}
}


//Sugestão do GPT: int pos = palavra[k] - 'A'; // 'A' = 0, 'B' = 1...
//Evita O(N*26) que o find faz
