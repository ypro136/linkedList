#include <iostream>

#include "linkedList.h"

using namespace std;

struct node* l1 = nullptr;

linkedList list;

int main() {

    l1 = list.insertInStart(l1, 3);
    l1 = list.insertInStart(l1, 7);
    l1 = list.insertInStart(l1, 9);
    l1 = list.append(l1, 15);
    list.insertInMiddle(l1->next, 20);
    list.insertInMiddle(l1->next, 24);
    list.deleteNode(l1->next, l1->next->next);

    cout << "The linked list is: ";

    list.display(l1);

    return 0;
}