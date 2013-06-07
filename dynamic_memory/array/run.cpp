#include <iostream>
#include <stdlib.h>

using namespace std;

void init_flat_multi_array() {
	int n = 4;
	int *m = (int*)malloc(sizeof(int)*n*n);

	for (i = 0; i < n*n; i++) {
		m[i] = i;
	}

	cout << m[0+3] << endl;
	cout << m[2*n+3] << endl;
}


int main() {
	init_flat_multi_array();

	return 0;
}