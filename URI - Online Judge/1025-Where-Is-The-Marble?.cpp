#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int rise (void const *a, void const *b );
int findElement(int vet[], int len, int comp);

int main(int argc, char** argv) {

	int n, q;
	int a, b;

	n = 0;
 
	while (true){

		cin >> a;
		cin >> q;

		if (a == 0 && q == 0) {
 
			break;
		}
		
		int vet[a + 1];

		for (int i = 0; i < a; i++) {

			int y;
			cin >> y;
			vet[i] = y;
		}

		qsort(vet, a, sizeof(int), rise);

		cout << "CASE# " << n + 1 << ":" << endl;
		
		for (int i = 0; i < q; i++) {

			cin >> b;

			int x = findElement(vet, a, b);

			if (x != 0) {

				cout << b << " found at " << x << endl;
			}			
			else {

				cout << b << " not found" << endl;
			}
		}

		n++;  
	}

	return 0;
}

int rise (void const *a, void const *b ) {

	return (*(int*)a - *(int*)b );
}

int findElement(int vet[], int len, int comp) {

	for (int i = 0; i < len; i++) {

		if (vet[i] == comp) {
		
			return i + 1;
		}
	}

	return 0;
}
