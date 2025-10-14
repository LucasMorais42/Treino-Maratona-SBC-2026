#include <bits/stdc++.h>
using namespace std;

const float enesimo = 1e-9;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	vector<float> numeros;
	for(int i=0; i<3; i++){
		float num; 
		cin>>num;
		numeros.push_back(num);
	}
	sort(numeros.begin(), numeros.end(), [](float a, float b){
		return a>b;
	});
	
	if(numeros[0]>=numeros[1]+numeros[2]){
		cout << "NAO FORMA TRIANGULO\n" << flush;
	}
	else{
		double a2 = numeros[0]*numeros[0];
		double b2 = numeros[1]*numeros[1];
		double c2 = numeros[2]*numeros[2];
		
		
		if(abs(a2 - (b2+c2)) < enesimo){
			cout << "TRIANGULO RETANGULO\n" << flush;
		}
		else if(a2 > b2+c2){
			cout << "TRIANGULO OBTUSANGULO\n" << flush;
		}
		else{
			cout << "TRIANGULO ACUTANGULO\n" << flush;
		}
		
		int iguais = 0;
		if(abs(numeros[0]-numeros[1]) < enesimo) iguais++;
		if(abs(numeros[1]-numeros[2]) < enesimo) iguais++;
		if(abs(numeros[0]-numeros[2]) < enesimo) iguais++;
	
		
		if(abs(numeros[0]-numeros[1]) < enesimo && abs(numeros[1]-numeros[2]) < enesimo)
    		cout << "TRIANGULO EQUILATERO\n";
		else if(iguais > 0)
   			cout << "TRIANGULO ISOSCELES\n";


}
}

