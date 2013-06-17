#include <iostream>

using namespace std;

int calls_count = 0;

int fib_recursion(int n)
{
	cout << "Call: " << ++calls_count << endl;
	if (n <= 2) { 
		return 1;
	} else {
		return fib_recursion(n - 2) + fib_recursion(n - 1);
	}
}

int fib_dynamic(int n)
{
	if (n <= 2) return 1;
	int x = 1, y = 1;
	int fib;

	for (int i = 3; i <= n; i++) {
		fib = x + y;
		x = y;
		y = fib;
	}

	return fib;
}

int main()
{
	int n = 4;
	cout << "Recusrsion fib " << n << ": " << fib_recursion(n) << endl;

	int m = 7;
	cout << "Recusrsion fib " << m << ": " << fib_dynamic(m) << endl;	 
}