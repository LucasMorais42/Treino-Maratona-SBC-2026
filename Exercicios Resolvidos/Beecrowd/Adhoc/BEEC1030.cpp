#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	int nc;
	cin >> nc;
	for(int i =1;i<=nc; i++)
	{
		int n, k;
		cin >> n >> k;
		
		int r = 0; //se tem 1 pessoa, qm sobrevive é o na posicao 0
		for(int j=2; j<=n; j++){
			r = (r+k)%j; //nos padrões viu-se que, quem sobrevive é sempre
			//o circulo anterior + k passos
			
		}
		r++;
		cout << "Case " << i << " : " << r << "\n" << flush;
	}

}

/* n = 1, sobrevive o 0
n =2, sobrevive o 0, pois 0+2%2 -> 0
n =3, sobrevive o 2, pois 0+2%3 -> 2
n = 4, sobrevive o 0, pois 2+2%4 -> 0
n = 5, sobrevive o 2, pois 0+2%5 -> 2

*/

