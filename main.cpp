#include <iostream>

#include "linkedList.h"

using namespace std;

linkedList list;

int main() 
{
    //bbb
    for (int i = 0; i < 10; i++)
    {
        list.append(i);
    }
    list.insertInStart(3);
    list.insertInStart(7);
    list.insertInStart(9);
    list.append(15);
    list.insertInMiddle(3, 20);
    list.insertInMiddle(3, 24);
    list.deleteNode(2);

    list.display();

    return 0;
}