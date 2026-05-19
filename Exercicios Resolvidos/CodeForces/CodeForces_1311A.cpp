#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    while(n--){
        int a, b; cin >> a >> b;

        if(a==b){
            cout << "0\n";
            continue;
        }

        if(a<b){
            if((b-a)%2==0){
                cout << "2\n";
            }
            else{
                cout << "1\n";
            }
        } else{
            if((a-b)%2==0){
                cout << "1\n";
            }else{
                cout << "2\n";
            }
        }
    }
}