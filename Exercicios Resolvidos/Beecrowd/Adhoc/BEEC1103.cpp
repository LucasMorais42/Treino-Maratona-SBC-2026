#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int hatual, matual, hdesp, mdesp;
	while(cin>>hatual>>matual>>hdesp>>mdesp){
		if(hatual==0 && matual==0 && hdesp==0 && mdesp==0){
			break;
		}
		
		
		int horaatual_minutos = (hatual*60) + matual;
		int horadesp_minutos = (hdesp*60) + mdesp;
		
		int minutos;
		
		//se da hora que começou o dia até a hora de despertar
		//tem mais tempo do que a hroa atual
		//ex: 00:00 - 01:00 (hora atual) -> 60 minutos
		//00:00 - 12:00 (hora despertador) -> 720 minutos
		//quanto tempo "Livre" até despertar, 720 - 60
		
		
		if(horadesp_minutos >= horaatual_minutos){
			minutos = horadesp_minutos - horaatual_minutos;
		}
		
		//se da hora qeu começou o dia até a hora atual, é mairo que a hora até o desperador
		//00:00 - 21:33 -> hora atual
		//00:00 - 21:10 -> hora despertador
		
		//significa que eu ainda tenho 1 dia inteiro livre
		else{
			minutos = (24*60 - horaatual_minutos)+horadesp_minutos;
		}
		cout << minutos << "\n";
		
	}
}
