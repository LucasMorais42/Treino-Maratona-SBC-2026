#include <bits/stdc++.h>
using namespace std;

int main() {
    int C;
    cin >> C;
    while(C--) {
        int N, M;
        cin >> N >> M;

        // cálculo usando log10 -> ANOTAR MT IMPORTANTE
        // Logaritmo pode ser pensado como "quantas vezes posso dividir aquele numero pela base 10"
        int num_digitos = (int)(M * log10(N)) + 1;

        cout << num_digitos << "\n";
    }
    return 0;
}

