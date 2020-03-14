#include "NameList.h"

NameList::~NameList()
{
    ListNode *nodePtr;
    ListNode *nextNode;

    nodePtr = head;

    while (nodePtr != nullptr)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

void NameList::displayList() const{
    ListNode *nodePtr;

    nodePtr = head;

    while(nodePtr)
    {
        cout << nodePtr->firstName << " " << nodePtr->lastName << endl;
        nodePtr = nodePtr->next;
    }
}

void NameList::insertNode(string f, string l){
    ListNode *newNode;
    ListNode *nodePtr;
    ListNode *previousNode = nullptr;

    newNode = new ListNode;
    newNode->lastName = l;
    newNode->firstName = f;

    if (!head)
    {
        head = newNode;
        newNode->next = nullptr;
    }
    else
    {
        nodePtr = head;
        previousNode = nullptr;
        while (nodePtr != nullptr && nodePtr->lastName < l)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr -> next;
        }
        if (previousNode == nullptr)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}
