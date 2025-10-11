#include <bits/stdc++.h>
using namespace std;
int main(){
	int W, A, B, C;
	cin >> W >> A >> B >> C;
	if((A+B+C)<=W){
		cout << "S" << "\n";
	}
	else{
		cout << "N" << "\n";
	}
}
