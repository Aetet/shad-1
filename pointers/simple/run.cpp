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

void assign_pointers_same_type()
{
	int *p;
	int *q;
	int x = 100;

	p = &x;
	q = p;

	cout << "p address is: " << p << ", q address is:" << q << endl;
	cout << "p value is: " << *p << ", q value is:" << *q << endl;
}

void assign_pointers_different_type_problem()
{
	double x = 100.1;
	double y;
	int *p;

	p = (int *) &x;
	y = *p;

	cout << "y value is: " << y << endl;
}

void pointers_plus_minus()
{
	char *c = (char *) 0x7fff80ccd350;
	int *i = (int *) 0x7fff80ccd350;

	c++;
	i++;

	cout << "char pointer: " << static_cast<void*>(c) << endl;
	cout << "int pointer: " << static_cast<void*>(i) << endl;

	c = c + 10;
	i = i + 4;

	cout << "char pointer: " << static_cast<void*>(c) << endl;
	cout << "int pointer: " << static_cast<void*>(i) << endl;
}

int main()
{
	//get_variable_address();
	//get_variable_by_address();
	//assign_pointers_same_type();
	//assign_pointers_different_type_problem();
	//pointers_plus_minus();

	return 0;
}