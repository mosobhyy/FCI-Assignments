//
// Created by Muhmd on 4/19/2020.
//

#ifndef S1_P2_STACK_H
#define S1_P2_STACK_H
using namespace std;

template<class type>
class Stack
{
private:

    /*      Private Attributes     */

    struct node
    {
        type data;
        node *next;
    };
    node *Top;
    int length;

    /*      Private Methods     */

    bool isEmpty();

public:

    /*      Methods     */

    int size();

    type &top();

    void push(type value);

    void pop();

    void print();

    /*      Constructors     */

    Stack();

    Stack(type value, int size);

    /*      Destructor     */

    ~Stack();

};

#endif //S1_P2_STACK_H
