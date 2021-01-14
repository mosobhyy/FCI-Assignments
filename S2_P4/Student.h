//
// Created by Muhmd on 4/21/2020.
//

#ifndef S2_P4_STUDENT_H
#define S2_P4_STUDENT_H

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int ID;
    double GPA;
    Student *next;
public:
    Student *getNext() const;

    void setNext(Student *next);

public:
    string getName() const;

    void setName(string name);

    int getId() const;

    void setId(int id);

    double getGpa() const;

    void setGpa(double gpa);

    void print();

    Student();

    Student(string name, int id, double gpa);
};


#endif //S2_P4_STUDENT_H
