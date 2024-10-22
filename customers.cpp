
#include <iostream>
#include "customers.h"

using namespace std;

// Function to display customer details
void displayCustomerInformation(const MyStruct& customer) {
    cout << "\nCustomer Information:\n";
    cout << "ID: " << customer.id << endl;
    cout << "Name: " << customer.name << endl;
    cout << "Email: " << customer.email << endl;
}
