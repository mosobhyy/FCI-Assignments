#include <iostream>
#include <stack>
using namespace std;

int pow(unsigned int x, unsigned int y)
{
    int result = 1;
    for(size_t i=0 ; i<y ; i++)
        result *= x;
    return result;
}

int main()
{
    try
    {
        stack<int> s;
        int num, size = -1, result = 0;
        cout << "Enter Binary Number: \n";
        cin >> num;
        if(!num || num<0)
            throw "Invalid Input...!\n";
        while (num != 0)
        {
            if(num%10!=0 && num%10!=1)
                throw "Invalid Input...!\n";
            s.push(num%10);
            num /= 10;
            size++;
        }
        while (!s.empty())
        {
            result += s.top()*pow(2, size);
            s.pop();
            size--;
        }
        cout << "The Equivalent Decimal Number...\n" << result;
    }
    catch (const char *e)
    {
        cout << e;
    }
    return 0;
}
