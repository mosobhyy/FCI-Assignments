#ifndef ONLINE_LIBRARY_SYSTEM_USER_H
#define ONLINE_LIBRARY_SYSTEM_USER_H
#include "iostream"
using namespace std;

class User
{
    // Private Attributes (Encapsulation Concept)
private:
    string name, password, email;
    int age;
    int id;
    static int count;

public:

    // Getters & Setters (Encapsulation Concept)

    const string &getName() const;

    void setName(const string &name);

    const string &getPassword() const;

    void setPassword(const string &password);

    const string &getEmail() const;

    void setEmail(const string &email);

    int getAge() const;

    void setAge(int age);

    int getId() const;

    void setId(int id);

    // Default Constructor

    User();

    // Parametrize Constructor

    User(string name, int age, string email, string password);

    // Copy Constructor

    User(User&user);

    // Operator Overloading (Polymorphism Concept)

    bool operator==(const User &user) const;

    friend ostream &operator<<(ostream &output, const User &user);

    friend istream &operator>>(istream &input, User &user);
};


#endif //ONLINE_LIBRARY_SYSTEM_USER_H
