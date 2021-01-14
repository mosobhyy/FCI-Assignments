//
// Created by Muhmd on 4/21/2020.
//

#include "SingleList.h"
#include "Student.h"

using namespace std;

bool SingleList::isEmpty()
{
    return length == 0;
}

void SingleList::push_front(Student &obj)
{
    obj.setNext(head);
    head = &obj;
}

void SingleList::push_back(Student &obj)
{
    obj.setNext(nullptr);
    rear->setNext(&obj);
    rear = &obj;
}

void SingleList::insert(Student &obj)
{
    if (isEmpty())
    {
        head = rear = &obj;
        head->setNext(nullptr);
    }

    else if (obj.getId() < head->getId())
        push_front(obj);

    else if (obj.getId() > rear->getId())
        push_back(obj);

    else
    {
        Student *temp = head->getNext();

        while (obj.getId() > temp->getNext()->getId())
        {
            temp = temp->getNext();
        }

        obj.setNext(temp->getNext());
        temp->setNext(&obj);
    }
    length++;
    cout << "\nElement Added Successfully\n";
}

void SingleList::eraseFront()
{
    Student *temp = head;
    head = head->getNext();
    length--;
    delete temp;
    cout << "\nElement Deleted Successfully\n";
}

void SingleList::eraseBack()
{
    Student *temp = rear;
    Student *ptr = head;

    for(size_t i=1 ; i<length-1 ; i++)
        ptr = ptr->getNext();

    ptr->setNext(nullptr);
    rear = ptr;
    delete temp;
    length--;
    cout << "\nElement Deleted Successfully\n";
}

void SingleList::erase(int id)
{
    Student *result = searchForErase(id);
    if (result->getName() == "NULL")
        cout << "\nNo Information For This Student To Delete...!\n\n";

    else if(result==head)
        eraseFront();

    else if(result==rear)
        eraseBack();

    else
    {
        Student *temp = head;
        while(temp->getNext()->getId() != result->getId())
            temp = temp->getNext();
        temp->setNext(result->getNext());
        length--;
        cout << "\nElement Deleted Successfully\n";
    }
}

Student *SingleList::searchForErase(int id)
{
    Student *student = new Student;
    Student *temp = head;
    if (temp->getId() == id)
        return temp;
    while (temp->getNext() != nullptr)
    {
        if (temp->getNext()->getId() == id)
            return temp->getNext();
        temp = temp->getNext();
    }
    return student;
}

void SingleList::search(int id)
{
    Student *temp = head;
    while (temp != nullptr)
    {
        if (temp->getId() == id)
            break;
        temp = temp->getNext();
    }
    if(temp == nullptr)
        cout << "No Information For This Student...!\n";
    else
        temp->print();
}

void SingleList::print()
{
    Student *temp = head;
    while (temp != nullptr)
    {
        temp->print();
        temp = temp->getNext();
    }
}

SingleList::SingleList()
{
    head = rear = nullptr;
    length = 0;
}
