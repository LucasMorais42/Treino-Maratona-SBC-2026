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
	
	int N; cin>>N;
	vector<int> fat(11);
	fat[0] = 1;
	fat[1] = 1;
	
	for(int i=2; i<=11; i++){
		fat[i] = fat[i-1] * i;
	}
	

	int res=0;
	for(int i=fat.size()-1; i>=0; i--){
		int tot = N/fat[i];
		N-=tot*fat[i];
		res+=tot;
	}
	cout << res << "\n";
	

}

