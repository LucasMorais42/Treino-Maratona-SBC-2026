#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;

    while(n--){
        int n, k; cin >> n >> k;

        long long ans = k + (k-1)/(n-1);
        cout << ans << "\n";
    }
}