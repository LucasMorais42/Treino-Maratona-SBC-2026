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

	int t; cin >> t;
	while(t--){
		int N;
		cin >> N;
		vector<int> valores(N+1);
		valores[0] = 1;
		for(int i=1; i<=N; i++){
			valores[i] = valores[i-1]*2;
		}
		for(int valor: valores){
			cout << valor << "\n";
		}
		
		int pil1 = valores[N], pil2=0;
		cout << "pilha 1: "<< pil1 << "\n";
		cout << "pilha 2: "<< pil2 << "\n";
		for(int i=1; i<N/2; i++){
			pil1+=valores[i];
			cout << "pilha 1: "<< pil1 << "\n";
		}
		for(int i=N/2; i<N; i++){
			pil2+=valores[i];	
			cout << "pilha 2: "<< pil2 << "\n";
		}
		
		int res = abs(pil1-pil2);
		cout << res << "\n";
	}
}

