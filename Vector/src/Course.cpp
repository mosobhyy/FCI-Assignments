#include "Course.h"
#include <iostream>
using namespace std;

void Course::printCourseInfo()
{
    cout << "Course Name: " << courseName << "      ";
    cout << "Course Code: " << courseCode << "      ";
    cout << "Course Grade: " << courseGrade << "\n";
    cout << "Course Point: " << coursePoint << "      ";
    cout << "Course Semester: " << courseSemester<< "      ";
    cout << "Course Year: " << courseYear << "\n";
}

Course::Course(string courseName, string courseCode, char courseGrade, float coursePoint, int courseSemester, int courseYear)
{
    this->courseName = courseName;
    this->courseCode = courseCode;
    this->courseGrade = courseGrade;
    this->coursePoint = coursePoint;
    this->courseSemester = courseSemester;
    this->courseYear = courseYear;
}

Course::Course()
{
    courseName = "Null";
    courseCode = "Null";
    courseGrade = '0';
    coursePoint = 0.0;
    courseSemester = 0;
    courseYear = 0;
}
