#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	int n;
	string um = "one";
	string dois = "two";
	string tres = "three";
	cin >> n;
	
	for(int i=0; i<n; i++){
		int similar_um=0, similar_dois=0, similar_tres=0;
		string palavra;
		cin >> palavra;
		for(int i=0; i<palavra.size();i++){
			if(palavra[i]==um[i]) similar_um++;
			else if(palavra[i]==dois[i]) similar_dois++;
			else if(palavra[i]==tres[i]) similar_tres++;
		}
		
		if(similar_um>similar_dois && similar_um>similar_tres){
			cout << "1\n";
		}
		else if(similar_dois>similar_um && similar_dois>similar_tres){
			cout << "2\n";
		}
		else{
			cout << "3\n";
		}
	
	}
	
	

}

