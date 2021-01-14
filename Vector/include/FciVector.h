#ifndef FCIVECTOR_H
#define FCIVECTOR_H
#include <iostream>
using namespace std;
template<class T>

class FciVector
{

private:

    // Attributes

    T* arr;
    int numberOfElements, capacity;

public:

    // Functions

    int size()
    {
        return numberOfElements;
    }

    int Capacity()
    {
        return capacity;
    }

    bool empty()
    {
        if (numberOfElements == 0)
            return true;
        else
            return false;
    }

    T operator[](int index)
    {
        if (index > numberOfElements)
            cout << "This index is Out of boundary !" << endl;
        return arr[index];
    }

    T* begin()
    {
        return &arr[0];
    }

    T front()
    {
        return arr[0];
    }

    T back()
    {
        return arr[numberOfElements - 1];
    }

    void insert(T* position, T value)
    {
        for (int i = 0 ; i < numberOfElements ; i++)
        {
            if ((arr+i) == position)
            {
                checkForReSize();
                for (int x = numberOfElements-1 ; x >= i ; x--)
                    arr[x+1] = arr[x];
                arr[i] = value;
                numberOfElements ++;
                break;
            }
        }
    }

    void push_back(T value)
    {
        checkForReSize();
        // Add value to last  of array
        arr[numberOfElements] = value;
        numberOfElements ++;
    }

    void pop_back()
    {
        numberOfElements --;
    }

    void clear()
    {
        capacity = 1;
        numberOfElements = 0;
    }

    void erase(T* position)
    {
        for (int i = 0 ; i < numberOfElements ; i++)
        {
            if ((arr+i) == position)
            {
                for (int x = i ; x < numberOfElements+1 ; x++)
                    arr[x] = arr[x+1];
                numberOfElements --;
                break;
            }
        }
    }

    // For using in push_back and insert Functions
    void checkForReSize()
    {
        if (numberOfElements == capacity)
        {
            // Declaring new array with double of capacity
            T* temp = new T[capacity * 2];
            for (int i = 0; i < capacity ; i++)
                temp[i] = arr[i];
            delete[] arr;
            capacity *= 2;
            arr = temp;
        }
    }

    void print()
    {
        cout << "\n";
        if (numberOfElements == 0)
            cout << "Vector is Empty\n";
        else
        {
            cout << "Vector Elements: [";
            for (int i = 0 ; i < numberOfElements ; i++)
            {
                cout << arr[i];
                if (i != numberOfElements-1)
                    cout << ", ";
            }
            cout << "]\n";
        }
    }

    FciVector()
    {
        arr = new T[1];
        capacity = 1;
        numberOfElements = 0;
    }
};

#endif // FCIVECTOR_H
