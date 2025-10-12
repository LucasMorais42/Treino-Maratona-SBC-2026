#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	
	while((cin>>n) && n!=0){
		int mary =0;
		int john = 0;
		for(int i=0; i<n; i++){
			int valor;
			cin >> valor;
			if(valor==0){
				mary++;
			}
			else if(valor==1){
				john++;
			}
		}
		cout << "Mary won " << mary << " times and John won " << john << " times\n"; 
	}
}

