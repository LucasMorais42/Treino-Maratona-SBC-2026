#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fll;

vector<int> dx = {2, 2, -2, -2, 1, 1, -1, -1};
vector<int> dy = {1, -1, 1, -1, 2, -2, 2, -2};

bool valida(int x, int y){
	if(x<0 || y < 0 || x>=8 || y>=8){
		return false;
	} 
	return true;
}

int bfs(int xs, int ys, int tx, int ty){
	queue<tuple<int, int, int>> q;
	vector<vector<bool>> vis(8, vector<bool>(8, false));
	q.push(make_tuple(0, xs, ys));
	
	vis[xs][ys] = true;
	

	while(!q.empty()){
		
		tuple<int, int, int>dxy = q.front(); q.pop();
		int d = get<0>(dxy);
		int x = get<1>(dxy);
		int y = get<2>(dxy);
		
		for(int i=0; i<dx.size(); i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx==tx && ny==ty){
				return d+1;
			}
			if(valida(nx, ny) && !vis[nx][ny]){
				vis[nx][ny] = true;
				q.push(make_tuple(d+1, nx, ny));
			}
		}
	}
	return -1;
}

int main() { _ //define de io
	string pos_1, pos_2;
	while(cin>>pos_1>>pos_2){
		int x1 = pos_1[0] - 'a';
		int y1 = pos_1[1] - '0' - 1;
		
		int x2 = pos_2[0] - 'a';
		int y2 = pos_2[1] - '0' - 1;
		
		
		int c1 = bfs(x1, y1, x2, y2);
		
		
		int resp = c1;
		if(pos_1==pos_2){
			resp = 0;
		}
		cout << "To get from " << pos_1 << " to " << pos_2 << " takes " << resp << " knight moves.\n" << flush;
		
	}

}

