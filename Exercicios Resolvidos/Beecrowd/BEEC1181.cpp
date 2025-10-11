#include <bits/stdc++.h>
using namespace std;

int main() {
 
    float matriz[12][12];
    
    int linha;
    char letra;
    cin >> linha;
    cin >> letra;
    float soma=0;
    for(int i=0; i<12;i++){
    	for(int k=0;k<12;k++){
    		cin>> matriz[linha][k];
		}
    }
    
    for(int j=0; j<12; j++){
    	soma+=matriz[linha][j];
	}
	
    if(letra=='S'){
        cout << setprecision(1) << fixed << soma << "\n";
    }
    else if(letra=='M'){
        cout << setprecision(1) << fixed << soma/12 << "\n";
    }
 
    return 0;
}
