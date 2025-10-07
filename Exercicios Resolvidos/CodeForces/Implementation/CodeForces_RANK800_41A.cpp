#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/41/A
int main(){
	
	string s;
	string t;
	
	cin >> s;
	cin >> t;
	
	reverse(s.begin(), s.end());
	if(t==s	){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
	
}