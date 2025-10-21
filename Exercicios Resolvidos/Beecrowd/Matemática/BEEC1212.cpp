#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	int a, b;
	while(cin>>a>>b && (a!=0 || b!=0)){
		int digit_a;
		int digit_b;
		int digit;
		int carrys = 0;
		int carry_atual=0;
		while(a>0 || b>0){
			digit_a = a%10;
			digit_b = b%10;
			a/=10;
			b/=10;
			if(digit_a+digit_b+carry_atual>9){
				carrys++;
				carry_atual=1;
			}
			else{
				carry_atual=0;
			}
			
			
		}	
		if(carrys==0)
		{
			cout << "No carry operation." <<"\n" << flush;
		}
		else if(carrys==1){
			cout << "1 carry operation." << "\n" << flush;
		}
		else if(carrys>1){
			cout << carrys << " carry operations." << "\n" << flush;
		}
	
	}

	

}

