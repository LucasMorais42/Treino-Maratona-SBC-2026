#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		string palavra;
		cin >> palavra;
		int num1 = (int)(palavra[0] -'0');
		int num2 = (int)(palavra[2]-'0');
		
		int resultado;
		if(num1==num2){
			resultado = num1*num2;	
		}
		
		else if(isupper(palavra[1])){
			
		   resultado = num2 - num1;
		}
		else{
			resultado = num1+num2;
		}
		
		cout << resultado << "\n" << flush;	
	}

}

