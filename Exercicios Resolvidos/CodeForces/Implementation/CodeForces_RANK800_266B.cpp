#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/266/B

int main(){
	
	int n, t;
	string fila;
	
	cin >> n >> t;
	cin >> fila;
	
	for(int i=0; i<t; i++){
		
		for(int j=0; j<fila.size()-1; j++){
			if(fila[j]=='B' && fila[j+1]=='G') {
				swap(fila[j], fila[j+1]);
				++j;
			}
		}
	}

	
	
	cout << fila << "\n";
	
}
