#ifndef STUDENTNAME_H
#define STUDENTNAME_H
#include<string>
using namespace std;

class StudentName
{
private:

    // Attributes

    string name;

public:

    // Methods

    void print();
    void replace(int i, int j);
    // Setters & Getters (Encapsulation Concept)

    string getName();
    void setName(string name);

    // Constructor

    StudentName(string name);
    ~StudentName();

};

#endif // STUDENTNAME_H
