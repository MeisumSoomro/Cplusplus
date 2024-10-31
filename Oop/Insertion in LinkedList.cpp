#include <bits/stdc++.h>
using namespace std;
class node {
	public:
		int data;
		node* next;
};

// function to nsert a new node in front of the list
void push(node **head, int newdata) {
	node* newnode=new node ();
	newnode->data=newdata;
	newnode->next=(*head);
	(*head)=newnode;
}

// function insert node after an specific position
void insertAfter (node* prevnode, int newdata) {
	if(prevnode== NULL) {
		cout << "the given node cannot be NULL" << endl;
		return;
	}
	
	node* newnode= new node ();
	newnode->data=newdata;
	newnode->next=prevnode->next;
	prevnode->next=newnode;
}

//function to insert a node after the end of the list
void append (node** head, int newdata) {
	node* newnode = new node();
	node *last=*head;
	newnode->data=newdata;
	newnode->next=NULL;
	if (*head==NULL) {
		*head=newnode;
		return;
	}
	while (last->next!=NULL)
	last = last->next;
	
	last->next=newnode;
	return;
}

// function to print the list
void printlist(node *node) {
	while(node !=NULL) {
		cout << " " << node->data <<endl;
		node=node->next;
	}
}
int main () {
	node* head=NULL;
	append(&head, 6);
	push(&head, 7);
	push(&head, 1);
	append(&head, 4);
	insertAfter(head->next, 8);
	
	cout << "created linked list is:" << endl;
	printlist (head);
	return 0;
	return 0;
}
