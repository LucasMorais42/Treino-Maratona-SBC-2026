#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;

int main() { _ //define de io
	
	int a, b;
	cin >> a;
	cin >> b;
	
	int menor = min(a, b);
	int maior = max(a, b);
	
	for(int i=menor+1; i<maior; i++){
		if(i%5 == 2 || i%5 == 3){
			cout << i << endl << flush;
		}
	}

}

