#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;

int main() { _ //define de io
	
	double altura_inicial;
	int p1, p2;
	int n_tentativas;
	double velocidade, angulo;
	const double pi = 3.14159;
	const double g = 9.80665;
	while(cin>>altura_inicial>>p1>>p2>>n_tentativas){
		for(int i=0; i<n_tentativas; i++){
			cin >> angulo >> velocidade;
			double angulo_em_graus = (angulo*pi)/180.00000;
			double velocidade_x = velocidade * cos(angulo_em_graus);
			double velocidade_y = velocidade * sin(angulo_em_graus);
			double alcance = velocidade_x * (velocidade_y + sqrt(pow(velocidade_y, 2) + 2*g*altura_inicial))/g;
			
			cout << setprecision(5) << fixed << alcance <<  " -> ";
			if(alcance>=p1 && alcance<=p2){
				cout << "DUCK" << endl << flush;
			}
			else{
				cout << "NUCK" << endl << flush;
			}
			
		}
	}

}

