#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
#include <string>

using namespace std;

int func1(vector<int> vec, int i, int j);
int func2(vector<int> vec, int i, int j, int k);

int main(int argc, char** argv) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;

	while (cin >> n >> m) {

		vector<int> vec(n);
		
		for (int i = 0; i < vec.size(); i++) {
		
			cin >> vec[i];
		}

		if (n == 1) {

     			cout << "Lucky Denis!" << endl;
      			continue;
    		}
		
		if (n == 2) {
      			
			std::unordered_set<int> seen;
			bool isOk = true;
			
			for (int i = 0; i < m && isOk; ++i) {

				for (int j = 0; j < m && isOk; ++j) {
				
					if (seen.count(func1(vec, i, j))) {

						isOk = false;
					}
					else {
					
						seen.insert(func1(vec, i, j));
					}
				}
			}
			
			if (isOk) {

				cout << "Lucky Denis!" << endl;
			}			
			else {
			
				cout << "Try again later, Denis..." << endl;
      			}

			continue;
		}

		unordered_set<int> seen;

		bool isOk = true;

		for (int i = 0; i < m && isOk; ++i) {

			for (int j = 0; j < m && isOk; ++j) {

				for (int k = 0; k < m && isOk; ++k) {

					if (seen.count(func2(vec, i, j, k))) {
						
						isOk = false;
					}
					else {
				
						seen.insert(func2(vec, i, j, k));
					}				
				}
			}
		}
	
		if (isOk) {

			cout << "Lucky Denis!" << endl;
		}		
		else {
	
			cout << "Try again later, Denis..." << endl;
		}
	}

	return 0;
}

int func1(vector<int> vec, int i, int j) {
	
	return vec[0] * i + vec[1] * j;
}


int func2(vector<int> vec, int i, int j, int k) {
  
	return vec[0] * i + vec[1] * j + vec[2] * k;
}
