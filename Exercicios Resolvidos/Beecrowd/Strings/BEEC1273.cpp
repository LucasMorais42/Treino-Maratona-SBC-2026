#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	bool first=true;
	while(cin>>n){
		if(!n) break;
        if(first)   first = false;
        else        cout << "\n"<<flush;
		vector<string> palavras;
		for(int i=0; i<n; i++){
			
			string palavra;
			cin >> palavra;
			palavras.push_back(palavra);
		}
			auto maior_tamanho = max_element(palavras.begin(), palavras.end(), [](string& a, string& b){
				return a.size()<b.size();
			});
			
	
			int maior_palavra = maior_tamanho->size();
			for(string palavra : palavras){
				string nova_palavra = "";
				int quanto_falta = maior_palavra - palavra.size();
				for(int i=0; i<quanto_falta; i++){
					nova_palavra+= " ";
				}
				nova_palavra+=palavra;
				cout << nova_palavra << "\n" << flush;
			}
		
			
		}
	}
	

