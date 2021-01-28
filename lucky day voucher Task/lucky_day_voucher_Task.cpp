#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> zeroOneKnapsack(int price[], int profit[], int w, int n)
{
    /* vector include "maximum profile resale value" at index 0
        and indexes of selected devices at rest of it */
    vector<int> result;

    int m[n + 1][w + 1];
    // Initialize first row with 0
    for (int i = 0; i < w + 1; i++)
        m[0][i] = 0;

    // Initialize first column with 0
    for (int i = 1; i < n + 1; i++)
        m[i][0] = 0;


    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < w + 1; j++)
            if (price[i - 1] > j)
                m[i][j] = m[i - 1][j];
            else
                m[i][j] = max(m[i - 1][j], m[i - 1][j - price[i - 1]] + profit[i - 1]);

    result.push_back(m[n][w]);
    int i = n, j = w;
    while (i != 0)
    {
        if (m[i][j] != m[i - 1][j])
        {
            result.push_back(i - 1);
            j -= price[i - 1];
        }
        i--;
    }
    return result;
}

int main()
{
    string devices[] = {"Gaming PC", "Apple Watch", "Iphone 12",
                        "DVD-Set", "Samsung Galaxy S12+", "Apple Mac Box Air", "Mac Pro", "anything else"};
    int price[] = {8, 3, 5, 1, 4, 20, 7, 22}, profit[] = {14, 5, 8, 3, 6, 28, 10, 27},
            w = 30, n = sizeof(price) / sizeof(price[0]);

    vector<int> result = zeroOneKnapsack(price, profit, w, n);
    cout << "Selected Devices: ";
    for (int i = 1; i < result.size(); i++)
    {
        if (i != 1)
            cout << ", ";
        cout << devices[result[i]];
    }
    cout << endl;

    cout << "maximum profile resale value = " << result[0] << "k";
    return 0;
}
