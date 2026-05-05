#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;


int main() { _

    string palavra, armada;
    cin >> palavra >> armada;

    int tot = 0;
    int tam = armada.size();

    for(int l = 0; l + tam <= palavra.size(); l++){
        int dif = 0;

        for(int i = 0; i < tam; i++){
            if(palavra[l + i] != armada[i]){
                dif++;
            }
        }

        if(dif == tam){
            tot++;
        }
    }

    cout << tot << endl;
}
