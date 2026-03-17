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
//vector que salva o resultado de fibo e chamadas

	vector<pair<long int, int>> dp(39);
	dp[0] = {0, 0};
	dp[1] = {1, 0};
	dp[2] = {1, 2};
	for(int i=3; i<39; i++){
		int calls = dp[i-1].second + dp[i-2].second + 2;
		long int result = dp[i-1].first + dp[i-2].first;
		dp[i] = {result, calls};
	}
	


	int n; cin >> n;
	while (n--){
		int fibon; cin >> fibon;

		cout << "fib(" << fibon << ") = " << dp[fibon].second << " calls = " <<  dp[fibon].first << "\n" << flush;
	}

}

