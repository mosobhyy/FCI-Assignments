#include <iostream>
#include <StudentName.h>

using namespace std;

int main()
{
    string name = "ahmed Mohamed sayed";
    StudentName obj(name);
    obj.replace(1,4);
    cout << "--------------------------------------\n";
    obj.setName("sara ahmed");
    obj.replace(2,1);
    cout << "--------------------------------------\n";
    obj.setName("Hassan Ali Ahmed");
    obj.replace(2,3);
    cout << "--------------------------------------\n";
    obj.setName("Essam");
    obj.replace(1,3);
    cout << "--------------------------------------\n";
    obj.setName("Kamel");
    obj.replace(1,4);
    cout << "--------------------------------------\n";
    obj.setName("Sherif Mohamed");
    obj.replace(3,1);
    cout << "--------------------------------------\n";
    obj.setName("Osame Ahmed");
    obj.replace(3,1);
    cout << "--------------------------------------\n";
    obj.setName("Osame Ahmed");
    obj.replace(4,1);
    return 0;
}
