#ifndef FCI_FCIIDENTITY_H
#define FCI_FCIIDENTITY_H
#include "iostream"
using namespace std;

class FCIIdentity
{
    // Private Attributes
private:
    string ID, fciMail;

public:

    // Getters & Setters

    string getId();

    void setId(string id);

    string getFciMail();

    void setFciMail(string fciMail);

    // Default Constructor

    FCIIdentity();

    // Parametrized Constructor

    FCIIdentity(string id, string fciMail);

};


#endif //FCI_FCIIDENTITY_H
