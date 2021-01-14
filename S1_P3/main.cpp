#include <iostream>
#include "Queue.cpp"

int main()
{
    Queue<int> q(10, 1);
    q.push(20);
    q.push(30);
    q.pop();
    cout << q.size() << endl;
    q.print();
    return 0;
}
