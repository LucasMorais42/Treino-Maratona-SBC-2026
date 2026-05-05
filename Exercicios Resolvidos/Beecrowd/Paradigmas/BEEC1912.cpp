#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;

bool possivel(vector<int>& ref, double chute, int a){
	int area = 0;
	
	for(int i=0; i<ref.size(); i++){
		if(ref[i]>chute){
			area += ref[i]-chute;
		}
		
	}

	return area>=a;
}

int main() { _ //define de io

	int n;
	double a;
	while(cin>>n>>a){
		if(n==0 && a ==0){
			break;
		}
		vector<int> vetor(n);
		double area = 0;
		for(int i=0; i<n; i++){
			cin >> vetor[i];
			area+=vetor[i];
		}
		
		if(area<a){
			cout << "-.-\n"<<flush;
			continue;
		}
		
		if(area==a){
			cout << ":D"<<"\n" << flush;
			continue;
		}
		
		double l=0, r = 1e4 + 1;
		
		while(r-l > 1e-6){
			double mid = (l+r)/2.0000;
			
			if(possivel(vetor, mid,a)) l=mid;
			else r =mid;
		}
	
	  	cout << fixed << setprecision(4) << l << "\n";
		
		
	}

}

