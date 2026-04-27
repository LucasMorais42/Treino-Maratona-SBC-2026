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
	while(cin >> n){
		int custo;
		cin >> custo;
		vector<int> valores(n); 
		for(int i=0; i<n; i++){
			int valor;
			cin >> valor;
			valores[i] = valor-custo;
		}
		int melhor_soma_atual = valores[0];
		int melhor_soma_global = valores[0];
		
		for(int i=1; i<n; i++){
			melhor_soma_atual = max(valores[i], melhor_soma_atual+valores[i]);
			melhor_soma_global = max(melhor_soma_atual, melhor_soma_global);
		}
		
	
		if(melhor_soma_global<=0)
		{
			cout << "0" << "\n" << flush;
		}
		else{
			cout << melhor_soma_global << "\n" << flush;
		}
	
	}


}

