#ifndef STRINGLIST_H
#define STRINGLIST_H
#include <iostream>

using namespace std;

class StringList
{
    public:
        StringList() {head = nullptr;}
        ~StringList();
         void insertNode(string x);
        void displayList() const;
    protected:

    private:
        struct ListNode
        {
            string firstName;
            string lastName;
            struct ListNode *next;
        };

        ListNode *head;
};

#endif // STRINGLIST_H
