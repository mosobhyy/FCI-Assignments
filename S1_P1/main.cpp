#include <iostream>
#include "List.cpp"
using namespace std;

int main()
{
    try
    {
        List<int> l, m;
        l.push_back(10);
        l.push_back(20);
        l.push_back(30);
        m.push_back(100);
        m.push_back(200);
        m.push_back(300);
        l = m;
        List<int>::iterator it = l.begin();
        it++;
        l.erase(it);
        cout << *it << endl;
        l.print();
        m.print();
    }
    catch (const char* e)
    {
        cout << e;
    }
    return 0;
}