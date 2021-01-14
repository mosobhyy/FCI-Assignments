#ifndef STUDENT_H
#define STUDENT_H
#include <FciVector.h>
#include <Course.h>
#include<string>
using namespace std;

class Student
{
public:

    // Attributes

    int sID;
    string sName, sDepartment;
    FciVector<Course> courseVec;

    // Functions

    void printInfo();
    Student(string sName, int sID, string sDepartment);
    Student();
};

#endif // STUDENT_H
