#include <iostream>
#include <stack>
using namespace std;

bool arePair(char open, char close)
{
    if(open=='(' && close==')' || open=='{' && close=='}' || open=='[' && close==']')
        return true;
    return false;
}

bool areBalanced(string exp)
{
    stack<char> s;
    for(size_t i=0 ; i<exp.size() ; i++)
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            s.push(exp[i]);
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if(s.empty() || !arePair(s.top(), exp[i]))
                return false;
            else
                s.pop();
        }
    }
    return s.empty();
}


int main() {
    string expression;
    cout << "Enter an expression: ";
    cin >> expression;
    if(areBalanced(expression))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";
    return 0;
}
