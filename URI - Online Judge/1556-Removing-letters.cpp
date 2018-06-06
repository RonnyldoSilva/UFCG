#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define sz(x) ((int)(x.size()))
#define ii pair<int,int>
#define vii vector<ii>
#define vi vector<int>
#define EPS 0.00001
#define oo 1000000005

int G[1005][30];
int t;
int size;
char en[1005];
char word[1005];

void DFS(int v);

int main (int argc, char** argv) {

	while (scanf("%s", en+1) != EOF ) {

		en[0] = 'X';

		t = strlen(en);

		memset(G, 0, sizeof G);

		int lig[30];

		memset(lig, 0, sizeof lig);

		for (int i = t-1; i >= 0; i--) {

			for(int j = 0; j < 30; j++) {

				G[i][j] = lig[j];
			}

			lig[ en[i] - 'a' ] = i;
		}

		size = 0;

		DFS(0);

		cout << endl;
	}

	return 0;
}

void DFS(int v){

	for (int i = 0; i < 30; i++) {

		if( G[v][i] ) {

			word[size] = 'a' + i;

			size++;

			word[size] = '\0';

			cout << word << endl;

			DFS(G[v][i]);

			size--;
		}
	}	
}
