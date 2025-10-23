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
	cin >> n;
	cin.ignore();
	for (int i=0; i<n; i++){
		string dieta;
		string cafe;
		string almoco;
		string janta;
		getline(cin, dieta);
		getline(cin, cafe);
		getline(cin, almoco);
	
		string cafe_e_almoco = cafe + almoco;
		bool cheater = false;
		for(char letra:cafe_e_almoco){
			if(letra==' '){
				continue;
			}
			auto it = find(dieta.begin(), dieta.end(), letra);
			if(it==dieta.end()){
				cheater =true;
				break;
			} 
 		}
 		if(cheater){
 			cout << "CHEATER" << endl << flush;
 			continue;
		}
		 
		
		for(char letra : cafe_e_almoco){
			dieta.erase(remove_if(dieta.begin(), dieta.end(), [&letra](char c){
				return (c==letra);
			}), dieta.end());
		
		}
		janta = dieta;
		
		sort(janta.begin(), janta.end());
		cout << janta  << endl << flush;
	}

}

