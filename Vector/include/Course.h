#ifndef COURSE_H
#define COURSE_H
#include<string>
using namespace std;

class Course
{
public:

    // Attributes

    string courseName, courseCode;
    char courseGrade;
    float coursePoint;
    int courseSemester, courseYear;

    // Functions

    void printCourseInfo();
    Course(string courseName, string courseCode, char courseGrade, float coursePoint, int courseSemester, int courseYear);
    Course();
};

#endif // COURSE_H
