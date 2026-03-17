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
	
	int n; cin>> n;
	
	while(n--){
		int blocos, metros;
		cin >> blocos >> metros;
		
		vector<int> dp(metros+1);
		dp[0] = 0;
		for(int i=1; i<dp.size(); i++){
			dp[i] = INF;
		}
	
		vector<int> blocos_un(blocos);
		for(int i=0; i<blocos; i++){
			cin >> blocos_un[i];
		}
		
		for(int i=0; i<dp.size(); i++){
			for(int bloco: blocos_un){
				if(bloco<=i){
					dp[i] = min(dp[i], dp[i-bloco]+1);
				}
		
			}
		}
		
		cout << dp[metros] << "\n";

	}

}

