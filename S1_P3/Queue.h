//
// Created by Muhmd on 4/19/2020.
//

#ifndef S1_P3_QUEUE_H
#define S1_P3_QUEUE_H

template <class type>
class Queue
{
private:
    /*      Private Attributes      */

    struct node
    {
        type data;
        node *next;
    };
    node *Front, *rear;
    int length;

public:

    /*      Methods     */

    bool isEmpty();

    int size();

    type &front();

    void push(type value);

    void pop();

    void print();

    /*      Constructors        */

    Queue();

    Queue(type value, int size);

    /*      Destructor        */

    ~Queue();
};


#endif //S1_P3_QUEUE_H
