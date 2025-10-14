#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	string frase;
	while(getline(cin, frase)){
		stack<char> letras;
		string nova_frase="";
		for(char letra: frase){
			
			if(letra!='_' && letra!='*'){
				nova_frase+=letra;
				continue;
			}
			
			if(letra=='_'){
				if(letras.empty() || letras.top()!='_'){
					letras.push(letra);
					nova_frase+="<i>";
				}
				else{
					letras.pop();
					nova_frase+="</i>";
				}
			}
			else if(letra=='*'){
				if(letras.empty() || letras.top()!='*'){
					letras.push(letra);
					nova_frase+="<b>";
				} 
				else{
					letras.pop();
					nova_frase+="</b>";
				}
			} 
		}
		cout << nova_frase << "\n" << flush;
			
		}
		
		
	}
	
	


