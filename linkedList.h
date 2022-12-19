#ifndef LINKEDLIST_CLASS_H
#define LINKEDLIST_CLASS_H

#include <iostream>

using namespace std;

struct node
{
	int data;
	struct node *next;
};

class linkedList
{
public:

	node* head = nullptr;



	linkedList();
	

	void append(int data = 0);

	void deleteNode(int index);
	//hear

	node* insertInStart(int new_data = 0);

	void insertInMiddle(int index, int new_data);

	void display();

};






#endif