#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int matx[] = {1, -1, 0, 0};
int maty[] = {0, 0, -1, 1};

bool dfs(vector< vector<int> > &vec, vector< vector<int> > &vi, int x, int y);

int main(int argc, char** argv) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int counter;
	cin >> counter;
	
	while (counter--) {
		
		vector< vector<int> > vec(5, vector<int>(5));
		
		for (int i = 0; i < vec.size(); i++) {

			for (int j = 0; j < vec[i].size(); j++) {
		
				cin >> vec[i][j];
			}
		}

		vector< vector<int> > vi(5, vector<int>(5));
		
		if (dfs(vec, vi, 0, 0)) {
		
			cout << "COPS" << endl;
		}
		else {
		
			cout << "ROBBERS" << endl;
		}
	}
	
	return 0;
}

bool dfs(vector< vector<int> > &vec, vector< vector<int> > &vi, int x, int y) {

	vi[x][y] = true;

	if (x == 4 && y == 4) {
	
		return true;
	}

	int result = 0;

	for (int i = 0; i < 4; ++i) {

		int nx = x + matx[i], ny = y + maty[i];

		if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5 && !vi[nx][ny] && vec[nx][ny] == 0) {

			result |= dfs(vec, vi, nx, ny);
		}
	}

	return result;
}
