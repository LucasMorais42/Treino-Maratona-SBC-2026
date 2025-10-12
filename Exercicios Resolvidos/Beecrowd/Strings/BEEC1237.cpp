#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	string palavra_1, palavra_2;
	string maior;
	
	while(getline(cin, palavra_1)){
		
		if(!getline(cin, palavra_2)) break;
		
		
		int maior_sequencia = 0;
		
		
		for(int i=0; i<palavra_1.size();i++)
		{
			for(int j=0; j<palavra_2.size();j++){
				int k=0;
				while(i+k<palavra_1.size() && j+k<palavra_2.size() && palavra_1[i+k] == palavra_2[j+k]){
					k++;
				}
				maior_sequencia = max(maior_sequencia, k);
			}
				
		}
		cout << maior_sequencia << "\n" << flush;
	}
}

