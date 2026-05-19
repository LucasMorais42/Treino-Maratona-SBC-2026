#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){

        int q;
        cin >> q;

        if(q==2){
            cout << "2\n";
        }
        else{
            cout << (q%2) << "\n";
        }

    }
}