#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int V, N;
    cin >> V >> N;

    vector<int> produtos(N);
    /*unordered_set é diferente do map, pois o map salva <chave, valor>, o set ele só salva valores
    é como se fosse um conjunto {1, 2, 3, 4, 5, 6}*/
    
    unordered_set<int> produtos_set;  // Para busca rápida

    for (int i = 0; i < N; i++) {
        cin >> produtos[i];
        produtos_set.insert(produtos[i]);
    }

    int alvo = 200 - V;
    bool encontrou = false;

    // Verifica todas as combinações de 2 produtos e busca o terceiro no set
    for (int i = 0; i < N && !encontrou; i++) {
        //basicamente vai pegar terceiro = alvo - produtos[0] + produtos[0+1]
        for (int j = i + 1; j < N && !encontrou; j++) {
            int terceiro = alvo - (produtos[i] + produtos[j]);
            
            // Verifica se o terceiro produto existe e é diferente de i e j
            //.count() verifica se um valor existe no set, se existir retorna 1, se não 0
            if (produtos_set.count(terceiro) && terceiro != produtos[i] && terceiro != produtos[j]) {
                encontrou = true;
            }
        }
    }

    if (encontrou) {
        cout << "fretegratis" << "\n";
    }
    else{
        cout << "fretepago" << "\n";
    }

    return 0;
}