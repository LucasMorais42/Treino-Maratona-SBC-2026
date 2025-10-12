#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
	
	int n; //alunos
	string nome;
	cin >> n;
	vector<float> notas;

    vector<pair<string, vector<float>>> alunos(n);
	
	cin.ignore();
	
	for(int i =0; i<n; i++){
		getline(cin, alunos[i].first);

		string linha;
		getline(cin, linha);
		float valor;
		istringstream iss(linha);
		while((iss >> valor)){
			alunos[i].second.push_back(valor);	
		}
		

		vector<float>& notas = alunos[i].second;
		float media =0.0;
			
		
		if(notas.size()==1){
			media = notas[0]/2.0;
		}
		else if(notas.size()==2)
		{
			media = (notas[0] + notas[1])/2.0;
		}
		else if(notas.size()==3){
			media = (notas[0] + notas[1] + notas[2])/3.0;
		}
		else if(notas.size()==4){
			
			auto it = min_element(notas.begin(), notas.begin()+3);
			
			if(notas.at(3)>*it){
				*it = notas.at(3);
			}
			
			media = accumulate(notas.begin(), notas.begin()+3, 0.0f)/3.0f;
			
				
		}
		
		
		cout << alunos[i].first << ": " << fixed << setprecision(1) << media << "\n";
	
		
	}
	
	
}
