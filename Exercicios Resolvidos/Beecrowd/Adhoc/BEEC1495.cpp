#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n, g;
	while(cin>>n>>g){
		int pontos=0;
		vector<pair<int, int>> resultados;
		for(int i=0;i<n;i++){
			int time, adversario;
			cin >> time >> adversario;
			resultados.push_back({time, adversario});
		}
		sort(resultados.begin(), resultados.end(), [&](const pair<int, int>& a, const pair<int, int>& b){
			   bool a_ok = a.first <= a.second; //verifca um par {1,2} -> se 1<=2, significa que é true
    		   bool b_ok = b.first <= b.second; //mesma coisa de cima, so que com outro par
    		   //por exemplo {3, 2} 3<=2? false

    			if(a_ok != b_ok) return a_ok; // se a_ok != b_ok, um é true e outro false
    			//significa que a_ok vem antes, vai colocar os que faltam resultado

    			return (a.second - a.first) < (b.second - b.first);
				//depois ordena baseado se a subtração de {1,2} for menor que a subtração de {2, 4}
				//ou seja, no primeiro pair so precisa de 1 gol, no sgundo 2
				//{1,2} tem que vir antes.
				});
		
		
		for(auto &result : resultados){
			
			if(result.second>result.first){
				int falta_gols = result.second - result.first;
				if(g>=falta_gols+1){
					g-=falta_gols+1;
					result.first+=falta_gols+1;
				}
				else if(g>=falta_gols){
					g-=falta_gols;
					result.first+=falta_gols;
				}
			}
			else if(result.second==result.first){
				if(g>=1){
					g-=1;
					result.first+=1;
				}
			}
			
		}
		
		for(auto result:resultados){
			if(result.first>result.second){
				pontos+=3;
			}
			else if(result.first==result.second){
				pontos+=1;
			}
		}
	
		cout << pontos << "\n" << flush;
	}

}

