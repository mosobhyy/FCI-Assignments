#include<iostream>

using namespace std;

int partition(int arr[], int start, int end);

int quickSearch(int arr[], int start, int end, int key)
{
    int j = partition(arr, start, end);

    if (key - 1 == j)
        return arr[j];

    if (key - 1 < j)
        return quickSearch(arr, start, j - 1, key);

    return quickSearch(arr, j + 1, end, key);
}

int main()
{
    int n, i;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements: ";
    for (int j = 0; j < n; j++)
        cin >> arr[j];
    cout << "Enter the nth smallest element in the array you want: ";
    cin >> i;
    cout << "The " << i << "th smallest element in the array is: " << quickSearch(arr, 0, n, i);
    return 0;
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[start], i = start + 1, j = end;
    while (i < j)
    {
        while (arr[i] <= pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }
    if (arr[j] < arr[start])
        swap(arr[start], arr[j]);
    return j;
}