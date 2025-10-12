#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	bool easy = false;
	bool hard = false;
	
	cin >> n;
	vector<int> opinioes(n);
	for(int i =0; i<n; i++){
		int value;
		cin >> opinioes[i];	
	}
	
	easy = all_of(opinioes.begin(), opinioes.end(), [](int a){
		return a==0;	
	});
	
	if(easy){
		cout << "EASY\n";
	}
	else
	{
		cout << "HARD\n";
	}
}
