//
// Created by Muhmd on 4/18/2020.
//

#include "List.h"

using namespace std;

template<class type>
List<type>::node::node()
{
    data = NULL;
    next = previous = NULL;
}

template<class type>
List<type>::iterator::iterator()
{
    it = NULL;
}

template<class type>
List<type>::iterator::iterator(List::node *obj)
{
    it = obj;
}

/*      Private Methods      */

template<class type>
void List<type>::push_front(type value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->previous = NULL;
    if (isEmpty())
    {
        newNode->next = dummy;
        dummy->previous = newNode;
        front = rear = newNode;
    }
    else
    {
        newNode->next = front;
        front->previous = newNode;
        front = newNode;
    }
    length++;
}

template<class type>
void List<type>::erase_back()
{
    if (isEmpty())
        cout << "List Is Empty...!\n";
    else if (front == rear)
    {
        dummy->previous = NULL;
        delete front;
        front = rear = dummy;
        length--;
    }
    else
    {
        node *temp = rear;
        rear = rear->previous;
        dummy->previous = rear;
        rear->next = dummy;
        delete temp;
        length--;
    }
}

template<class type>
void List<type>::erase_front()
{
    if (isEmpty())
        cout << "List Is Empty...!\n";
    else if (front == rear)
    {
        dummy->previous = NULL;
        delete front;
        front = rear = dummy;
        length--;
    }
    else
    {
        node *temp = front;
        front = front->next;
        front->previous = NULL;
        delete temp;
        length--;
    }
}

/*      Public methods      */

template<class type>
bool List<type>::isEmpty()
{
    return length == 0;
}

template<class type>
int List<type>::size()
{
    return length;
}

template<class type>
void List<type>::push_back(type value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->next = dummy;
    if (isEmpty())
    {
        newNode->previous = NULL;
        dummy->previous = newNode;
        front = rear = newNode;
    }
    else
    {
        newNode->previous = rear;
        dummy->previous = newNode;
        rear->next = newNode;
        rear = newNode;
    }
    length++;
}

template<class type>
void List<type>::insert(type value, List::iterator &position)
{
    if (position == begin())
    {
        push_front(value);
        position--;
    }
    else if (position == end())
        push_back(value);
    else
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->next = position.it;
        newNode->previous = position.it->previous;
        position.it->previous->next = newNode;
        position.it->previous = newNode;
        position--;
        length++;
    }
}

template<class type>
void List<type>::erase(List::iterator &position)
{
    if (position == begin())
    {
        position++;
        erase_front();
    }
    else if (position == end())
        erase_back();
    else
    {
        node *temp = position.it;
        position++;
        position.it->previous = temp->previous;
        temp->previous->next = position.it;
        delete temp;
        length--;
    }
}

template<class type>
void List<type>::print()
{
    if (isEmpty())
        cout << "List Is Empty...!\n";
    else
    {
        iterator ptr = begin();
        cout << "List Of Elements...\n";
        while (!(ptr == end()))
        {
            cout << *ptr << " ";
            ptr++;
        }
        cout << endl;
    }
}

template<class type>
List<type> &List<type>::operator=(List<type> &another_list)
{
    this->~List<type>();
    iterator ptr = another_list.begin();
    while (!(ptr == another_list.end()))
    {
        this->push_back(*ptr);
        ptr++;
    }
    return *this;
}

/*      Constructors      */

template<class type>
List<type>::List()
{
    front = rear = dummy = new node;
    length = 0;
}

template<class type>
List<type>::List(type value, int size)
{
    front = rear = dummy = new node;
    length = 0;
    for (size_t i = 0; i < size; i++)
        push_back(value);
}

/*      Destructor      */

template<class type>
List<type>::~List()
{
    while (front != dummy)
    {
        node *temp = front;
        front = front->next;
        delete temp;
    }
    front = rear = dummy;
    length = 0;
}

template<class type>
void List<type>::iterator::operator++(int)
{
    if (it->data == NULL)
        throw "Out Of Range Exception...!\n";
    it = it->next;
}

template<class type>
void List<type>::iterator::operator--(int)
{
    if (it->previous == NULL)
        throw "Out Of Range Exception...!\n";
    it = it->previous;
}

template<class type>
type &List<type>::iterator::operator*()
{
    return it->data;
}

template<class type>
bool List<type>::iterator::operator==(const List::iterator obj)
{
    return it == obj.it;
}