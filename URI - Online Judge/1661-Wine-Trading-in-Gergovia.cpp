#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(int argc, char** argv) {

	int n; 

	while (cin >> n && n) {

		vector<int> vec(n);

		for (int i = 0; i < n; ++i) {
				
			cin >> vec[i];
		}
	
		long long acc = 0;
		long long ans = 0;

		for (int i = 0; i < n; ++i) {

			acc += vec[i];
			ans += abs(acc);
		}

		cout << ans << endl;
	}

	return 0;
}
