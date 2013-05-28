#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void cpp_concat() {
	string a = "Hello";
	string b = ", World!";
	string c = a + b;

	cout << c << endl;
}

void c_strcat() {
	char hello[10] = "Hello";
	char world[10] = ", World!";

	strcat(hello, world);

	cout << hello << endl;
}

void c_concat() {
	char hello[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char world[] = { ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0' };

	cout << hello << world << endl;
}

int main() {
	cpp_concat();
	c_strcat();
	c_concat();

	return 0;
}