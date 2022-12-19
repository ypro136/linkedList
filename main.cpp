#include <iostream>

#include "linkedList.h"

using namespace std;

linkedList list;

int main() {

    list.insertInStart(3);
    list.insertInStart(7);
    list.insertInStart(9);
    list.append(15);
    list.insertInMiddle(3, 20);
    list.insertInMiddle(3, 24);
    //list.deleteNode(3);

    cout << "The linked list is: ";

    list.display();

    return 0;
}