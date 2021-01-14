#include "FCIIdentity.h"

// Getters & Setters Implementation

string FCIIdentity::getId()
{
    return ID;
}

void FCIIdentity::setId(string id)
{
    ID = id;
}

string FCIIdentity::getFciMail()
{
    return fciMail;
}

void FCIIdentity::setFciMail(string fciMail)
{
    FCIIdentity::fciMail = fciMail;
}

// Default Constructor Implementation

FCIIdentity::FCIIdentity()
{
    setId("");
    setFciMail("");
}

// Parametrized Constructor Implementation

FCIIdentity::FCIIdentity(string id, string fciMail)
{
    setId(id);
    setFciMail(fciMail);
}