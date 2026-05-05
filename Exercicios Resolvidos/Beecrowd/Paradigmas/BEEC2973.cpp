#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long int ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;
int n, c, t;
const int MAX = 1e5 + 10;
vector<int> pipocas(MAX);

bool possivel(ll chute){
	int comp = 1;
	ll resta = t*chute;
	
	for(int i=0; i<n; i++){
		if(resta>=pipocas[i]) resta-=pipocas[i];
		else{
			comp++;
			resta = t*chute;
			i--;
		}
		
		if(comp>c){
			return false;
		}
	}
	return true;
}


int main() { _ //define de io

	cin >> n >> c >> t;
	
	for(int i=0; i<n; i++){
		cin >> pipocas[i];
	}
	
	int l = 0, r = 1e9+1;
	while(l<r){
		int m = (l+r)/2;
		if(!possivel(m)) l = m+1;
		else r = m;
	}
	cout << l << "\n" << flush;
	

}

