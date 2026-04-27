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

	int n; cin >> n;
	while(n--){
		int tot_projeteis;
		cin >> tot_projeteis;
		vector<pair<int, int>> projeteis(tot_projeteis);
		for(int i=0; i<tot_projeteis; i++){
			int poder, peso;
			cin >> poder >> peso;
			projeteis[i] = {poder, peso};
		}
		int capacidade_canhao; cin>>capacidade_canhao;
		int resistencia_castelo; cin>>resistencia_castelo;
		
		vector<vector<int>> dp(projeteis.size()+1, vector<int>(capacidade_canhao+1, 0));
		
		for(int i=1; i<=projeteis.size(); i++){
			int peso_total_projetil_atual = projeteis[i-1].second;
			int dano_causado_projetil_atual = projeteis[i-1].first;
			for(int j=1; j<=capacidade_canhao; j++){
				if(j>=peso_total_projetil_atual){
					dp[i][j] = max(dp[i-1][j], dano_causado_projetil_atual + dp[i-1][j-peso_total_projetil_atual]);
				}
				else{
					dp[i][j] = dp[i-1][j];
				}
			}
		}
		int maior_dano_causado = dp[projeteis.size()][capacidade_canhao];
	
		if(maior_dano_causado>=resistencia_castelo){
			cout << "Missao completada com sucesso\n";
		}
		else{
			cout << "Falha na missao\n";
		}
	}
}

