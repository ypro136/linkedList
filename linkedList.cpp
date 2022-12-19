#include <iostream>

#include "linkedList.h"

using namespace std;




linkedList::linkedList()
{
	
}


node* linkedList::insertInStart(node* head, int new_data)
{
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->next = head;
	head = new_node;
	return head;
}

void linkedList::insertInMiddle(node* previous, int new_data)
{
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->next = previous->next;
	previous->next = new_node;
}

void linkedList::append(int data)
{
	node* p = head;

	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = nullptr;

	while (p->next != nullptr)
	{
		p = p->next;
	}
	p->next = temp;
}

void linkedList::deleteNode(node* previous, node* intended)
{
	previous->next = intended->next;
}

void linkedList::display(node* head) 
{
	struct node* ptr;
	ptr = head;
	while (ptr != NULL)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
}

