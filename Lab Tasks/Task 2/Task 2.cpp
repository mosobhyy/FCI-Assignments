#include <iostream>

using namespace std;

// Time Complexity: O(2^n)
// Space Complexity: O(1)
long long recursionFibonacci(int num)
{
    if (num <= 1)
        return num;

    return recursionFibonacci(num - 1) + recursionFibonacci(num - 2);
}

// Time Complexity: O(n)
// Space Complexity: O(n)
long long dynamicFibonacci(int num)
{
    long long arr[num + 2];
    arr[0] = 0, arr[1] = 1;
    for (int i = 2; i <= num; i++)
        arr[i] = arr[i - 1] + arr[i - 2];
    return arr[num];
}

void multiply(long long F[2][2], long long M[2][2]);

void power(long long F[2][2], int n);

// Time Complexity: O(log(n))
// Space Complexity: O(1)
long long powerFibonacci(int num)
{
    long long F[2][2] = {1, 1, 1, 0};
    power(F, num - 1);
    return F[0][0];
}

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    cout << "Fibonacci For " << num << " by Powering method is: " << powerFibonacci(num) << endl;
    cout << "Fibonacci For " << num << " by dynamic programming method is: " << dynamicFibonacci(num) << endl;
    cout << "Fibonacci For " << num << " by recursion method is: " << recursionFibonacci(num) << endl;
    return 0;
}

void multiply(long long F[2][2], long long M[2][2])
{
    long long x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
    long long w = F[0][0] * M[0][1] + F[0][1] * M[1][1];
    long long y = F[1][0] * M[0][0] + F[1][1] * M[1][0];
    long long z = F[1][0] * M[0][1] + F[1][1] * M[1][1];

    F[0][0] = x;
    F[0][1] = w;
    F[1][0] = y;
    F[1][1] = z;
}

void power(long long F[2][2], int n)
{
    if (n <= 1)
        return;

    long long M[2][2] = {1, 1, 1, 0};

    power(F, n / 2);
    multiply(F, F);

    if (n % 2 != 0)
        multiply(F, M);
}