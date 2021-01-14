#include "Person.h"

void Person::PrintDetails()
{
    cout << "Name: " << getName() << "\tAge: " << getAge() << endl;
}

string Person::getName()
{
    return name;
}

void Person::setName(string name)
{
    Person::name = name;
}

int Person::getAge()
{
    return age;
}

void Person::setAge(int age)
{
    Person::age = age;
}

Person::Person()
{
    name = "";
    age = 0;
}

Person::Person(string name, int age)
{
    this->name = name;
    this->age = age;
}

Person::~Person()
{

}
