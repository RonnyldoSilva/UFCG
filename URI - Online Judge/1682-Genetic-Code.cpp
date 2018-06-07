#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {

	char str[] = "NONPNOPNPONOPNONPNOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPONPNONPONOPNONPNOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPONPNONPONOPNONPNOPNPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPONPNONPONOPNONPNOPNPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNOPNPONOPNONPNOPNPONOPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPONPNONPONOPNONPNOPNPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPONPNONPONOPNONPNOPNPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOP";

	int n = strlen(str);
	int m;
	
	while (true) {

		cin >> m;
		
		if (!m) {
		
		return 0;
		}

		int i = 0 ;

		while (m--) {

			cout << str[i];

			i = (i + 1) % n;
		}

		cout << endl;
	}

	return 0;
}
