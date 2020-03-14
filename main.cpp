/*
  CIS 22B

    HW10: Asks user to specify number of names they want sorted.
    Sorts names using a linked list and displays final output.

  Author: Michael Wallerius

  Date:3/12/2020

*/

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

/*OUTPUT
The Great Name Sorting Machine
How many names would you like to sort: 5

Enter first name: Michael
Enter last name: Wallerius

Enter first name: John
Enter last name: Ambrose

Enter first name: Peter
Enter last name: Kazinsky

Enter first name: Lulu
Enter last name: Wang

Enter first name: Terry
Enter last name: Cruise

Sorted List:
John Ambrose
Terry Cruise
Peter Kazinsky
Michael Wallerius
Lulu Wang

Process returned 0 (0x0)   execution time : 20.446 s
Press any key to continue.
*/
