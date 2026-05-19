//https://codeforces.com/gym/101972/problem/A
#include <bits/stdc++.h>
using namespace std;


int main(){

    int n; cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        vector<int> n_a;
        vector<int> n_b;
        int mult = 1;
        while(abs(a)>0){
            int result = a%10 * mult;
            if(result!=0){
                n_a.push_back(result);
            }
            a/=10;
            mult*=10;
        }
        mult=1;
        while(abs(b)>0){
            int result = b%10 * mult;
            if(result!=0){
                n_b.push_back(result);
            }
            b/=10;
            mult*=10;
        }

        reverse(n_a.begin(), n_a.end());
        reverse(n_b.begin(), n_b.end());
        string expressao;
        bool first = true;
        for(auto a : n_a){
            for(auto b : n_b){

                long long val = 1LL * a * b;

                if(!first){
                    if(val >= 0)
                        expressao += " + ";
                    else
                        expressao += " - ";
                }
                else{
                    if(val < 0){
                        expressao += "-";
                    }
                    first = false;
                }

                expressao += to_string(abs(a));
                expressao += " x ";
                expressao += to_string(abs(b));
    
            }
        }
        cout << expressao << "\n";
    }
}