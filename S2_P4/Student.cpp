//
// Created by Muhmd on 4/21/2020.
//

#include <iostream>
#include "Student.h"
using namespace std;

string Student::getName() const
{
    return name;
}

void Student::setName(string name)
{
    Student::name = name;
}

int Student::getId() const
{
    return ID;
}

void Student::setId(int id)
{
    ID = id;
}

double Student::getGpa() const
{
    return GPA;
}

void Student::setGpa(double gpa)
{
    GPA = gpa;
}

Student *Student::getNext() const
{
    return next;
}

void Student::setNext(Student *next)
{
    Student::next = next;
}

void Student::print()
{
    if(getName() == "NULL")
        cout << "\nNo Information For This Student...!\n";
    else
    {
        cout << "\nStudent information...\n";
        cout << "------------------------\n";
        cout << "Student Name: " << getName() << endl;
        cout << "Student ID: " << getId() << endl;
        cout << "Student GPA: " << getGpa() << endl;
        cout << "------------------------\n";
        cout << "\n\n";
    }
}

Student::Student()
{
    setName("NULL");
    setId(-1);
    setGpa(-1);
}

Student::Student(string name, int id, double gpa) : name(name), ID(id), GPA(gpa), next(nullptr)
{}

