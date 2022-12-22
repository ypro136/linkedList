#include <iostream>

#include<conio.h>  //  player input (as one char)

#include "linkedList.h"

using namespace std;

linkedList list;

int main()
{

    int input, index;
    bool exit = false;
    while (!exit)
    {
        cout << "a to append." << endl;
        cout << "s to insert in the start." << endl;
        cout << "m to insert in middle." << endl;
        cout << "e to delete a node." << endl;
        cout << "d to display." << endl;
        cout << "x to exit." << endl;


        char i;
        cin >> i;
        switch (i)
        {
        case'a':
            cout << "enter value:";
            cin >> input;
            list.append(input);
            system("cls");
            break;
        case's':
            cout << "enter value:";
            cin >> input;
            list.insertInStart(input);
            system("cls");
            break;
        case'm':
            cout << "enter index:";
            cin >> index;
            cout << "enter value:";
            cin >> input;
            list.insertInMiddle(index, input);
            system("cls");
            break;
        case'e':
            cout << "enter index:";
            cin >> index;
            list.deleteNode(2);
            system("cls");
            break;
        case'd':
            list.display();
            system("pause");
            system("cls");
            break;
        case'x':
            exit = true;

        }

    }

    return 0;
}