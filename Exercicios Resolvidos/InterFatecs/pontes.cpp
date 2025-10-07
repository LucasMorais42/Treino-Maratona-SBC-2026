#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int melhor = INT_MAX;
    int melhor_a = -2, melhor_b = -2;
    int resto, total, x;

    for (int i = 0; i <= c / b; i++) { 
        resto = c - (b * i);

        if (resto % a == 0) { 
            x = resto / a; 

            if (total < melhor || (total == melhor && x < melhor_a)) {
                melhor = total;
                melhor_a = x;
                melhor_b = i;
            }
        }
    }

    if (melhor_a == -2){
        cout << "IMPOSSIVEL" << "\n";
    } 
    else{
        cout << melhor_a << " " << melhor_b << "\n";
    }

    return 0;
}
