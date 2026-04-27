#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;

int knapsack(vector<pair<int, int>>& brinquedos, int tempo, int atracoes){
	vector<vector<int>>dp(atracoes+1, vector<int>(tempo+1, 0));
	for(int i=1; i<=atracoes; i++){
		for(int j=0; j<=tempo; j++){
			int tempo_gasto_brinquedo = brinquedos[i-1].first;
			int total_pont_brinquedo = brinquedos[i-1].second;
			if(tempo_gasto_brinquedo<=j){
				dp[i][j] = max(dp[i][j-tempo_gasto_brinquedo]+total_pont_brinquedo, dp[i-1][j]);
			}else{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	

	
	return dp[atracoes][tempo];
} 

int main() { _ //define de io
	
	int n, t;
	int instancia=1;
	
	while((cin>>n>>t) && (n!=0)){	
		vector<pair<int, int>> brinq;
		for(int i=0; i<n; i++){
			int tempo, pontuacao;
			cin >> tempo >> pontuacao;
			brinq.push_back({tempo, pontuacao});
		}
		cout << "Instancia " << instancia << "\n" << flush;
		cout << knapsack(brinq, t, n) << "\n" << flush;
		instancia++;
		cout << "\n"
	}
	
	
	
}

