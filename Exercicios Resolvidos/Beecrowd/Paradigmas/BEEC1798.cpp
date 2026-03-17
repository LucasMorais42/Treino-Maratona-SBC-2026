#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;

int knapsack(vector<pair<int, int>>& canosval, int comprimento, int canos){
	vector<vector<int>>dp(canos+1, vector<int>(comprimento+1, 0));
	for(int i=1; i<=canos; i++){
		for(int j=0; j<=comprimento; j++){
			int tamanho_cano = canosval[i-1].first;
			int valor_cano = canosval[i-1].second;
			if(tamanho_cano<=j){
				dp[i][j] = max(dp[i][j-tamanho_cano]+valor_cano, dp[i-1][j]);
			}else{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	

	
	return dp[canos][comprimento];
} 

int main() { _ //define de io
	
	int n, t;
	cin>>n>>t;
	

	vector<pair<int, int>> canos;
	for(int i=0; i<n; i++){
		int comprimento, preco;
		cin >> comprimento >> preco;
		canos.push_back({comprimento, preco});
	}
		
	cout << knapsack(canos, t, n) << "\n" << flush;

}
	

	
	
	


