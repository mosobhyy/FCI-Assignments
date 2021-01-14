#include <iostream>

using namespace std;

#include "Book.h"

int main()
{
    User user1, user2;
    Book book1, book2;
    int counter = 1;
    while (counter < 3)
    {
        counter == 1 ? cout << "Let's add a user\n" : cout << "Let's add another user\n";
        cout << "Enter the user information in this order\n";
        cout << "Name Age Email Password (Space Separated)\n";
        counter == 1 ? cin >> user1 : cin >> user2;
        cout << "====== User " << counter << " info ======\n";
        counter == 1 ? cout << user1 : cout << user2;
        cout << "================================================================\n\n";
        counter++;
    }
    counter = 1;
    while (counter < 3)
    {
        counter == 1 ? cout << "Let's add a book\n" : cout << "Let's add another book\n";
        cout << "Enter the book information in this order\n";
        cout << "Title ISBN Category (Space Separated)\n";
        counter == 1 ? cin >> book1 : cin >> book2;
        cout << "====== Book " << counter << " info ======\n";
        counter == 1 ? cout << book1 : cout << book2;
        cout << "================================================================\n\n";
        counter++;
    }
    // Let's assign an author for the first book, set the first user as an author
    book1.setAuthor(user1);
    // Let's rate the first book with 3 and 4 ratings and print the book info
    book1.rateBook(3);
    book1.rateBook(4);
    cout << "====== Book 1 info ======\n";
    cout << book1;
    cout << "================================================================\n\n";
    cout << "====== User 1 info ======\n";
    cout << user1;
    cout << "================================================================\n\n";
    cout << "================================================================\n\n";
    // Let's add a new rating for book 1 with 5 and print the book info
    book1.rateBook(5);
    cout << "====== Book 1 info ======\n";
    cout << book1;
    cout << "================================================================\n\n";
    cout << "====== User 1 info ======\n";
    cout << user1;
    cout << "================================================================\n\n";
    cout << "================================================================\n\n";
    return 0;
}
