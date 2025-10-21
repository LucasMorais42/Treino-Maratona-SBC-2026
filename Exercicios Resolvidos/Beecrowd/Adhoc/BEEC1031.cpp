#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int m){
	int r =0;
	for(int i=2; i<n; i++){
		r = (r+m)%i;
		//cout << "Sobrevivendo do circulo de " << n << " pessoas com " << m << " passos eh o " << r << "\n" << flush;
	}
	return r+1;
}





int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int cont = 0;
	int n;
	while(cin >> n && n!=0){
		int m =1;
		while(josephus(n,m) != 12)
		{
			//cout << "Avaliando um circulo de " << n << " pessoas com " << m << " passos\n" << flush;
			m++;
		}
		cout << m << "\n" << flush;
	}



}

