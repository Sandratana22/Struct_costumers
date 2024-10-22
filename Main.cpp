// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "customers.h"
#include <string>

using namespace std; 

int main() {
    MyStruct customer;

    cout << "Enter customer ID: ";
    cin >> customer.id;

    cout << "Enter customer name: ";
    cin.ignore();
    getline(cin, customer.name);

    cout << "Enter customer email: ";
    getline(cin, customer.email);

    displayCustomerInformation(customer);

    return 0;
}


