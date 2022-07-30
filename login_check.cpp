#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include "constants.cpp"
using namespace std;

int checkcustomer() {
    string name;
    char *password;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your password: ";
    password = getpass("");

    for (int i = 0;i < customers.size();i++) {
        if (customers[i].name == name && customers[i].password == password) {
            cout << "Welcome to the restaurant Mr/Mrs." << customers[i].name << endl;
            customers[i].no_of_visits++;
            return i;
        }
    }
    cout << "Invalid username or password" << endl;
    return 0;
}

bool checkadmin() {
    string name;
    char *password;
    cout << "Enter admin name: ";
    cin >> name;
    cout << "Enter admin password: ";
    password = getpass("");

    for (int i = 0;i < admins.size();i++) {
        if (admins[i].name == name && admins[i].password == password) {
            cout << "Welcome Admin" << endl;
            return true;
        }
    }
    cout << "Invalid Admin username or password" << endl;
    return false;
}
