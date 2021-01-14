#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
using namespace std;

template <class T>

class Matrix
{
public:

    // Attributes

    int row, col;
    T **matrix;

    // Methods

    void squareTranspose(Matrix<T> &obj);
    void rectangularTranspose(Matrix<T> &obj);

    // Overriding Methods Implementation

    Matrix<T> operator+(Matrix const &obj);
    Matrix<T> operator-(Matrix const &obj);
    Matrix<T> operator*(Matrix const &obj);
    template <class U>
    friend ostream& operator <<(ostream& out, const Matrix<T> &obj);
    template <class U>
    friend istream& operator >>(istream& in, Matrix<T> &obj);

    // Constructors

    Matrix(int row, int col);

    // Destructor

    ~Matrix();
};

template <class T>

ostream& operator <<(ostream& out, const Matrix<T> &obj)
{
    cout << "Matrix of size " << obj.row << "*" << obj.col << " Elements: \n";
    for (int i=0 ; i<obj.row ; i++)
    {
        for (int j=0 ; j<obj.col ; j++)
            out << obj.matrix[i][j] << "\t";
        out << endl;
    }
    return out;
}

template <class T>

istream& operator >>(istream& in, Matrix<T> &obj)
{
    cout << "\nEnter Matrix elements.\n";
    for (int i=0 ; i<obj.row ; i++)
        for (int j=0 ; j<obj.col ; j++)
        {
            cout << "\nEnter Element: ";
            in >> obj.matrix[i][j];
        }
    return in;
}

#endif // MATRIX_H
