/*
Name : Mohamed Sobhy Abdelfattah  /  ID : 20180356

Name : Mahmoud Kamel Aly  /  ID : 20180258
*/

#include

<iostream>

using namespace std;

float
extra(float total_bill, int numOfChoice, int quantity, string extratopping, string selectOne, string anotherItem) {
    re_extratopping:
    cout << "Do you want extra topping ?" << endl;
    cin >> extratopping;
    if (extratopping == "yes") {
        re_selectOne:
        cout << "Please select one ( mushroom = 10, onion =5 , sausage =10)" << endl;
        cin >> selectOne;
        if (selectOne == "mushroom") {
            total_bill += (10 * quantity);
        } else if (selectOne == "onion") {
            total_bill += (5 * quantity);
        } else if (selectOne == "sausage") {
            total_bill += (10 * quantity);
        } else {
            cout << "Please Enter a valid choice" << endl;
            goto re_selectOne;
        }

    } else if (extratopping == "no") {

    } else {
        cout << "Please Enter a valid choice" << endl;
        goto re_extratopping;
    }
    return total_bill;

}

int main() {
    int numOfChoice, quantity;
    string size, extratopping, selectOne, anotherItem;
    float total_bill;


    do {
        re_numOfChoice:
        cout << "Welcome to our Pizza restaurant" << endl;
        cout << "Please select one of items" << endl;
        cout << "1- SUPER SUPREME - S=50 /M=75.5/ L=100" << endl;
        cout << "2- CHICKEN SUPREME - S=45/ M=73.88/ L=97.99" << endl;
        cout << "3- MARGHERITA - S=35/ M=70/ L=95" << endl;
        cout << "4- CHEESE LOVERS - S=60.96/ M=87.75/ L=113.16" << endl;
        cout << "5- SEA FOOD LOVERS - S= 64.47/ M=94.30/ L=123.25" << endl;
        cin >> numOfChoice;
        if (numOfChoice == 1) {
            cout << "You select SUPER SUPREME" << endl;
            cout << "Enter your quantity" << endl;
            cin >> quantity;
            re_size:
            cout << "Enter size" << endl;
            cin >> size;
            if (size == "s") {
                total_bill += (50 * quantity);
            } else if (size == "m") {
                total_bill += (75.5 * quantity);
            } else if (size == "l") {
                total_bill += (100 * quantity);
            } else {
                cout << "Please Enter a valid choice" << endl;
                goto re_size;
            }
            total_bill = extra(total_bill, numOfChoice, quantity, extratopping, selectOne, anotherItem);
            re_anotherItem:
            cout << "Do you want another item ?" << endl;
            cin >> anotherItem;
        } else if (numOfChoice == 2) {
            cout << "You select CHICKEN SUPREME" << endl;
            cout << "Enter your quantity" << endl;
            cin >> quantity;
            re_size2:
            cout << "Enter size" << endl;
            cin >> size;
            if (size == "s") {
                total_bill += (45 * quantity);
            } else if (size == "m") {
                total_bill += (73.88 * quantity);
            } else if (size == "l") {
                total_bill += (97.99 * quantity);
            } else {
                cout << "Please Enter a valid choice" << endl;
                goto re_size2;
            }

            total_bill = extra(total_bill, numOfChoice, quantity, extratopping, selectOne, anotherItem);
            cout << "Do you want another item ?" << endl;
            cin >> anotherItem;

        } else if (numOfChoice == 3) {
            cout << "You select MARGHERITA" << endl;
            cout << "Enter your quantity" << endl;
            cin >> quantity;
            re_size3:
            cout << "Enter size" << endl;
            cin >> size;

            if (size == "s") {
                total_bill += (35 * quantity);
            } else if (size == "m") {
                total_bill += (70 * quantity);
            } else if (size == "l") {
                total_bill += (95 * quantity);
            } else {
                cout << "Please Enter a valid choice" << endl;
                goto re_size3;
            }

            total_bill = extra(total_bill, numOfChoice, quantity, extratopping, selectOne, anotherItem);
            cout << "Do you want another item ?" << endl;
            cin >> anotherItem;
        } else if (numOfChoice == 4) {
            cout << "You select CHEESE LOVERS" << endl;
            cout << "Enter your quantity" << endl;
            cin >> quantity;
            re_size4:
            cout << "Enter size" << endl;
            cin >> size;

            if (size == "s") {
                total_bill += (60.96 * quantity);
            } else if (size == "m") {
                total_bill += (87.75 * quantity);
            } else if (size == "l") {
                total_bill += (113.16 * quantity);
            } else {
                cout << "Please Enter a valid choice" << endl;
                goto re_size;
            }

            total_bill = extra(total_bill, numOfChoice, quantity, extratopping, selectOne, anotherItem);
            cout << "Do you want another item ?" << endl;
            cin >> anotherItem;
        } else if (numOfChoice == 5) {
            cout << "You select SEA FOOD LOVERS" << endl;
            cout << "Enter your quantity" << endl;
            cin >> quantity;
            re_size5:
            cout << "Enter size" << endl;
            cin >> size;

            if (size == "s") {
                total_bill += (64.47 * quantity);
            } else if (size == "m") {
                total_bill += (94.30 * quantity);
            } else if (size == "l") {
                total_bill += (123.25 * quantity);
            } else {
                cout << "Please Enter a valid choice" << endl;
                goto re_size5;
            }

            total_bill = extra(total_bill, numOfChoice, quantity, extratopping, selectOne, anotherItem);
            cout << "Do you want another item ?" << endl;
            cin >> anotherItem;
        } else {
            cout << "Please Enter a valid choice" << endl;
            goto re_numOfChoice;
        }
    } while (anotherItem == "yes");

    if (anotherItem == "no") {
        cout << "Thank you for using our application your bill = " << total_bill << endl;
    } else {
        cout << "Please Enter a valid choice" << endl;
        goto re_anotherItem;
    }
    return 0;
}
