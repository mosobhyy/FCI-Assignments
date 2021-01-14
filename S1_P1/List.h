//
// Created by Muhmd on 4/17/2020.
//

#ifndef S1_P1_LIST_H
#define S1_P1_LIST_H

#include <iostream>
using namespace std;

template<class type>
class List
{
public:

    /*      Inner Classes      */

    class node
    {
    public:
        type data;
        node *next, *previous;
        node();
    };

    class iterator
    {
        friend class List;
    private:
        node *it;
    public:
        void operator ++(int);

        void operator --(int);

        type &operator *();

        bool operator==(const iterator obj);

        iterator();

        iterator(node *obj);
    };

private:

    /*      Attributes      */

    node *front, *rear, *dummy;
    int length = 0;

    /*      Private Methods      */

    void push_front(type value);

    void erase_back();

    void erase_front();

public:

    /*      Public methods      */

    bool isEmpty();

    int size();

    void push_back(type value);

    void insert(type value, iterator &position);

    void erase(iterator &position);

    iterator begin()
    {
        return iterator(front);
    }

    iterator end()
    {
        return iterator(dummy);
    }

    void print();

    List<type>& operator = (List<type> &another_list);

    /*      Constructors      */

    List();

    List(type value, int size);

    /*      Destructor      */

    ~List();
};



#endif //S1_P1_LIST_H