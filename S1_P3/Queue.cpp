//
// Created by Muhmd on 4/19/2020.
//

#include "Queue.h"
#include <iostream>
using namespace std;

template <class type>
bool Queue<type>::isEmpty()
{
    return length == 0;
}

template<class type>
int Queue<type>::size()
{
    return length;
}

template<class type>
type &Queue<type>::front()
{
    return Front->data;
}

template<class type>
void Queue<type>::push(type value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->next = NULL;
    if(isEmpty())
        Front = rear = newNode;
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
    length++;
}

template<class type>
void Queue<type>::pop()
{
    if(isEmpty())
        cout << "Queue Is Empty...!\n";
    else
    {
        node *temp = Front;
        Front = Front->next;
        delete temp;
        length--;
    }
}

template<class type>
void Queue<type>::print()
{
    node *temp = Front;
    cout << "Queue Elements...\n";
    while (temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

template<class type>
Queue<type>::Queue()
{
    Front = rear = NULL;
    length = 0;
}

template<class type>
Queue<type>::Queue(type value, int size)
{
    Front = rear = NULL;
    length = 0;
    for(size_t i=0 ; i<size ; i++)
        this->push(value);
}

template<class type>
Queue<type>::~Queue()
{
    while (Front!=NULL)
    {
        node *temp = Front;
        Front = Front->next;
        delete temp;
    }
}
