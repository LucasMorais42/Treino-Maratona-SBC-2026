#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
	float a, b, c;
	cin >> a >> b >> c;
	if((a+b)<=c || (a+c)<=b || (b+c)<=a){
	  	float area_trap = ((a+b)*c)/2.0;
	  	cout << "Area = " << setprecision(1) << fixed << area_trap;
	}
	else{
	    float perimetro = a+b+c;
	    cout << "Perimetro  = " << setprecision(1) << fixed << perimetro;
	}
  
    return 0;
}
