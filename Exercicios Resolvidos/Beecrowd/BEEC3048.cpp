#include <iostream>

using namespace std;

int main(){
	
	int N, i, circulos=1, anterior;
	
	
	cin >> N;
	int sequencia[N];
	
	for(i=0;i<N;i++){
		cin >> sequencia[i];
	}
	anterior = sequencia[0];
	
	for(i=1;i<N;i++){
		if(sequencia[i]!=anterior){
			anterior = sequencia[i];
			circulos++;
		}
	
	}
	
	cout << circulos << "\n";
}
