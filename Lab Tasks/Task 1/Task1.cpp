#include <chrono>
#include "ctime"
#include <algorithm>
#include <iostream>

using namespace std;

using namespace std::chrono;

int sequentialSearch(int set[], int start, int end, int key)
{
    if (start > end)
        return -1;
    if (set[start] == key)
        return start;
    if (set[end] == key)
        return end;
    return sequentialSearch(set, start + 1, end - 1, key);
}

int binarySearch(int set[], int start, int end, int key)
{
    if (start > end)
        return -1;

    int middle = (start + end) / 2;

    if (set[middle] == key)
        return middle;

    if (set[middle] < key)
        return binarySearch(set, middle + 1, end, key);

    return binarySearch(set, start, middle - 1, key);
}

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;

    int set1[1000], set2[10000], set3[100000];

    // Initialize arrays' elements with random values (From 1 to array's size)

    srand(time(nullptr));
    for (int &i : set1)
        i = rand() % 1000 + 1;
    for (int &i : set2)
        i = rand() % 10000 + 1;
    for (int &i : set3)
        i = rand() % 100000 + 1;

    // Get the time before the Sequential Search Function is called
    auto start = high_resolution_clock::now();

    cout << "Set 1 at index: " << sequentialSearch(set1, 0, 999, num) << endl;

    cout << "Set 2 at index: " << sequentialSearch(set2, 0, 9999, num) << endl;

    cout << "Set 3 at index: " << sequentialSearch(set3, 0, 99999, num) << endl;

    // Get the time after the Sequential Search Function is called
    auto end = high_resolution_clock::now();

    // Get the difference between start and end time
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Time taken by Sequential Search For the 3 sets: "
         << duration.count() << " microseconds" << endl;

    cout << "\n-----------------------------------------------------------------\n\n";

    // Sort the arrays to invoke Binary Search Function
    sort(set1, set1 + 1000);
    sort(set2, set2 + 10000);
    sort(set3, set3 + 100000);

    // Get the time before the Binary Search Function is called
    start = high_resolution_clock::now();

    cout << "Set 1 at index: " << binarySearch(set1, 0, 999, num) << endl;

    cout << "Set 2 at index: " << binarySearch(set2, 0, 9999, num) << endl;

    cout << "Set 3 at index: " << binarySearch(set3, 0, 99999, num) << endl;

    // Get the time after the Binary Search Function is called
    end = high_resolution_clock::now();

    // Get the difference between start and end time
    duration = duration_cast<std::chrono::microseconds>(end - start);

    cout << "Time taken by Binary Search For the 3 sets: "
         << duration.count() << " microseconds" << endl;

    return 0;
}
