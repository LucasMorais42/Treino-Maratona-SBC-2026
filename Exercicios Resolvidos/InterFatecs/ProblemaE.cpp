#include <bits/stdc++.h>
using namespace std;

int main(){
	
	long int A, B;
	
	cin >> A >> B;
	
	long int maior=0;
	long int menor=0;
	
	if(A>B){
		menor = B;
		maior = A;
	}
	else if (B>A){
		menor = A;
		maior = B;
	}
	int j=0;
	int sum = 0;
	int maior_soma = 0;
	int result = 0;
	int digit =0;

	
	for(int i=menor; i<maior; i++){
		
		sum =0;
		j = i;
		
		
		while(j>0){ 
			digit = j%10;   
			sum+=digit;  
			j/=10;		
		}
		
		if(sum>result){
			maior_soma = i;
			result = sum;
		}
				
	}
	
	cout << maior_soma << "\n";
}
