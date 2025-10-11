#include <bits/stdc++.h>

using namespace std;
//https://codeforces.com/problemset/problem/200/B
int main(){
	
	
	cin.tie(0);
	int n;
	cin >> n;
	int soma =0;
	
	vector<int> dados;
	
	for(int i=0; i<n; i++){
		int valor;
		cin >> valor;
		dados.push_back(valor);
	}
	
	for(int valor : dados){
		soma+=valor;
	}
	
	double media = ((double)soma/(double)n);
	
	cout << setprecision(12) << fixed << media << "\n";
}
