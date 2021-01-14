#ifndef ONLINE_LIBRARY_SYSTEM_BOOK_H
#define ONLINE_LIBRARY_SYSTEM_BOOK_H
using namespace std;
#include "User.h"

class Book
{
    // Private Attributes (Encapsulation Concept)
private:
    string title, isbn, category;
    int id;
    // numOfRates & sumOfRates to calculate averageRating in rateBook Function
    double numOfRates, sumOfRates, averageRating;
    User author;
    static int count;

public:

    void rateBook(int rating);

    // Getters & Setters (Encapsulation Concept)

    const string &getTitle() const;

    void setTitle(const string &title);

    const string &getIsbn() const;

    void setIsbn(const string &isbn);

    const string &getCategory() const;

    void setCategory(const string &category);

    int getId() const;

    void setId(int id);

    double getAverageRating() const;

    void setAverageRating(double averageRating);

    const User &getAuthor() const;

    void setAuthor(const User &author);

    // Default Constructor

    Book();

    // Parametrize Constructor

    Book(const string &title, const string &isbn, const string &category);

    // Operator Overloading (Polymorphism Concept)

    bool operator==(const Book &book) const;

    friend ostream &operator<<(ostream &output, const Book &book);

    friend istream &operator>>(istream &input, Book &book);
};


#endif //ONLINE_LIBRARY_SYSTEM_BOOK_H