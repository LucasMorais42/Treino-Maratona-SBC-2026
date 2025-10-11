#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/344/A

int main(){
	
	int n;
	int atual =0;
	int peca;
	int grupos=0;
	cin >> n;
	for(int i =0; i<n; i++){
		int peca;
		cin >> peca;
		if(atual!=peca){
			atual = peca;
			grupos++;
		}
		
	}
	
	cout << grupos << "\n";
	
}
