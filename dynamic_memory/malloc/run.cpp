#include <iostream>
#include <stdlib.h>

using namespace std;

void use_malloc() {
	int *p;
	p = (int*) malloc(10 * sizeof(int));

	for (int i = 0; i < 10; i++) {
		p[i] = i + 5;
	}

	for (int i = 0; i < 10; i++) {
		cout << p[i] << endl;
	}
	
	free(p);
	cout << p << endl;
	p = NULL;
	cout << p << endl;	
}

int main() {
	use_malloc();

	return 0;
}