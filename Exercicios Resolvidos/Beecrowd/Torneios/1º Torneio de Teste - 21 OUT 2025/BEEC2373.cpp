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

	int nc;
	cin >> nc;
	int derruba =0;
	for(int i=0; i<nc; i++){
		int latas; int copos;
		cin >> latas >> copos;
		if(latas>copos){
			derruba+=copos;
		}
	}
	cout << derruba << endl;
}

