#include "Book.h"

// initialize static variable to 0
int Book::count = 0;

void Book::rateBook(int rating)
{
    sumOfRates += rating;
    numOfRates++;
    setAverageRating(sumOfRates/numOfRates);
}

// Getters & Setters Implementation (Encapsulation Concept)

const string &Book::getTitle() const
{
    return title;
}

void Book::setTitle(const string &title)
{
    Book::title = title;
}

const string &Book::getIsbn() const
{
    return isbn;
}

void Book::setIsbn(const string &isbn)
{
    Book::isbn = isbn;
}

const string &Book::getCategory() const
{
    return category;
}

void Book::setCategory(const string &category)
{
    Book::category = category;
}

int Book::getId() const
{
    return id;
}

void Book::setId(int id)
{
    Book::id = id;
}

double Book::getAverageRating() const
{
    return averageRating;
}

void Book::setAverageRating(double averageRating)
{
    Book::averageRating = averageRating;
}

const User &Book::getAuthor() const
{
    return author;
}

void Book::setAuthor(const User &author)
{
    Book::author = author;
}

// Default Constructor Implementation

Book::Book()
{
    title = isbn = category = "";
    numOfRates = sumOfRates = averageRating = 0;
    id = ++count;
}

// Parametrize Constructor Implementation

Book::Book(const string &title, const string &isbn, const string &category)
{
    this->title = title;
    this->isbn = isbn;
    this->category = category;
    numOfRates = sumOfRates = averageRating = 0;
    id = ++count;
}

// Operator Overloading (Polymorphism Concept)

ostream &operator<<(ostream &output, const Book &book)
{
    output << "Title: " << book.getTitle() << "   |   ISBN: " << book.getIsbn()
           << "   |   Category: " << book.getCategory()
           << "   |   Avg Rating: " << book.getAverageRating() << endl;
    return output;
}

istream &operator>>(istream &input, Book &book)
{
    input >> book.title >> book.isbn >> book.category;
    return input;
}

bool Book::operator==(const Book &book) const
{
    return (this->getTitle() == book.getTitle() && this->getIsbn() == book.getIsbn()
            && this->getCategory() == book.getCategory() && this->getId() == book.getId()
            && this->getAuthor() == book.getAuthor());
}