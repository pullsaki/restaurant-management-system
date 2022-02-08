#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Customer{
    public:
    string name;
    string password;
    int bill_amount;
    int no_of_visits;
    vector<pair<string,int>> orders;
    Customer(string name, string password, int bill_amount, int no_of_visits, vector<pair<string,int>> orders){
        this->name = name;
        this->password = password;
        this->bill_amount = bill_amount;
        this->no_of_visits = no_of_visits;
        this->orders = orders;
    }
};

vector<Customer> customers;

class Admin{
    public:
    string name;
    string password;
    Admin(string name, string password){
        this->name = name;
        this->password = password;
    }
};

vector<Admin> admins = {Admin("admin", "admin")};