#include "MatrixCalculator.h"
#include "Matrix.h"
#include <iostream>
using namespace std;

void MatrixCalculator::menu()
{
    int row, col;
    char options;
    char again = 'y';
    while(again=='y')
    {
        cout << "Welcome to FCAI Matrix Calculator\n";
        cout << "----------------------------------\n";
        cout << "1- Perform Matrix Addition\n";
        cout << "2- Perform Matrix Subtraction\n";
        cout << "3- Perform Matrix Multiplication\n";
        cout << "4- Matrix Transpose\n";
        while(options<'0' || options>'5')
        {
            cout << "\nEnter Choice: ";
            cin >> options;
        }
        cout << "Enter Matrix 1 size.\n";
        cout << "Enter number of Rows: ";
        cin >> row;
        cout << "Enter number of columns: ";
        cin >> col;
        Matrix<int> m1(row, col);
        cin >> m1;
        cout << "Enter Matrix 2 size.\n";
        cout << "Enter number of Rows: ";
        cin >> row;
        cout << "Enter number of columns: ";
        cin >> col;
        Matrix<int> m2(row,col);
        cin >> m2;
        if (options=='1')
        {
            if(m1.row==m2.row && m1.col!=m2.col)
            {
                Matrix<int> result(row, col);
                result = m1 + m2;
                cout << result;
            }
            else
                cout << "Matrices sizes not Compatible\n";
        }
        else if (options=='2')
        {
            if(m1.row==m2.row && m1.col!=m2.col)
            {
                Matrix<int> result(row, col);
                result = m1 - m2;
                cout << result;
            }
            else
                cout << "Matrices sizes not Compatible\n";
        }
        else if (options=='3')
        {
            if(m1.col==m2.row)
            {
                Matrix<int> result(m1.col, m2.row);
                result = m1 * m2;
                cout << result;
            }
            else
                cout << "Matrices sizes not Compatible\n";
        }
        else
        {
            if (m1.row==m1.col)
            {
                Matrix<int> result(m1.row, m1.col);
                m1.squareTranspose(result);
            }
            else
            {
                Matrix<int> result(m1.col, m1.row);
                m1.rectangularTranspose(result);
            }
        }
        cout << "Do you want another operations ?!\t(y/n)";
        cout << "\nEnter Choice: ";
        cin >> again;
        while(again!='y' && again!='n')
        {
            cout << "\nInvalid input !\n";
            cout << "\nEnter Choice: ";
            cin >> again;
        }
    }
    cout << "Thanks for using our application ^_^\n";
}

MatrixCalculator::MatrixCalculator()
{
    menu();
}
