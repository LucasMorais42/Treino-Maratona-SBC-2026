#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	string number_1;
	string number_2;
	cin>>number_1;
	cin>>number_2;
	string novo_numero="";
	for(int i =0; i<number_1.size();i++){
		if(number_1[i]!=number_2[i])
		{
			novo_numero+='1';
		}
		else{
			novo_numero+='0';
		}
		
	}
	cout << novo_numero << "\n"<<flush;

}

