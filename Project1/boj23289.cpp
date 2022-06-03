#include <iostream>
using namespace std;
int n, m,k;
int board[21][21];
//방향 알려줌
int dx[8] = { 0,1,1,0, };

//check해주는 함수
bool Check() {
	bool ans = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] <= k)ans = false;
		}
	}
	return ans;
}

void make_board(int x,int y,int dir) {

}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

}