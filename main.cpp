#include <iostream>
#include "NameList.h"

using namespace std;

int main()
{
    int numOfNames;
    NameList list;

    cout << "The Great Name Sorting Machine" << endl;
    cout << "How many names would you like to sort: ";
    cin >> numOfNames;
    cout << endl;

    for(int x = 0; x < numOfNames; x++){
        string tempFirst, tempLast;
        cout << "Enter first name: ";
        cin >> tempFirst;
        cout << "Enter last name: ";
        cin >> tempLast;
        list.insertNode(tempFirst, tempLast);
        cout << endl;
    }
    cout << "Sorted List: " << endl;
    list.displayList();
}
