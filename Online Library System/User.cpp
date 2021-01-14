#include "User.h"

// initialize static variable to 0

int User::count = 0;

// Getters & Setters Implementation (Encapsulation Concept)

const string &User::getName() const
{
    return name;
}

void User::setName(const string &name)
{
    User::name = name;
}

const string &User::getPassword() const
{
    return password;
}

void User::setPassword(const string &password)
{
    User::password = password;
}

const string &User::getEmail() const
{
    return email;
}

void User::setEmail(const string &email)
{
    User::email = email;
}

int User::getAge() const
{
    return age;
}

void User::setAge(int age)
{
    User::age = age;
}

int User::getId() const
{
    return id;
}

void User::setId(int id)
{
    User::id = id;
}

// Default Constructor Implementation

User::User()
{
    name = password = email = "";
    age = 0;
    id = ++count;
}

// Parametrize Constructor Implementation

User::User(string name, int age, string email, string password)
{
    this->name = name;
    this->age = age;
    this->email = email;
    this->password = password;
    id = ++count;
}

// Copy Constructor Implementation

User::User(User &user)
{
    this->name = user.name;
    this->age = user.age;
    this->email = user.email;
    this->id = user.id;
    this->password = user.password;
}

// Operator Overloading (Polymorphism Concept)

ostream &operator<<(ostream &output, const User &user)
{
    output << "Name: " << user.getName() << "   |   Age: " << user.getAge()
           << "   |   id: " << user.getId() << "   |   Email: " << user.getEmail() << endl;
    return output;
}

istream &operator>>(istream &input, User &user)
{
    input >> user.name >> user.age >> user.email >> user.password;
    return input;
}

bool User::operator==(const User &user) const
{
    return (this->getName() == user.getName() && this->getAge() == user.getAge()
            && this->getEmail() == user.getEmail() && this->getId() == user.getId());
}
