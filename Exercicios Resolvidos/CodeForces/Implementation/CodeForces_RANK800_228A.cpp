#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	set<int> ferraduras;
	for(int i=0; i<4; i++){
		int valor;
		cin >> valor;
		ferraduras.insert(valor);
	}
	
	cout << 4-ferraduras.size() << "\n" << flush;
}

