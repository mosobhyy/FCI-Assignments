#include "Matrix.h"
#include <iostream>
using namespace std;

// Methods

template <class T>

void Matrix<T>::squareTranspose(Matrix<T> &obj)
{
    for (int i=0 ; i<row ; i++)
        for (int j=0 ; j<col ; j++)
            obj.matrix[i][j] = matrix[j][i];
    cout << obj;
}

template <class T>

void Matrix<T>::rectangularTranspose(Matrix<T> &obj)
{
    for (int i=0 ; i<col ; i++)
        for (int j=0 ; j<row ; j++)
            obj.matrix[i][j] = matrix[j][i];
    cout << obj;
}

// Overriding Methods Implementation

template <class T>

Matrix<T> Matrix<T>::operator*(Matrix const &obj)
{
    Matrix<T> result(col, col);
    for (int i=0 ; i<row ; i++)
    {
        for (int j=0 ; j<obj.col ; j++)
        {
            for (int k=0 ; k<col ; k++)
            {
                result.matrix[i][j] += matrix[i][k] * obj.matrix[k][j];
            }
        }
    }
    return result;
}

template <class T>

Matrix<T> Matrix<T>::operator+(Matrix const &obj)
{
    Matrix<T> result(row,col);
    for (int i=0 ; i<row ; i++)
        for (int j=0 ; j<col ; j++)
            result.matrix[i][j] = matrix[i][j] + obj.matrix[i][j];
    return result;
}

template <class T>

Matrix<T> Matrix<T>::operator-(Matrix const &obj)
{
    Matrix<T> result(row,col);
    for (int i=0 ; i<row ; i++)
        for (int j=0 ; j<col ; j++)
            result.matrix[i][j] = matrix[i][j] - obj.matrix[i][j];
    return result;
}

// Constructor Implementation

template <class T>

Matrix<T>::Matrix(int row, int col)
{
    this -> row = row;
    this -> col = col;
    matrix = new T*[col];

    for (int i=0 ; i<row ; i++)
        matrix[i] = new T[row];

    for (int i=0 ; i<row ; i++)
        for (int j=0 ; j<col ; j++)
            matrix[i][j] = 0;
}

template <class T>

Matrix<T>::~Matrix()
{
    /* https://stackoverflow.com/a/48670
       https://stackoverflow.com/a/30720628 */
    for (int i=0 ; i<col ; i++)
        delete [] matrix[i];
    delete [] matrix;
}

template class Matrix <int>;
template class Matrix <double>;
