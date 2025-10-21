#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define F first
#define S second
#define PB push_back
#define MP make_pair


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cin.ignore(); 
    map<char, int> mapeamento;
    for(int i =0; i<n; i++){
        mapeamento.clear();
        string palavra;
        
        getline(cin, palavra);
        for(int i=0; i<palavra.size();i++){
            palavra[i]=tolower(palavra[i]);
        }

       
        for(int i=0; i<palavra.size();i++){
            
            if(isalpha(palavra[i])){
                mapeamento[palavra[i]]++;
            }
            
        }
  
        int maior =0;
        for(auto& valores: mapeamento){
            if(valores.second > maior){
                maior = valores.second;
            }
        }
        for(auto& valores:mapeamento)
        {
            if(valores.second==maior){
                cout<<valores.first;
            }
        }
        
        cout << "\n" << flush;
        

    }
    return 0;
}
