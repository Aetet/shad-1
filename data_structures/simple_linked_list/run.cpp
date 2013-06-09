#include <iostream>

struct node {
	int data;
	node *next;
} element;

void add_node(node *i, node **last) {
	if (!*last) *last = i; // List first element;
	else (*last).next = i; 
	i.next = NULL;
	*last = i;
}

int main() {
	element.data = 5;

	return 0;
}