#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int caso = 1;
    while(cin>>n && n!=0){
        cout << "Teste " << caso << "\n";
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        for(int i=0; i<n; i++){
            if(v[i]==i+1){
                cout << v[i] << "\n";
                break;
            }
        }
        caso++;
        cout << "\n";
    }

}