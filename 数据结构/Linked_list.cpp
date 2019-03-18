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
LNode* create_newNode(int data) {
	LNode *new_Node;
	new_Node = (LNode*)malloc(sizeof(LNode));
	new_Node->data = data;
	new_Node->next = NULL;
	return new_Node;
}
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

int GetElem(LNode * head, int n) { 
	int i, elem;
	LNode *p;
	p = head;
	for (i = 1; i <= n; i++) {
		if (p ==NULL) {
			cout << "empty! or Parameter error" << endl;
			exit(0);
		}
		p = p->next;
	}
	elem = p->data;
	return elem;
};

int  LocateElem(LNode *head, int e) {
	LNode *p;
	int i;
	i = 1;
	p = head->next;
	if (head->next == NULL) {
		cout << "Empty List!" << endl;
		system("pause");
		exit(0);

	}
	do {
		if (p->data == e) {
			break;
		}
		p = p->next;
		i++;
	} while (p!=NULL);
	if (p == NULL) {
		cout << "not have the element!" << endl;
		system("pause");
		exit(0);
	}
	return i;
};
void if_Empty(LNode * head) {
	if (head->next == NULL) {
		cout << "Empty Linked List!" << endl;

		exit(0);
	}
}
/*
LNode* InsertElem(LNode *head, int i, int e) {};
LNode* Delete(LNode *head, int i) {};
*/
void printLinked_List(LNode *head) {
	LNode *p;

	p = head->next;
	
	if_Empty(head);
	do {
		cout << " "<<p->data;
		p = p->next;
	} while (p != NULL);
	cout << endl;
}

LNode* InsertElem(LNode *head ,int n,int data) {
	LNode *newNode;
	LNode *p;
	p = head;
	newNode = create_newNode(data);
	if_Empty(head);
	int i;
	for (i = 0; i<n; i ++) {
		p = p->next;
	}
	if (p == NULL) {
		cout << "Exceed the upper limit"<< endl;
		system("pause");
		exit(0);
		
	}
	newNode->next = p->next;
	p->next = newNode;
	return head;
}
int main()
{
	LNode * head;
	head = create_front(5);
	printLinked_List(head);
	InsertElem(head,6,90);
	printLinked_List(head);
	system("pause");
	return 0;
}
//test1;
//test2;
//test3
//test4
//test5