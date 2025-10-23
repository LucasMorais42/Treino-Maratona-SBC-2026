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

	vector<char> letras = {'`','1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', 'Q', 'W', 'E',
	'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', 
	'\'', 'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'};
	
	string frase;
	while(getline(cin, frase)){
		string nova_frase="";
		for(int i=0; i<frase.size(); i++){
			if(frase[i]==' '){
				nova_frase+=" ";
				continue;
			}
			auto it = find(letras.begin(), letras.end(), frase[i]);
			int distancia = distance(letras.begin(), it);
			nova_frase+=letras[distancia-1];
		}
		cout << nova_frase << endl << flush;
	}
	
}

