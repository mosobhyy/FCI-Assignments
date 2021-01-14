#include <iostream>
#include "Stack.cpp"

int main()
{
    Stack<int> s(10, 1);
    s.push(20);
    s.push(30);
    s.pop();
    cout << s.size() << endl;
    cout << s.top() << endl;
    s.print();
    return 0;
}
