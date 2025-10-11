#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/486/A
int main(){
	
	long long int n;
	long long int soma =0;
	cin.tie(0);
	ios::sync_with_stdio(0);
	long long int result =0;
	cin >> n;
	
	if(n%2==0){
		result = n/2;
	}
	else{
		result = -((n+1)/2);
	}
	cout << result;
	
	
}
