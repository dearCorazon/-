
#include<iostream>
#include <stdlib.h>
using namespace std;
typedef struct DoubleLinkedList
{
	int data;
	DoubleLinkedList *prior;
	DoubleLinkedList *next;
}DLNode;
/*
DLNode *insert() {};
DLNode *delete() {};
*/

DLNode*  createList(int n ) {
	DLNode *head,*p;
	head = (DLNode*)malloc(sizeof(DLNode));
	head->data = NULL;
	head->prior = NULL;
	head->next = NULL;
	p = head;
	int i, data;
	i = 0;
	cout<< "plz inout the list" << endl;
	for (i; i < n; i++) {
		cin >> data;
		DLNode *new_node;
		new_node = (DLNode*)malloc(sizeof(DLNode));
		new_node->data = data;
		new_node->next = NULL;
		new_node->prior = p;
		p->next = new_node;
		p = p->next;
	}
	return head;
};
void insert(DLNode* head,int n,int data) {//ºó²å
	DLNode *p,*new_node;
	p = head;
	int i;
	for (i = 0; i < n; i++) {
		p = p->next;
	}
	new_node = (DLNode*)malloc(sizeof(DLNode));
	new_node->data = data; 
	new_node->next = p->next;
	new_node->prior = p;
	p->next->prior = new_node;
	p->next = new_node;
}
void print_List(DLNode * head) {
	DLNode *p;
	p = head->next;
	do {
		cout << " " << p->data;
		p = p->next;
		
	} while (p!=NULL);
	cout << endl;
}
void delete_List(DLNode *head,int n) {
	DLNode *p;
	p = head->next;
	int i = 1;
	for (i; i <n; i++) {
		p = p->next;
	}
	p->prior->next = p->next;
	p->next->prior = p->prior;
	p->prior = NULL;
	p->next = NULL;
	free(p);
}
//
//int main() {
//	DLNode* head=createList(5);
//	print_List(head);
//	//insert(head, 1, 100);
//	delete_List(head, 3);
//	print_List(head);
//	system("pause");
//	return 0;
//}