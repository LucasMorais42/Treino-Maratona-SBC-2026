#include <iostream>
using namespace std;

//https://codeforces.com/problemset/problem/734/A
int main(){
	
	int n;
	cin >> n;
	
	string s;
	int anton=0;
	int danik =0;
	cin >> s;
	
	for(int i=0; i<n; i++){
		if(s[i]=='A'){
			anton++;
		}
		else if(s[i]=='D'){
			danik++;
		}
	}
	
	if(anton==danik){
		cout << "Friendship\n";
	}
	else if(anton>danik){
		cout << "Anton\n";
	}
	else{
		cout << "Danik\n";
	}
}