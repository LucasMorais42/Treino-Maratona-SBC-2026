#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N;
	int K;
	cin >> N;
	for(int i=0;i<N; i++){
		cin >> K;
		set<string> idiomas;
		for(int j=0; j<K; j++){
			string idioma;
			cin >> idioma;
			idiomas.insert(idioma);
		}
		if(idiomas.size()>1){
			cout << "ingles\n" << flush;
		}else{
			for(auto palavra : idiomas){
				cout << palavra << "\n" << flush;
			}
		}
	}
}

