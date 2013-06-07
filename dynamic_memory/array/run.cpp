#include <iostream>
#include <stdlib.h>

using namespace std;

//0  1  2  3
//4  5  6  7
//8  9  10 11
//12 13 14 15

void init_flat_multi_array() {
	int n = 4;
	int *m = (int*)malloc(sizeof(int)*n*n);

	for (int i = 0; i < n*n; i++) {
		m[i] = i;
	}

	cout << m[0+3] << endl;
	cout << m[2*n+3] << endl;

	free(m);
	m = NULL;
}

void init_flat_pointers_of_pointers() {
	int n = 4;
	int **m = (int**)malloc(n*sizeof(int*));

	//check if not null
	if (m) {
		for (int i = 0; i < n; i++) {
			m[i] = (int*)malloc(n*sizeof(int));
		}
	}	

	for (int a = 0; a < n; a++) {
		for (int b = 0; b < n; b++) {
			m[a][b] = a + b; 		
		}
	}

	cout << m[0][2] << endl;
	cout << m[3][3] << endl;	

	for (int j = 0; j < n; j++) {
		free(m[j]);
		m[j] = NULL;
	}
	free(m);
	m = NULL;
}

void init_2_malloc() {
	int n = 4;
	int *m = (int*)malloc(sizeof(int)*n*n);
	int **p = (int**)malloc(sizeof(int*)*n);

	p[0] = &m[0];
	p[1] = &m[4];
	p[2] = &m[8];
	p[3] = &m[12];
	
	for (int i = 0; i < n; i++) {

	}

	free(m);
	m = NULL;
	free(p);
	p = NULL;
}

int main() {
	//init_flat_multi_array();
	//init_flat_pointers_of_pointers();
	//??init_2_malloc();

	return 0;
}