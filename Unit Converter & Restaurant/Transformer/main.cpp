/*
Name : Mohamed Sobhy Abdelfattah  /  ID : 20180356

Name : Mahmoud Kamel Aly  /  ID : 20180258
*/

#include <iostream>

using namespace std;

int main()
{
    int numOfChoice;
    double Celsius, Kg, meter, fahrenheit, kelvin, gram, pound, ton, cm, km, foot, yard;
    cout << "Welcome to Unit Converter!!"<<endl;
    cout << "Choose one of options"<<endl;
    cout << "1- Temperature in Celsius"<<endl;
    cout << "2- Mass in Kg"<<endl;
    cout << "3- Length in Meter"<<endl;
    cin >> numOfChoice;
    if(numOfChoice == 1){
            cout << "Enter value of temperature"<<endl;
            cin >> Celsius;
            fahrenheit = (Celsius*9/5)+32;
            kelvin = (Celsius + 273.15);
            cout << "Temperature in Fahrenheit = "<<fahrenheit<<endl;
            cout << "Temperature in Kelvin = "<<kelvin<<endl;
    }

    else if(numOfChoice == 2){
            cout << "Enter value of mass"<<endl;
            cin >> Kg;
            gram = Kg * 1000;
            pound = Kg * 2.205;
            ton = Kg * 0.001;
            cout << "Mass in Gram = "<<gram<<endl;
            cout << "Mass in Pound = "<<pound<<endl;
            cout << "Mass in Ton = "<<ton<<endl;
    }


    else if(numOfChoice == 3){
            cout << "Enter value of length"<<endl;
            cin >> meter;
            cm = meter * 100;
            km = meter * 0.001;
            foot = meter * 3.281;
            yard = meter * 1.094;
            cout << "Length in Cm = "<<cm<<endl;
            cout << "Length in Km = "<<km<<endl;
            cout << "Length in Foot = "<<foot<<endl;
            cout << "Length in Yard = "<<yard<<endl;
    }
    else
        cout << "Please Enter a valid number"<<endl;

    return 0;
}
