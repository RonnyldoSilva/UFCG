#include <iostream>
#include <stdio.h>

using namespace std;

// global variable
int counter;
int fibonacci(int x);

int main(int argc, char** argv)
{
	int n;
	cin >> n;

	int x;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		counter = 0;

		cout << "fib(" << x << ") = " << counter - 1 << " calls = " << fibonacci(x) << endl;
	}

	return 0;
}

int fibonacci(int x)
{
	counter++;

	if(x == 0)
	{
		return 0;
	}
	if(x == 1)
	{
		return 1;
	}	
	else
	{
		return fibonacci(x - 1) + fibonacci(x -2);
	}
}
