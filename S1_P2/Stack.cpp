//
// Created by Muhmd on 4/19/2020.
//

#include "Stack.h"
#include <iostream>

/*      Private Methods     */

template<class type>
bool Stack<type>::isEmpty()
{
    return length == 0;
}

/*      Methods     */

template<class type>
int Stack<type>::size()
{
    return length;
}

template<class type>
type &Stack<type>::top()
{
    return Top->data;
}

template<class type>
void Stack<type>::push(type value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->next = Top;
    Top = newNode;
    length++;
}

template<class type>
void Stack<type>::pop()
{
    if(isEmpty())
        cout << "Stack Is Empty...!\n";
    else
    {
        node *temp = Top;
        Top = Top->next;
        delete temp;
        length--;
    }
}

template<class type>
void Stack<type>::print()
{
    if(isEmpty())
        cout << "Stack Is Empty...!\n";
    else
    {
        node *temp = Top;
        cout << "Stack Elements...\n";
        for(size_t i=0 ; i<size() ; i++)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

/*      Constructors     */

template<class type>
Stack<type>::Stack()
{
    Top = Top->next = NULL;
    length = 0;
}

template<class type>
Stack<type>::Stack(type value, int size)
{
    Top = Top->next = NULL;
    length = 0;
    for(size_t i=0 ; i<size ; i++)
        this->push(value);
}

/*      Destructor     */

template<class type>
Stack<type>::~Stack()
{
    while (Top!=NULL)
    {
        node *temp = Top;
        Top = Top->next;
        delete temp;
    }
}