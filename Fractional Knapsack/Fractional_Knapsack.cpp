#include <iostream>

using namespace std;

#include <bits/stdc++.h>

bool compare(pair<double, double> a, pair<double, double> b)
{
    return (a.second / a.first) > (b.second / b.first);
}

double fractionalKnapsack(vector<pair<double, double>> &items, double w)
{
    double result = 0.0;

    // Sort array according to "value/weight"
    sort(items.begin(), items.end(), compare);

    int i = 0;
    while (w > 0 && i < items.size())
    {
        if (w >= items[i].first)
        {
            w -= items[i].first;
            result += items[i].second;
        }
        else
        {
            result += (items[i].second / items[i].first) * w;
            w = 0;
        }
        i++;
    }
    return result;
}

int main()
{
    double w = 15;

    /* vector of pairs of weight and value for each item
                                          weight, value */
    vector<pair<double, double>> items = {{2,  10},
                                          {3, 5},
                                          {5, 15},
                                          {7, 7},
                                          {1, 6},
                                          {4, 18},
                                          {1, 3}};

    cout << fractionalKnapsack(items, w);

    return 0;
}
