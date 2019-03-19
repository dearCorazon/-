#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct Circular_LinkedList {
	int data;
	Circular_LinkedList *next;
}CLNode;
CLNode *create_List(int n) {
	CLNode *head = (CLNode*)malloc(sizeof(CLNode));
	CLNode *p = head;
	head->data = NULL;
	head->next = NULL;
	int i = 0;
	cout << "plz intput List" << endl;
	for (i; i < n; i++) {
		CLNode *new_Node = (CLNode*)malloc(sizeof(CLNode));
		int data;
		cin >> data;
		new_Node->data = data;
		p->next = new_Node;
		new_Node->next = NULL;
		p = p->next;
	}
	p->next = head;
	return head;
}
void print_list(CLNode *head) {
	CLNode *p;
	p = head->next;
	do {
		cout << " " << p->data;
		p = p->next;
	} while (p!= head);
}
int main() {
	CLNode *head=create_List(5);
	print_list(head);
	system("pause");
	return 0;
}    