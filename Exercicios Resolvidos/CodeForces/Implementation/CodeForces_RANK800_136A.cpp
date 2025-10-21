#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/136/A
int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	int n;
	cin >> n;
	map<int, int> mapeamento;
	for(int i=1; i<=n; i++){
		int valor;
		cin >> valor;
		mapeamento[valor] = i;
	}
	
	for(auto it : mapeamento){
		cout << it.second << " " << flush;
	}
}

