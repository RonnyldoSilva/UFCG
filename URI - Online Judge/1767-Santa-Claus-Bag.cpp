#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <vector>

using namespace std;

struct strct {
	int v = 0;
	int p = 0;
};

strct t[301][51], a, b;
int maximumW, qtdPacks;
strct knapsack(int weight[], int v[], int arraySize, int maximumW);
int findBW();

int main(int argc, char** argv)
{
	int x;
	cin >> x;

	for (int i = 0; i < x; i++)
	{
		qtdPacks = 0;

		cin >> maximumW;

		int weight[maximumW + 1]; weight[0] = 0;
		int v[maximumW  + 1]; v[0]  = 0;

		for (int i = 1; i <= maximumW; i++)
		{
			cin >> v[i] >> weight[i];
		}

		strct ans = knapsack(weight, v, maximumW, 50);

		cout << ans.v << " brinquedos\n";

		int p = findBW();

		cout << "Peso: " << p << " kg\n";
		cout << "sobra(m) " << maximumW - ans.p << " pacote(s)\n\n";
	}
}

int findBW()
{
	int best = -1, pos = 0;

	for (int weight = 1; weight <= 50; weight++)
	{
		if (t[maximumW][weight].v > best)
		{
			best = t[maximumW][weight].v;
			pos = weight;
		}
	}

	return pos;
}

strct knapsack(int weight[], int v[], int arraySize, int maximumW)
{
	for (int col = 0; col <= maximumW; col++)
		{
		t[0][col].v = 0;

		for (int i = 1; i <= arraySize; i++)
		{
			a = t[i - 1][col];

			if (weight[i] > col)
			{
				b = t[0][col];
			} 
			else 
			{
				b = t[i - 1][col - weight[i]];
				b.v += v[i];
			}

			if (a.v >= b.v)
			{
				t[i][col] = a;
			} 
			else if (a.v < b.v)
			{
				t[i][col] = b;
				t[i][col].p++;
			}
		}
	}

	return t[arraySize][maximumW];
}
