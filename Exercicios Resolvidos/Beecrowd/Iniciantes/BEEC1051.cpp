#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	float valor;
	float result=1;
	cin >> valor;
	if(valor>=0.0 && valor<=2000.00){	
		cout << "Isento\n" << flush;
		return 0;	
	}
	else if(valor<=3000.00){
		result = (valor-2000.00)*0.08;
	}
	else if(valor<=4500.00){
		result = (valor-3000)*0.18 + 1000.00*0.08;
	}	
	else{
		result = (1000.00 * 0.08) + (1500.00 * 0.18) + (valor - 4500.00) * 0.28;
	}
	cout << "R$ " << setprecision(2) << fixed << result << "\n" << flush;
}

