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
	
		int n,  d;
		while(cin >> n >> d && (n!=0 && d!=0)){
			string word;
			cin >> word;
	
			string res="";
			for(char letra : word){
				while(!res.empty() && d!=0 && letra>res.back()){
					res.pop_back();
					d--;
				}
				res.push_back(letra);
			}
			cout << res << "\n" << flush;
	
	}
	}

