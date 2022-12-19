#include <iostream>

#include "linkedList.h"

using namespace std;




linkedList::linkedList()
{
	
}


void linkedList::insertInStart(int new_data)
{
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->next = head;
	head = new_node;
}

void linkedList::insertInMiddle(unsigned int index, int new_data)
{
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = new_data;
	if (index > 0)
	{
		node* previous = head;
		for (int i = 0; i < index; i++)
		{
			previous = previous->next;
		}
		new_node->next = previous->next;
		previous->next = new_node;
	}
	else
	{
		new_node->next = head->next;
		head->next = new_node;
	}
	
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

void linkedList::deleteNode(unsigned int index)
{
	node* p = head;
	if (index > 0)
	{
		node* previous = head;
		for (int i = 0; i < index; i++)
		{
			previous = previous->next;
		}
		node* temp = previous->next;
		previous->next = previous->next->next;
		delete(temp);
	}
	else
	{
		head->next = p->next;
		delete(p);
	}
}

void linkedList::display() 
{
	node* p = head;
	cout << " {";
	while (p != nullptr)
	{
		cout << p->data << ", ";
		p = p->next;
	}
	cout << "} ";
}

