#include "StudentName.h"
#include<iostream>
#include <vector>

void StudentName::print()
{
    cout << "Detailed parts of the name are:\n";
    unsigned int startIndex=0, counter=1, i;
    for (i=0 ; i<name.size() ; i++)
    {
        if (name[i]==' ' && name[i+1]!=' ')
        {
            cout << counter << ") ";
            for (unsigned int j=startIndex ; j<i ; j++)
                cout << name[j];
            startIndex = i+1;
            counter++;
            cout << endl;
        }
    }
    if (startIndex<name.size())
    {
        cout << counter << ") ";
        for (unsigned int j=startIndex ; j<i ; j++)
            cout << name[j];
        cout << endl;
    }
}

void StudentName::replace(int x, int y)
{
    int numOfSpaces=0;
    // Loop for Calculate Number of spaces
    for (unsigned int i=0 ; i<name.size()-1 ; i++)
        if (name[i]==' ')
            numOfSpaces++;

    if (x>numOfSpaces+1 || y>numOfSpaces+1)
        cout << "False\n" << name << endl;
    else
    {
        string temp;
        vector<string> names;
        for (unsigned int i=0 ; i<name.size() ; i++)
        {
            if (name[i]==' ')
            {
                names.push_back(temp);
                temp.clear();
            }
            else
                temp += name[i];
        }
        names.push_back(temp);
        temp.clear();
        name.clear();
        temp = names[x-1];
        names[x-1] = names[y-1];
        names[y-1] = temp;
        for (unsigned int i=0 ; i<names.size() ; i++)
            name += names[i] + ' ';
        cout << "True\n" << name << endl;
    }
    print();
}

string StudentName::getName()
{
    return name;
}

void StudentName::setName(string name)
{
    /* Can use this implementation in parameterized constructor but
     will not execute when edited name by setName Function.*/

    int numOfSpaces=0, index;
    for (unsigned int i=0 ; i<name.size()-1 ; i++)
        if (name[i]==' ')
        {
            numOfSpaces++;
            index = i;
        }
    if(numOfSpaces==0)
        name += ' ' + name + ' ' + name;
    else if(numOfSpaces==1)
    {
        string temp = name;
        for (unsigned int i=index ; i<name.size() ; i++)
            temp +=name[i];
        name = temp;
    }
    this -> name = name;
}

StudentName::StudentName(string name)
{

    setName(name);
}

StudentName::~StudentName()
{
    //dtor
}
