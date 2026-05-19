#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    while(n--){
        int a, b, x, y; cin >> a >> b >> x >> y;
       
        int esquerda = (x)*(b);
        int direita = (a-x-1)*(b);
        int cima = (a)*(y);
        int baixo = (a)*(b-y-1);
  

        int maximo = max({esquerda, direita, cima, baixo});
        cout << maximo << "\n";
       
    }
}