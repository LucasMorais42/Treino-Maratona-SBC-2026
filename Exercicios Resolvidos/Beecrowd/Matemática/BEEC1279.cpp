#include <bits/stdc++.h>
using namespace std;

bool check_bissexto(long long unsigned int n){
	if(n%100==0){
		if(n%400==0){
			return true;
		}else{
			return false;
		}
	}
	else if(n%4==0){
		return true;
	}
	else{
		return false;
	}
}

bool check_huluculu(long long unsigned int n){
	if(n%15==0){
		return true;
	}
	else{
		return false;
	}
}

bool check_buluculu(long long unsigned int n){
	if(check_bissexto(n) && n%55==0){
		return true;
	}
	else{
		return false;
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	long long unsigned int year;
	while(cin>>year){
		bool leap = check_bissexto(year);
        bool huluculu = check_huluculu(year);
        bool bulukulu = check_buluculu(year);
        bool ordinary = !leap && !huluculu && !bulukulu;
        
        if (leap) {
            cout << "This is leap year." << "\n" << flush;
        }
        if (huluculu) {
            cout << "This is huluculu festival year." << "\n" << flush;
        }
        if (bulukulu) {
            cout << "This is bulukulu festival year." << "\n" << flush;
        }
        if (ordinary) {
            cout << "This is an ordinary year." << "\n" << flush;
        }
		cout << "\n" << flush;
	}

}

