#include <bits/stdc++.h>
using namespace std;

int main(){
	//https://codeforces.com/problemset/problem/467/A
	int n;
	int acomoda =0;
	vector<pair<int, int>> quartos;
	//O quarto i tem pi pessoas nele e pode acomodar qi pessoas
	//a ideia é verificar quantos quartos podem acomodar alex e george, ou seja, ver se tem 2 espaços em pi-qi
	cin >> n;
	for(int i =0; i<n; i++){
		int pi, qi;
		cin >> pi >> qi;
		quartos.push_back({pi, qi});
	}
	
	for(int j=0; j<quartos.size(); j++){
		if((quartos[j].second-quartos[j].first)>=2){
			acomoda++;
		}
	}
	
	cout << acomoda << "\n";
}
