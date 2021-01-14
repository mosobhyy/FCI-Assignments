#ifndef FCI_PERSON_H
#define FCI_PERSON_H
#include "iostream"
using namespace std;

class Person
{
private:
    string name;
    int age;
public:

    void PrintDetails();

    string getName();

    void setName(string name);

    int getAge();

    void setAge(int age);

    Person();

    Person(string name, int age);

    ~Person();
};


#endif //FCI_PERSON_H
