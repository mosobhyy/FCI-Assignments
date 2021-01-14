//
// Created by Muhmd on 4/21/2020.
//

#ifndef S2_P4_SINGLELIST_H
#define S2_P4_SINGLELIST_H

#include "Student.h"

class SingleList
{
private:
    Student *head, *rear;
    int length;

    bool isEmpty();

    void push_front(Student &obj);

    void push_back(Student &obj);

    void eraseFront();

    void eraseBack();

    Student* searchForErase(int id);

public:

    void insert(Student &obj);

    void erase(int id);

    void search(int id);

    void print();

    SingleList();

};


#endif //S2_P4_SINGLELIST_H
