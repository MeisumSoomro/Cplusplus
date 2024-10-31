#include <iostream>
using namespace std;

class node {
	public:
		int data;
		node* next;
};

void push(node ** head, int newdata) {
	node* newnode= new node();
	newnode->data = newdata;
	newnode->next = (*head);
	(*head)=newnode;
}

void deletenode (node** head, int key) {
	node* temp=*head;
	node* prev=NULL;
	if (temp!=NULL && temp->data==key) {
		*head= temp->next;
		delete temp;
		return;
	}
	
	else {
		while (temp!=NULL && temp->data!=key) {
			prev=temp;
			temp=temp->next;
		}
		if (temp==NULL) {
			return;
		}
		prev->next=temp->next;
		delete temp;
	}
}

void printlist (node* node) {
	while (node!=NULL) {
		cout << node->data << " " ;
		node=node->next;
	}
}

int main () {
	node* head=NULL;
	push(&head,7);
	push(&head,2);
	push(&head,5);
	push(&head,9);
	cout << "created list:";
	printlist(head);
	deletenode(&head,2);
	cout << endl << "linked list after deletion of 2:";
	printlist(head);
	
	return 0;
}
