//CharleighList
//linked list

#ifndef CharleighList_H
#define CharleighList_H
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath> 
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include <list>
using namespace std;


class CharleighList
{
private:
    //declare structure for the list
    struct ListStructure
    {
        double value; //the value is in this node
        struct ListStructure* next; //to point to next node
    };

    ListStructure* head; //list head pointer

public:
    //constructor
    CharleighList()
    {
        head = nullptr;
    }

    //deconstuctor
    ~CharleighList()
    {
        ListStructure* traverselist; //move through the list
        ListStructure* nextNode; //to point to next node

        //position nodePtr at the head of the list
        traverselist = head;

        //while nodePtr  is not at the end of the list
        while (traverselist != nullptr)
        {
            //save a ptr to the next node
            nextNode = traverselist->next;

            //delete the currect node
            delete traverselist;

            //position nodePtr at the next mode
            traverselist = nextNode;
        }
    }

    //linked list operations
    void appendmode(double num)
    {
        ListStructure* newNode; //point to new node
        ListStructure* traverselist; //move through the list

        //allocate a new node and store num there
        newNode = new ListStructure;
        newNode->value = num;
        newNode->next = nullptr;

        //if there are no new nodes in list made newNode first Node
        if (!head)
        {
            head = newNode;
        }
        else //otherside insert newNode at the end
        {
            //intialize nodePtr to head of list
            traverselist = head;

            //find last node on the list
            while (traverselist->next)
            {
                traverselist = traverselist->next;
            }

            //insert new Node as the last node
            traverselist->next = newNode;
        }

    }
    void insertmode(double num)
    {
        ListStructure* newNode; // new node
        ListStructure* traverselist; //to traverse the list
        ListStructure* previousNode = nullptr; //previous node

        //allocate a new node and store num there
        newNode = new ListStructure;
        newNode->value = num;
        if (!head)
        {
            head = newNode;
        }
        else //otherside insert newNode
        {
            //position newNode at the head of the list
            traverselist = head;

            //initalize previousNode to nullptr
            previousNode = nullptr;

            //skip all nodes whose value is less than num
            while (traverselist != nullptr && traverselist->value < num)
            {
                previousNode = traverselist;
                traverselist = traverselist->next;
            }

            //if new code is to be the 1st on the list insert it before all other nodes
            if (previousNode == nullptr)
            {
                head = newNode;
                newNode->next = traverselist;
            }
            else //otherwise insert after the previous node
            {
                previousNode->next = newNode;
                newNode->next = traverselist;
            }
        }
    }
    void deletemode(double num)
    {
        ListStructure* traverselist; //to traverse the list
        ListStructure* previousNode = nullptr; //previous node

        //if list is empty do nothing
        if (!head)
        {
            return;
        }

        //determine if the first is the one
        if (head->value == num)
        {
            traverselist = head->next;
            delete head;
            head = traverselist;
        }
        else
        {
            //initialize nodePtr to head of list
            traverselist = head;

            //skip all nodes whose value member is not equal to num
            while (traverselist != nullptr && traverselist->value != num)
            {
                previousNode = traverselist;
                traverselist = traverselist->next;
            }

            //if nodePtr is not at the end of the list, link the previous node to the node after NodePtr, the delete nodePtr
            if (traverselist)
            {
                previousNode->next = traverselist->next;
                delete traverselist;
            }
        }
    }
    void displayList() const
    {
        ListStructure* traverselist; //to move through the list

        //position nodePtr at the head of hte list.
        traverselist = head;

        //while nodePtr points to node traverse the list
        while (traverselist)
        {
            //display the calude in this node
            cout << traverselist->value << endl;

            //move to the next node
            traverselist = traverselist->next;

        }
    };

    void reverse()
    {
        ListStructure* previousNode = nullptr;
        ListStructure* nextNode = nullptr;
        ListStructure* traverselist = head;

        while (traverselist != nullptr) {
            nextNode = traverselist->next;
            traverselist->next = previousNode;
            previousNode = traverselist;
            traverselist = nextNode;
        }
        head = previousNode;

        
    }


    void average() const
    {
        ListStructure* traverselist; //to move through the list

        //position nodePtr at the head of hte list.
        traverselist = head;

        //int for adding list together
        int add = 0;
        //int for tracking number to divide by;
        int track = 0;
        //int for average;
        double average = 0;


        //while nodePtr points to node traverse the list
        while (traverselist)
        {
            //add linkedlist value to add
            add = traverselist->value + add;
            //track
            track++;

            //move to the next node
            traverselist = traverselist->next;

        }

        average = add / track;

        cout << average;

    }

    void ascendingSort() const 
    {
        ListStructure* traverselist; //to traverse the list


        traverselist = head;

        bool isSorted = false;

        while (!isSorted) {

            isSorted = true;

            while (traverselist->next != nullptr) 
            {

                if (traverselist->next->value < traverselist->value) 
                {
                    swap(traverselist->next->value, traverselist->value);
                    isSorted = false;
                }

                traverselist = traverselist->next;
            }
            traverselist = head;
        }
    }

    void descendingSort() const
    {
             
        ListStructure* traverselist; //to traverse the list
        
        traverselist = head;

        bool isSorted = false;

        while (!isSorted) {

            isSorted = true;

            while (traverselist->next != nullptr) 
            {

                if (traverselist->next->value > traverselist->value) 
                {
                    swap(traverselist->next->value, traverselist->value);
                    isSorted = false;
                }

                traverselist = traverselist->next;
            }
            traverselist = head;
        }
    }

    void highestValue() const
    {
        ListStructure* traverselist = head; //to traverse the list
        
        int highest = head->value;


        while (traverselist->next != nullptr)
        {
            if (traverselist->value > highest)
            {
                highest = traverselist->value;
            }

            traverselist = traverselist->next;
        }

        cout << highest;
    }

    void lowestValue() const
    {
        ListStructure* traverselist = head; //to traverse the list

        int lowest = head->value;


        while (traverselist->next != nullptr)
        {
            if (traverselist->value < lowest)
            {
                lowest = traverselist->value;
            }

            traverselist = traverselist->next;
        }

        cout << lowest;
    }
};

#endif // CharleighList_H

