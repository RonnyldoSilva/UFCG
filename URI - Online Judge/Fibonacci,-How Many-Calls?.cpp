#include <iostream>
#include <stdio.h>

using namespace

// global variable
int conter;
int fibonacci(int x);

int main(int argc, char** argv)
{
	int n, x, calls;
	cin >> n;

	for(int i = 0; i <= n; i++)
	{
		cin >> x;
		conter = 0;
		calls = conter - 1;
		cout << "fib(" << x << ") = " << calls << " calls = " << fibonacci(x)) << endl;
	}

	return 0;
}

int fibonacci(int x)
{
	conter++;

	if(x == 0)
	{
		return 0;
	if(x == 1)
	{
		return 1;
	}	
	else
	{
		return fibonacci(x-1) + fibonacci(x-2);
	}
}
