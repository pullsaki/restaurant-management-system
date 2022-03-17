#pragma once
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
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

class Dish{
    public:
    string name;
    int price;
    int quantity;
    Dish(string name, int price, int quantity){
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }
};
vector<Dish> dishes = {Dish("Chicken Biryani", 200, 2), Dish("Pizza", 100, 4),
Dish("Burger", 50, 6), Dish("Coke", 50, 8), Dish("Pepsi", 50, 10)};

string lower(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}