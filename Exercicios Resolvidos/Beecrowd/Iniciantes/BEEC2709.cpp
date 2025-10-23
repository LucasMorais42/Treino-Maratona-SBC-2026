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
	
	int m;
	while(cin >> m){
		vector<int> moedas;
		for(int i=0;i<m;i++){
			int valor; cin>>valor;
			moedas.push_back(valor);
		}
		int n;
		cin >> n;
		
		int soma =0;
		for(int i=m-1; i>=0; i-=n){
			soma+=moedas[i];	
		}
		int primos=1;
		for(int i=2; i<soma; i++){
			if(soma%i==0){
				primos++;
			}
		}
		
		if(soma==1){
			cout << "Bad boy! I’ll hit you." << endl << flush;
			continue;
		}
		
		
		if(primos>1){
			cout << "Bad boy! I’ll hit you." << endl << flush;
		
		}
		else{
			cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl << flush;
		}
	}
	
	
}

