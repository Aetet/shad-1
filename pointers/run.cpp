#include <iostream>

using namespace std;

void get_variable_address()
{
	int count = 10;
	int *p;

	p = &count;

	cout << p << endl;
}

void get_variable_by_address()
{
	int count = 10;
	int *p;
	int q;

	p = &count;
	q = *p;

	cout << q << endl;
}

int main()
{
	get_variable_address();
	get_variable_by_address();

	return 0;
}