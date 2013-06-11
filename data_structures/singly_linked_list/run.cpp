#include <iostream>
#include <stdlib.h>

using namespace std;

struct node
{
	int data;
	node *next;
};

node *head = NULL;

void insert_front(int data)
{
	node *temp;

	temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = head;
	head = temp;
}

void insert_back(int data)
{
	if (head == NULL) {
		insert_front(data);
	} else {
		node *temp1;

		temp1 = (node*)malloc(sizeof(node));
		temp1 = head;
		
		while (temp1->next != NULL) {
			temp1 = temp1->next;
		}

		node *temp;

		temp = (node*)malloc(sizeof(node));
		temp->data = data;
		temp->next = NULL;
		temp1->next = temp;
	}	
}

void insert_after(int pos, int data)
{
	node *temp1;

	temp1 = (node*)malloc(sizeof(node));
	temp1 = head;

	for (int i = 1; i < pos; i++) {
		temp1 = temp1->next;

		if (temp1 == 0) {
			cout << "Can't insert after node " << pos << ". It doestn't exist." << endl;
			return;
		}
	}

	node *temp;

	temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = temp1->next;
	temp1->next = temp;	
}

void delete_front()
{
	node *temp;

	temp = (node*)malloc(sizeof(node));
	temp = head;
	head = temp->next;
	free(temp);
}

void traverse()
{
	node *temp1;
	
	temp1 = head;
	cout << "Traversing via singly linked list: " << endl;
	while (temp1 != NULL) {
		cout << temp1->data << endl;
		temp1 = temp1->next;
	}
}

int main()
{
	insert_front(10);
	insert_front(20);
	insert_front(30);
	insert_front(40);
	
	insert_back(50);
	insert_back(60);
	insert_back(70);
	
	delete_front();
	delete_front();

	insert_after(2, 80);
	insert_after(2, 90);
	insert_after(7, 100);
	insert_after(6, 110);	

	traverse();

	return 0;
}