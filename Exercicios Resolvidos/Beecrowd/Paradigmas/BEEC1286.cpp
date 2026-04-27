#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;

int dp(int capacidade, vector<pair<int, int>>& pedidos){
	
	vector<vector<int>> dp(pedidos.size()+1, vector<int>(capacidade+1, 0));
	
	for(int i=1; i<pedidos.size()+1; i++){
		for(int j=0; j<capacidade+1; j++){
			int total_peso_consumido = pedidos[i-1].second;
			int total_valor_incrementado = pedidos[i-1].first;
			if(j<total_peso_consumido){
				dp[i][j]=dp[i-1][j];
			}
			else{
				int capacidade_que_sobra = j - total_peso_consumido;
				dp[i][j] = max(dp[i-1][j], dp[i-1][capacidade_que_sobra]+total_valor_incrementado);
			}
		
		}
	}
	return dp[pedidos.size()][capacidade];
}

int main() { _ //define de io
	
	int n;
	while(cin>>n && n!=0){
		int pizzas;
		cin >> pizzas;
		vector<pair<int, int>> pedidos;
		while(n--){
			int tempo_pedido, pizzas_pedido;
			cin >> tempo_pedido >> pizzas_pedido;
			pedidos.push_back({tempo_pedido, pizzas_pedido});
		}
		int res = dp(pizzas, pedidos);
		cout << res << " min." << "\n" << flush;
		
	}

}

