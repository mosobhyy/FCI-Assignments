#include <iostream>
using namespace std;

#include "FCIStudent.h"
#include "FCICourse.h"

int main()
{
    FCIStudent student1("Mohamed", 20);
    FCIStudent student2("Ahmed", 21);
    FCIStudent student3("Ali", 22);
    FCIIdentity identity1("1", "mohamed@yahoo.com");
    FCIIdentity identity2("2", "ahmed@yahoo.com");
    FCIIdentity identity3("3", "ali@yahoo.com");
    student1.setFciId(identity1);
    student2.setFciId(identity2);
    student3.setFciId(identity3);
    FCICourse course("cs", 10);
    course.addStudent(&student1);
    course.addStudent(&student2);
    course.addStudent(&student3);
    course.printAllStudentsEnrolled();
    return 0;
}
