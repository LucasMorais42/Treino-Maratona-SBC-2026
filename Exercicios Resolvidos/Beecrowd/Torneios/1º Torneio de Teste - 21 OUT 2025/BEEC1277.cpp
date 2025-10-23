#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;

int main() { _ //define de io
	int n;
	cin >> n;
	cin.ignore();
	
	for(int i=0; i<n; i++){

		string aluno;	
		int alunos_num;
		cin >> alunos_num;
		cin.ignore();
		
		vector<string> vetor_alunos;
		string alunos;
		getline(cin, alunos);
		
		stringstream ss(alunos);
		string aluno_para_o_vetor;
		while(ss>>aluno_para_o_vetor) vetor_alunos.push_back(aluno_para_o_vetor);
	
	
		
		string frequencia;
		string aluno_freq;
		getline(cin, frequencia);
		stringstream freqss(frequencia);
		vector<string> frequencias;
		while(freqss>>aluno_freq){
			frequencias.push_back(aluno_freq);
		}
		
		vector<string> reprovados;
		for(int i=0; i<alunos_num; i++){
			float presencas =0;
			float qtd_aulas =0;
			float freq_total = 0.0;
			for(char letra: frequencias[i]){
				if(letra=='P' || letra=='A'){
					qtd_aulas++;
				}
				if(letra=='P'){
					presencas++;
				}
			}
			
			if(qtd_aulas>0){
				freq_total = (presencas/qtd_aulas)*100.0;;
			}
			
			if(freq_total<75.0){
				reprovados.push_back(vetor_alunos[i]);
			}
		}

		if(reprovados.size()==0){
			cout << "\n";
		} 
		for(int z=0; z<reprovados.size(); z++){
			if(z>0) cout << " ";
			cout << reprovados[z] << flush;
		}
		if(!reprovados.empty()){
			cout << endl;
		}
	}

}

