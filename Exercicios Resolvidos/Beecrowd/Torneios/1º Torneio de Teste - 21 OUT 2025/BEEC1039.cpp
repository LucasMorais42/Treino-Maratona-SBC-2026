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
	
	int x1, y1, r1;
	int x2, y2, r2;
	
	while(cin>>r1>>x1>>y1>>r2>>x2>>y2){
		
        double distancia = hypot(x1 - x2, y1 - y2);

	
		
		if(distancia+r2 <= r1){
			cout << "RICO" << endl << flush;
		}	
		else{
			cout  << "MORTO" << endl << flush;
		}
		
	}

}

