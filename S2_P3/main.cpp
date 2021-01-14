#include <iostream>
#include <map>

using namespace std;

void sortAccording(int arr[], int size, int anotherArr[], int anotherSize);

void print(int arr[], int size);

int main()
{
    int arr[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    int anotherArr[] = {2, 1, 8, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int anotherSize = sizeof(anotherArr) / sizeof(anotherArr[0]);
    sortAccording(arr, size, anotherArr, anotherSize);
    print(arr, size);
    return 0;
}

void sortAccording(int arr[], int size, int anotherArr[], int anotherSize)
{
    multimap<int, int> m;
    int index = 0;
    for (size_t i = 0; i < size; i++)
    {
        int key = 0;
        for (size_t j = 0; j < anotherSize; j++)
        {
            if (arr[i] == anotherArr[j])
            {
                key = 1;
                break;
            }
        }
        m.insert({arr[i], key});
        key = 0;
    }

    multimap<int, int>::iterator it;

    for (size_t i = 0; i < anotherSize; i++)
    {
        for (it = m.begin(); it != m.end(); it++)
        {
            if (it->first == anotherArr[i])
            {
                arr[index] = it->first;
                index++;
            }
        }
    }

    for (it = m.begin(); it != m.end(); it++)
        if (it->second != 1)
            arr[index++] = it->first;
    m.clear();

}

void print(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}