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

string converter_dec_to_bin(long long int value){
	if(value==0) return "0";
	string bin="";
	while(value>0){
		int resto = value%2;
		bin = char(resto+'0') + bin;
		value/=2;
	}
	
	for(long long int i=0; i<bin.size(); i++){
		bin[i]=tolower(bin[i]);
	}
	
	return bin;
}

string converter_dec_to_hex(long long int value){
	
	if(value==0) return "0";
	
	string hex="";
	while(value>0){
		long long int resto = value%16;
		value/=16;
		if(resto>9){
			hex = mapeamento_dec_to_hex[resto]+hex;
		}
		else{
			hex = char(resto+'0')+hex;
		}
	}
	
	for(int i=0; i<hex.size(); i++){
		hex[i]=tolower(hex[i]);
	}
	
	return hex;
}


long long int converter_bin_to_dec(string value){
	long long int decimal=0;
	long long int pot_2 = 1;
	
	for(long long int i=value.size()-1; i>=0; i--){
		if(value[i]=='1'){
			decimal+=pot_2;
		}
		pot_2*=2;
	}
	
	return decimal; 
}

string converter_bin_to_hex(string value){
	long long int decimal = converter_bin_to_dec(value);
	string hex = converter_dec_to_hex(decimal);
	for(int i=0; i<hex.size(); i++){
		hex[i]=tolower(hex[i]);
	}
	return hex;
}




long long int converter_hex_to_dec(string value){
	long long int tamanho_string = value.size();
	long long int pot_16 = 1;
	long long int decimal = 0;
	long long int valor_char=0;
	for(long long int i=tamanho_string-1; i>=0; i--){
		if(isalpha(value[i])){
			valor_char = mapeamento_hex_to_dec[value[i]];
		}
		else if(isdigit(value[i])){
			valor_char = value[i]-'0';
		}
					
		decimal  += pot_16 * valor_char;
		pot_16*=16;  
	}
	
	return decimal;
}

string converter_hex_to_bin(string value){
	long long int decimal = converter_hex_to_dec(value);
	string bin = converter_dec_to_bin(decimal);
	return bin;
}

int main() { _ //define de io
	
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		string valor;
		string tipo;
		cin >> valor >> tipo;
		
		cout<<"Case " << i+1 << ":"<<endl;
		if(tipo=="bin"){
			cout << converter_bin_to_dec(valor) << " dec"<<endl;
			cout << converter_bin_to_hex(valor) << " hex"<<endl;
		}
		else if(tipo=="dec"){
			
			long long int valor_decimal = 0;
			long long int pot_10=1;
			for(long long int j=valor.size()-1;j>=0;j--){
				valor_decimal+=(valor[j]-'0')*pot_10;
				pot_10*=10;
			}
			
			cout << converter_dec_to_hex(valor_decimal) << " hex"<<endl;
			cout << converter_dec_to_bin(valor_decimal) << " bin"<<endl;
		}
		else if(tipo=="hex"){
			cout <<converter_hex_to_dec(valor) << " dec" << endl;
			cout <<converter_hex_to_bin(valor) << " bin"<<endl;
		}
		cout << "\n";
	}

}

