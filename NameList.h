#ifndef NAMELIST_H
#define NAMELIST_H
#include <iostream>
using namespace std;

class NameList
{
    private:
        struct ListNode
        {
            string firstName;
            string lastName;
            struct ListNode *next;
        };

        ListNode *head;
    public:
        NameList() { head = nullptr; }
        virtual ~NameList();
        void displayList() const;
        void insertNode(string, string);
};

#endif // NAMELIST_H
