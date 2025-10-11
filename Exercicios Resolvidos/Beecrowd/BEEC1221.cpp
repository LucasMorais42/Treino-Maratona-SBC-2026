#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		unsigned int primo = 0;
		unsigned int valor;
		cin>>valor;
		for(unsigned int j=1; j<=(int)sqrt(valor);j++){
		
			if(valor%j==0){
				primo++;
				
			}
		}
		if(primo>1){
			cout << "Not Prime\n";
		}
		else{
			cout << "Prime\n";
		}
		
	}

}

