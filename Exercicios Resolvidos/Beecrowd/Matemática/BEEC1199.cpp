#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;

map<char, int> mapeamento_hex_to_dec = {
    {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15},
	{'a', 10}, {'b', 11}, {'c', 12}, {'d', 13}, {'e', 14}, {'f', 15}
};

map<int, char> mapeamento_dec_to_hex = {
    {10, 'A'}, {11, 'B'}, {12, 'C'}, {13, 'D'}, {14, 'E'}, {15, 'F'}
};

int main() { _ //define de io
	string codigo;

	while(true){
		cin >> codigo;
		if(codigo[0]=='-'){
			break;
		}
		
		if(codigo[0]=='0' && codigo[1]=='x'){
			int tamanho_string = codigo.size();
			int pot_16 = 1;
			int decimal = 0;
			int valor_char=0;
			for(int i=tamanho_string-1; i>=2; i--){
				if(isalpha(codigo[i])){
					valor_char = mapeamento_hex_to_dec[codigo[i]];
				}
				else if(isdigit(codigo[i])){
					valor_char = codigo[i]-'0';
				}
					
				decimal  += pot_16 * valor_char;
				pot_16*=16;  
			}
			cout << decimal << "\n";
		}
		else{
			int valor_decimal = 0;
			int pot_10= 1;
			for(int i=codigo.size()-1; i>=0; i--){
				valor_decimal+=(codigo[i]-'0')*pot_10;
				pot_10*=10;
			}
			
			string valor_hexa;
			while(valor_decimal>0){
				int resto = valor_decimal%16;
				valor_decimal/=16;
				
				if(resto>9){
					valor_hexa = mapeamento_dec_to_hex[resto]+valor_hexa;
				}
				else{
					valor_hexa = char(resto+'0')+valor_hexa;
				}
			}
			valor_hexa = "0x"+valor_hexa;
	
			
			cout << valor_hexa << "\n" << flush;
		}
	}


}

