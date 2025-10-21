#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	int n;
	while(cin >>n && n!=0){
		int a, b;
		int jogador_a=0, jogador_b=0;
		for(int i=0; i<n; i++){
			cin>>a>>b;
			if(a>b){
				jogador_a++;
			}
			else if(b>a){
				jogador_b++;
			}
		}
		
		
		cout << jogador_a << " " << jogador_b << "\n" << flush;
	}

}

