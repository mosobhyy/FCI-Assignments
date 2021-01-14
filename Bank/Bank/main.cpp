/*
Name : Mohamed Sobhy Abd-Elfattah  /  ID : 20180356

*/

#include <iostream>

#include <string>

using namespace std;


struct customer{
    char name[20][50];
    char address[20][50];
    int street_num[20];
    float balance_data[20];
    char transaction;
};


float trans(customer arr[], int i){
    int count;
    cout << "Please enter "<< arr[i].name[i] <<"'s account transactions"<<endl;
    cout << "How many transaction do you want to do ?"<<endl;
    cin >> count;

    arr[i].balance_data[i]=0;
    for (int z=0; z<count; z++){
        float balance=0;
        again:
        cin >> arr[i].transaction;
        cin >> balance;
        if (balance > 0 )
        {
            if(arr[i].transaction == 'w')
            {
                arr[i].balance_data[i] -= balance;
            }
            else if(arr[i].transaction  == 'd')
            {
                arr[i].balance_data[i] += balance;
            }
        }else{
            cout << "Please enter valid transaction : "<<endl;
            goto again;
        }
    }
    return arr[i].balance_data[i];
}


void print(customer arr[], int size){
    for (int i=0; i<size; i++)
    {
        cout << arr[i].name[i] <<"'s Account Balance = " << arr[i].balance_data[i]<<endl;
    }
}


void printSpecific(customer arr[], int size){
    string name;
    cout << "Please enter name of customer you want to search for  : ";
    cin >> name;
    for (int i=0; i<size; i++){
        if (arr[i].name[i] != name){
            if (i == size - 1 ){
                cout << endl <<"Sorry, we do not have information about "<< name <<endl<<endl;
            }
            continue;
        }
        else{
            cout << name << "'s balance = " << arr[i].balance_data[i]<<endl;
            break;
        }
    }
}


void edit(customer arr[], int size){
    string name;
    cout << "Please enter name of customer you want to edit : ";
    cin >> name;
    for (int i=0; i<size; i++){
        if (arr[i].name[i] != name){
            if (i == size - 1 ){
                cout << endl <<"Sorry, we do not have information about "<< name <<endl<<endl;
            }
            continue;
        }
        else{
            trans(arr, i);
        }
        break;
    }
}


void max_balance(customer arr[], int size){
    float max = arr[0].balance_data[0];
    string name;
    for (int i=0; i<size; i++){
        name = arr[i].name[i];
        if (arr[i].balance_data[i] > max){
            max = arr[i].balance_data[i];
        }
    }
    cout << name << " has maximum balance = " << max <<endl;
}


void modify(customer arr[], int size){
    string name, choice;
    cout << "Please enter name of customer you want to edit : ";
    cin >> name;
    for (int i=0; i<size; i++){
        if (arr[i].name[i] == name){
            cout << "What do you want to edit ?"<<endl;
            cin >> choice;
            if (choice == "name"){
                cout << "Please enter name of customer"<<endl;
                cin >> arr[i].name[i];
            }
            else if (choice == "address"){
                cout << "Please enter address"<<endl;
                cin >> arr[i].street_num[i];
                cin.ignore();
                cin.getline(arr[i].address[i], 50, ',');
                cin.ignore();
                cin.getline(arr[i].address[i+1], 50, ',');
                cin.ignore();
                cin.getline(arr[i].address[i+2], 50);
            }
            else if (choice == "transaction"){
                trans(arr, i);
            }
            else if (choice == "balance"){
                cin >> arr[i].balance_data[i];
            }
        }else{
            if (i == size - 1 ){
                cout << endl <<"Sorry, we do not have information about "<< name <<endl<<endl;
            }
        }
    }
}


void city(customer arr[], int size){
    int number=0;
    string name;
    cout << "Please enter name of City you want to search for  : ";
    cin >> name;
    for (int i=0; i<size; i++){
        if (arr[i].address[i+2] == name){
            number += 1;
        }
    }
    if (number == 0)
        cout << endl << "We don't have customers in " << name <<endl<<endl;
    else
        cout << "Number of customers in "<<name<< " = "<<number<<endl;
}
int main(){
    string resume, again;
    customer arr[20];
    int choice_num, customer_num, num=0;
    cout << "How many customer do you want to enter ?!"<<endl;
    cin >> customer_num;
    for (int i=0; i<customer_num; i++){
        num+=1;

        // Name

        cout << "Please enter name of customer"<<endl;
        cin >> arr[i].name[i];

        // Address

        cout << "Please enter address"<<endl;
        cin >> arr[i].street_num[i];
        cin.ignore();
        cin.getline(arr[i].address[i], 50, ',');
        cin.ignore();
        cin.getline(arr[i].address[i+1], 50, ',');
        cin.ignore();
        cin.getline(arr[i].address[i+2], 50);

        // Transaction

        trans(arr, i);
    }

    do
    {
        do
        {
            cout << "1) To print all names and account balances"<<endl;
            cout << "2) To print specific customer's account balance"<<endl;
            cout << "3) To edit customer transactions"<<endl;
            cout << "4) To show customer with highest balance"<<endl;
            cout << "5) To change customer's name, transaction, balance, or address"<<endl;
            cout << "6) To show how many customers in one city"<<endl;
            cin >> choice_num;
        }
        while (choice_num <= 0 || choice_num > 6);
        switch(choice_num){
        case 1:
            print(arr,num);
            break;
        case 2:
            printSpecific(arr,num);
            break;
        case 3:
            edit(arr,num);
            break;
        case 4:
            max_balance(arr,num);
            break;
        case 5:
            modify(arr,num);
            break;
        case 6:
            city(arr,num);
            break;
        }
        cout << "Do you want other services ?"<<endl;
        cin >> resume;
    }
    while (resume == "yes");

    if (resume == "no"){
        cout << endl << "Thank you for your trust in our bank ^_^"<<endl;
    }

    return 0;
}