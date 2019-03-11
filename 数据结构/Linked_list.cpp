#include<iostream>
#include <stdlib.h>
using namespace std;
//
struct LNode {
	int data;
	LNode *next;
};

LNode* create_bottom(int n) {
	LNode * head;
	LNode * head_next;
	head = (LNode*)malloc(sizeof(LNode));
	head->next = NULL;
	head_next = NULL;
	int data;
	cout << "please input " << n << " codes " << endl;
	int i;
	for (i = 0; i < n; i++) {
		cin >> data;
		LNode *new_node;
		new_node = (LNode*)malloc(sizeof(LNode));
		new_node->data = data;
		new_node->next = head_next;
		head_next = new_node;
		head->next = head_next;
	}
	return head;
};

LNode* create_front(int n) {
	LNode * head;
	LNode * head_next;
	head = (LNode*)malloc(sizeof(LNode)); 
	head->next = NULL;
	head_next = head;
	int data;
	cout << "please input " << n << " codes " << endl;
	int i;
	for (i = 0; i < n; i++) {
		cin >> data;
		LNode *new_node;
		new_node = (LNode*)malloc(sizeof(LNode));
		new_node->data = data;
		new_node->next = NULL;
		head_next->next = new_node;
		head_next = head_next->next;
	}
	return head;
}

LNode* GetElem(LNode * head, int i) {
};
LNode* LocateElem(LNode *head, int e) {};
LNode* InsertElem(LNode *head, int i, int e) {};
LNode* Delete(LNode *head, int i) {};
void printLinked_List(LNode *head) {
	LNode *p;

	p = head->next;
	
	if (head->next == NULL) {
		cout << "Empty Linked List!" << endl;
		exit(0);
	}
	do {
		cout << p->data;
		p = p->next;
	} while (p != NULL);
}

int main()
{
	LNode * head;
	head = create_front(5);
	printLinked_List(head);
	return 0;
}
//test1;
//test2;