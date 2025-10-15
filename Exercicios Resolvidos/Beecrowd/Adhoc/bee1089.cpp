#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	int n;
	while((cin >> n) && n!=0) {
		vector<int> loops;
		int picos =0;
		for(int i=0; i<n; i++){
			int valor;
			cin >> valor;
			loops.push_back(valor);
		}
		for (int i = 0; i < n; i++) {
            int prev = loops[(i - 1 + n) % n];
            int next = loops[(i + 1) % n];
            if ((loops[i] > prev && loops[i] > next) ||
                (loops[i] < prev && loops[i] < next))
                picos++;
        }
		cout << picos << "\n" << flush;
	}

}

