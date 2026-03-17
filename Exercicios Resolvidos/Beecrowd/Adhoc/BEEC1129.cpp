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
	
	int n;
	vector<char> letras = {'A', 'B', 'C', 'D', 'E'};
	while((cin>>n) && n!=0){
		while(n--){
			int marcadas = 0;
			int questao_promissora = -1;
			vector<int> cores(5);
			
			for(int i=0; i<5; i++){
				cin >> cores[i];
			}
			
			for(int i=0; i<5; i++){
				if(cores[i]<=127){
					questao_promissora = i;
					marcadas++;
				}
			}
			
			if(marcadas>1 || marcadas==0){
				cout << "*" << "\n" << flush;
			}
			else{
				cout << letras[questao_promissora] << "\n" << flush;
			}
		}	
	}
	
}

