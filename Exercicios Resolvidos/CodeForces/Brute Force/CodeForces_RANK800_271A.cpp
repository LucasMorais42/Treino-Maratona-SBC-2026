#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/271/A

int main(){
	
	int year;

	cin >> year;
	year++; //começa sempre com o ano seguinte, digita 1987 começa com 1988
	while(1){
		
		string ano = to_string(year);
		map<char, int> mapeamento;
		for(char letra:ano){
			auto it = mapeamento.find(letra);
			if(it!=mapeamento.end()){
				mapeamento[letra]++;
			}
			else{
				mapeamento.insert({letra, 1});
			}
		}
		
		//se todos os valores no map forem 1, ou seja, todos digitos diferentes
		bool todos_diferentes = all_of(mapeamento.begin(), mapeamento.end(), [](const pair<int, int>& n){
			return n.second==1;
		});
		
		if(todos_diferentes){
			cout << year << "\n";
			return 0;
		}
		else{
			year++;
		}
	
	}

	
	
	
	
}