#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;

vector<int> dx = {0, 0, 1, -1};
vector<int> dy = {1, -1, 0, 0}; 
//direita, esquerda, baixo, cima

bool valid(int x, int y){
	if(x<0 || y< 0 || x>4 || y>4){
		return false;
	}
	return true;
}

bool bfs_grid(vector<vector<int>>& matriz){
	vector<vector<bool>> visited(5, vector<bool>(5, false));
	queue<pair<int, int>> q;
	q.push({0,0});
	
	while(!q.empty()){
		pair<int, int> coord = q.front(); q.pop();
		int x = coord.first; 
		int y = coord.second;
		visited[x][y] = true;
		if(x==4 && y==4){
			return true;
		}
		
		for(int i=0; i<4; i++){
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			if(valid(new_x, new_y) && matriz[new_x][new_y]!=1 && !visited[new_x][new_y]){
				q.push({new_x, new_y});
			}
	
		}
		
		
	}
	return false;
	
	
}

int main() {
	
	int n; cin >> n;
	while(n--){
		vector<vector<int>> matriz(5, vector<int>(5,0));
		
		for(int i=0; i<5; i++){
			for(int j=0; j<5; j++){
				cin>>matriz[i][j];
			}
		}
		
		cout << (bfs_grid(matriz)? "COPS\n" : "ROBBERS\n");
	}

}

