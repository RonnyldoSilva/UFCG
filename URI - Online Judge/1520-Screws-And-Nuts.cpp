#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	
	int T[100000];
	int n, p;

	while (cin >> n) {

		int t1 = 0;

		for (int i = 0; i < n; i++) {

			int a, b; 
			cin >> a >> b;

			for (int j = a; j <= b; j++) {

				T[t1] = j;
				t1++;
				
			}
		}

		sort(T, T+t1);

		cin >> p;

		int begin = lower_bound(T, T+t1, p) - T;
		int end = upper_bound(T, T+t1, p) - T;

		if (begin < end) {

			cout << p << " found from " << begin << " to " << end-1 << endl;        
		}
		else {

			cout << p << " not found" << endl;
		}

	}

	return 0;
}
