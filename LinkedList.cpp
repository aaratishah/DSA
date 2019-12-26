#include <iostream>
#include "linkedList.h"
using namespace std;

LinkedList::LinkedList()
{
    HEAD = NULL;
    TAIL = NULL;
}

LinkedList::~LinkedList() {}

bool LinkedList::isEmpty()
{
    return (HEAD == NULL);
}


void LinkedList::addToHead(int data)
{
    Node *newNode = new Node();
    newNode->info = data;
    newNode->next = HEAD;
    HEAD = newNode;
    if (TAIL == NULL)
    {
        TAIL = HEAD;
    }
}

void LinkedList::addToTail(int data)
{
    Node *newNode = new Node();
    newNode->info = data;
    newNode->next = NULL;
    TAIL->next = newNode;
    TAIL = newNode;
}

void LinkedList::add(int data, Node *pre)
{
    Node *node = new Node();
    node->info = data;
    node->next = pre->next;
    pre->next = node;
}

void LinkedList ::removeFromHead()
{
    Node *nodeToDelete = new Node();
    nodeToDelete = HEAD;
    HEAD = nodeToDelete->next;
    delete nodeToDelete;
}

void LinkedList::remove(int data)
{
    if (isEmpty())
    {
        std::cout << "List was empty";
    }
    else
    {
        if (HEAD->info == data)
        {
            removeFromHead();
            if (HEAD == NULL)
                TAIL == NULL;
        }
        else
        {
            Node *temp = this->HEAD->next;
            Node *prev = this->HEAD;

            while (temp != NULL)
            {
                if (temp->info == data)
                {
    
                    prev->next = temp->next;
                    delete temp;
                    if (prev->next == NULL)
                        TAIL = prev;
                }
                else
                {
                    prev = prev->next;
                    temp = temp->next;
                }
            }
        }
    }
}

Node *LinkedList::retrieve(int data, Node *opPtr)
{

    if (isEmpty())
    {
        cout << "List was empty";
        return 0;
    }
    else
    {
        
        if (HEAD->info == data)
        {
            *opPtr = *this->HEAD;
            return opPtr;
        }
        else
        {
            Node *temp = this->HEAD->next;
            while (temp != NULL)
            {
                if (temp->info == data)
                {
                    *opPtr = *temp;
                    return opPtr;
                }
                else
                {
                    temp = temp->next;
                }
            }
            opPtr->info = -1;
            return opPtr;
        }
    }
}


bool LinkedList::search(int data)
{
    
    if (isEmpty())
    {
        cout << "List was empty";
        return 0;
    }
    else
    {

        if (HEAD->info == data)
        {
            return true;
        }
        else
        {
            Node *temp = HEAD->next;
            while (temp != NULL)
            {
                if (temp->info == data)
                {
                    return true;
                }
                else
                {
                    temp = temp->next;
                }
            }
            return false;
        }
    }
}

void LinkedList::traverse()
{
    
    if (isEmpty())
    {
        cout << "List was empty";
    }
    else
    {
        Node *temp = HEAD;
        while (temp != NULL)
        {
            cout << temp->info << std::endl;
            temp = temp->next;
        }
        cout << endl;
    }
}

int main() {

    LinkedList a;
    cout << a.isEmpty() << endl;
    a.addToHead(8);
    a.addToHead(4);
    a.addToTail(5);
    cout << a.isEmpty() << endl;
    cout << a.search(2) << endl;
    cout << a.search(8) << endl;
    a.removeFromHead();
    cout << "linkedlist\n";
    a.traverse();

}
