#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	
	cin >> n;
	cin.ignore();
	for(int i=0; i<n; i++){
		
		string frase;
		vector<string> palavras;
		string valor_palavra;
		getline(cin, frase);
		stringstream ss(frase);
		while(ss >> valor_palavra) palavras.push_back(valor_palavra);
		
		stable_sort(palavras.begin(), palavras.end(), [&](string a, string b){
			//stable sort mantem a ordem original em empates de tamanho
			return a.size()>b.size(); //se for true, a vem antes de b, false o contrario
			
		});
		
		for(int j=0;j<palavras.size();j++){
			cout << palavras[j] << flush;
			if (j<palavras.size()-1) cout << " " << flush;
			
		}
		
	    cout << "\n" << flush;
		
	}

}

