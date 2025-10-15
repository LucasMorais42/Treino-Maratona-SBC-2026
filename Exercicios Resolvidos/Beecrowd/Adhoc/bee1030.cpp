#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	int n;
	cin >> n;
	for(int i =1; i<=n; i++){
		int m, k;
		vector<int> vetor;
		cin >> m >> k;
		for(int w=1; w<=m; w++){
			vetor.push_back(w);
		}
		int counter = 0;
		while(vetor.size()>1){
			++counter;
			if(counter == k){
				vetor.remove(counter);
			}
		}
		
		for(int valor: vetor){
			cout << valor << "\n";
		}
	}

}

