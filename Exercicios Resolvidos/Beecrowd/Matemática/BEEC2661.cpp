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

	long long int n; cin>>n;
	int k =0;	

	for(long long int i=2; i*i<=n; i++){
		if(n%i==0){
			k++;
			
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n>1){
		k++;
	}
	
	long long int total_divisores = (1LL << k) - k - 1;
	cout << total_divisores << "\n";
	
}

