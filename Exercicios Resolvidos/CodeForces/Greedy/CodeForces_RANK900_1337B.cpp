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

	int t; cin >> t;
	while(t--){
		int x, n, m;
		cin >> x >> n >> m;
		
		while(n>0 && x>20){
			x = x/2 + 10;
			n--;
		}
		
		while(m>0){
			x -=10;
			m--;
		}
	
		if(x<=0){
			cout << "YES\n" << flush;
		}else{
			cout << "NO\n" << flush;
		}
	
	}
	

}

