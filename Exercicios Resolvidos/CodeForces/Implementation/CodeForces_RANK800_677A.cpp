#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/677/A
int main(){
	
	int n, h;
	cin >> n >> h;
	
	int soma = 0;
	for(int i=0; i<n; i++){
		int value;
		cin >> value;
		if(value <=h){
			soma+=1;
		}
		else{
			soma+=2;
		}
	}
	
	cout << soma << "\n";
	
}
