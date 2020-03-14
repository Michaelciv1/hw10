#include "StringList.h"
#include <iostream>

using namespace std;

void StringList::displayList() const {
       struct ListNode *curNode = Head;
       while (curNode != NULL) {
           cout << curNode->firstNname << " " << curNode->lastName << endl;
           curNode = curNode->next; //to next node
    }

void StringList::insertNode(string fname, string lname){
    struct ListNode *newNode = new struct ListNode;//new node
       //setting the values
       newNode->firstNname = fname;
       newNode->lastName = lname;
       newNode->next = NULL;
       if (Head == NULL) {//if there are zero element set new node as head
           Head = newNode;
       }
       else {
           //else traverse through the list
           struct ListNode* curNode = Head;
           struct ListNode* parentNode = Head;
           while (curNode != NULL) {
               if (newNode->lastName.compare(curNode->lastName) <= 0) {//if the new node lastname is less than cur node last name then set the next node of new node as current node
                   newNode->next = curNode;//since newNode is alphabetically smaller
                   break;//then break
               }
               parentNode = curNode;//setting the parent node
               curNode = curNode->next;//next node
           }
           if (curNode == Head) {//if current node is head then newNode will be head
               Head = newNode;
           }
           else {
               parentNode->next = newNode; //else set the new node in parent.next
           }
       }
   }
