#include <bits/stdc++.h>
using namespace std;

int main(){
	string frase;
	cin>>frase;
	
	if(frase=="B?-SP" || frase=="?R-SP"){
		cout << "S" << "\n";
	}
	else if(frase=="BR-S?" || frase=="BR-?P"){
		cout << "T" << "\n";
	}
	else{
		cout << "N" << "\n";
	}
	
}
