#include <iostream>

using namespace std;

void heapify(int arr[], int size, int i);

void buildHeap(int arr[], int size);

void heapSort(int arr[], int size)
{
    buildHeap(arr, size);

    for (int i = size - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements: ";
    for (int j = 0; j < n; j++)
        cin >> arr[j];
    heapSort(arr, n);
    for (int i : arr)
        cout << i << " ";
    return 0;
}

void heapify(int arr[], int size, int i)
{
    int max = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if (size > left && arr[left] > arr[max])
        max = left;

    if (size > right && arr[right] > arr[max])
        max = right;

    if (max != i)
    {
        swap(arr[max], arr[i]);
        heapify(arr, size, max);
    }
}

void buildHeap(int arr[], int size)
{
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);
}