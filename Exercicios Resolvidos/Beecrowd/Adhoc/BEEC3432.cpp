#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i=a; i<b; i++) //for repeticao i de a até <=b

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main(){

	vi bits;
	for(int i=0; i<8; i++){
		int valor;
		cin >> valor;
		bits.PB(valor);
	}
	
	bool correct = true;
	
	for(int j=0; j<bits.size(); j++){
		if(bits[j]==9){
			correct = false;
		}
	}
	
	if(correct){
		cout << "S" << "\n";
	}
	else{
		cout << "F" << "\n";
	}
	
}
