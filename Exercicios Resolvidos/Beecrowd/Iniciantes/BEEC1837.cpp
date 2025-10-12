#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int a, b, quoc, rest;
	cin >> a >> b;
	rest = a%b;
	quoc = a/b;
	if(rest<0 && b>0){
		rest+=abs(b);
		quoc--;
	}
	else if(rest<0 && b<0){
		rest-=b;
		q++;
	}

	
	
	cout << quoc << " " << rest << "\n";
}

