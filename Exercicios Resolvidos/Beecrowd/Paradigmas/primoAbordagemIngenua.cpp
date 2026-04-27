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
	
	//Faça um programa que mostre todos os primos entre 1 e N
	//sendo N um número inteiro fornecido pelo usuário.//
	
	int n; cin >> n;
	for(int i=2; i<n; i++){
		bool primo = true;
		for(int j=2; j<i; j++){
			if(i%j==0){
				primo = false;
				break;
			}
		}
		if(primo){
			cout << i << "\n";
		}
	}

}

