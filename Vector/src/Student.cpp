#include "Student.h"
#include <iostream>
using namespace std;

void Student::printInfo()
{
    cout << "\nStudent Name: " << sName << endl;
    cout << "Student ID: " << sID << endl;
    cout << "Student Department: " << sDepartment << endl;
    for (int i = 0 ; i < courseVec.size() ; i++)
    {
        cout << "\nCourse " << i+1 << endl;
        cout << "--------\n";
        courseVec[i].printCourseInfo();
    }
}

Student::Student(string sName, int sID, string sDepartment)
{
    this->sName = sName;
    this->sID = sID;
    this->sDepartment = sDepartment;
}

Student::Student()
{
    sName = "Null";
    sID = 0;
    sDepartment = "Null";
}
