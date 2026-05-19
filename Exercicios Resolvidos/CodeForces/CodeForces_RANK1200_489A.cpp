#include <bits/stdc++.h>
using namespace std;

bool check_ordenado(vector<int>& vet){
    for(int i=1; i<vet.size(); i++){
        if(vet[i-1]>vet[i]){
            return false;
        }
    }
    return true;
}

int main (){

    int n; cin >> n;
    vector<int> vetor(n);
    for(int i=0; i<n; i++){
        cin >> vetor[i];
    }
    bool ordenado = check_ordenado(vetor);

    if(ordenado){
        cout << "0\n";
        return 0;
    }

    int passos = 0;
    vector<pair<int, int>> trocas;
    vector<int> ordenado_vet = vetor;
    sort(ordenado_vet.begin(), ordenado_vet.end());
    set<int> ordenados;
   
    for(int i=0; i<n; i++){
        if(vetor[i]!=ordenado_vet[i]){
            auto it = find(vetor.begin()+i+1, vetor.end(), ordenado_vet[i]);
            int distancia = it - vetor.begin();
            trocas.push_back({i, distancia});
            passos++;
            int prov = vetor[i];
            vetor[i] = vetor[distancia];
            vetor[distancia] = prov;
    
        }
            
        if(check_ordenado(vetor) || passos>n){
            break;
        }
    }
    
    cout << passos << "\n";
    for(auto [a, b] : trocas){
        cout << a << " " << b <<"\n";
    }


}