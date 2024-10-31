#include <bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node* prev;
};

// function to add node
void push(node** head, int newdata) {
	node* newnode = new node();
	newnode->data=newdata;
	newnode->prev=NULL;
	newnode->next=(*head);
	if((*head)!=NULL) 
		(*head->prev)=newnode;
		(*head)=newnode;
}

void printlist(node* node) {
	while (node!=NULL) {
		cout << node->data<<" ";
		node= node->data next;
	}
}
int main () {
	node* head=NULL;
	push(&head, 2);
	push(&head, 3);
	push(&head,5);
	push(&head,7);
	
	cout << "doubly linked list: ";
	printlist(head);
	return
}
