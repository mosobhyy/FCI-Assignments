#ifndef FCI_FCISTUDENT_H
#define FCI_FCISTUDENT_H

#include "Person.h"
#include "FCIIdentity.h"

// Inherit From Person
class FCIStudent : public Person
{
    // Private Attributes
private:
    FCIIdentity fciId;

public:

    // Public Methods

    // Overloading
    void printDetails();

    FCIIdentity getFciId() const;

    void setFciId(FCIIdentity fciId);

    FCIStudent();

    FCIStudent(string name, int age);

    ~FCIStudent();

};


#endif //FCI_FCISTUDENT_H
