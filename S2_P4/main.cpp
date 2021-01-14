#include <iostream>
using namespace std;
#include "Student.h"
#include "SingleList.h"

int main()
{
    Student s1("Mohamed", 40, 3.1);
    Student s2("Ali", 20, 3.2);
    Student s3("Mahmoud", 10, 3.2);
    Student s4("Mohamed", 30, 3.1);
    Student s5("Ali", 50, 3.2);
    Student s6("Ali", 60, 3.2);
    SingleList l;
    l.insert(s1);
    l.insert(s2);
    l.insert(s3);
    l.insert(s4);
    l.insert(s5);
    l.erase(100);
    l.erase(10);
    l.erase(30);
    l.erase(50);
    l.insert(s6);
    l.print();
    l.search(100);
    l.search(20);
    return 0;
}
