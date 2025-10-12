#include <bits/stdc++.h>
using namespace std;

int check(int x1, int y1, int x2, int y2){
	int result_x = x2-x1;
	int result_y = y2-y1;
	if((x1==x2) && (y1==y2)){
		return 0;
	}
	
	else if(x1==x2 || y1==y2){
		return 1;
	}

	
	else if(abs(result_x)==abs(result_y)){
		return 1;
	}
	
	else {
		return 2;
	}
	
	
}

int main(){
	int x1, x2, y1, y2;
	
	while(cin >> x1 >> y1 >> x2 >> y2)
	{
		if(x1==0 && x2==0 && y1==0 && y2==0){
			break;
		}
		cout << check(x1, y1, x2, y2) << "\n";
	}
}
