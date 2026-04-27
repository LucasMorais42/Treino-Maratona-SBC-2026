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
	
	int n; cin >> n;
	if(n>=1) cout << 0 << " ";
	if(n>=2) cout << 1 << " ";
	
	int fibonacci_1 = 0;
	int fibonacci_2 = 1;
	int result = 0;
	for(int i=3; i<=n; i++){
		result = fibonacci_1 + fibonacci_2;
		cout << result << " ";
		fibonacci_1 = fibonacci_2;
		fibonacci_2 = result;
	}

	
}

