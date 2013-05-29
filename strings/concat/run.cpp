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
	char str1[100] = "Hello";
    char str2[] = ", World!";

	char *p; /* points str1 */
	char *q; /* points str2 */ 


	for (p = str1; *p != 0; p++) { 
		/* skip along till the end */ 
	}
	/* here p points to '\0' in str1 */

	/* now we start to copy characters from str2 to str1 */
	for (q = str2; *q != 0; p++, q++ ) {
		*p = *q;
	}

	cout << str1 << endl;
}

int main() {
	cpp_concat();
	c_strcat();
	c_concat();

	return 0;
}