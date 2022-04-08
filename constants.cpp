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
    int votes;
    Dish(string name, int price, int quantity, int votes){
        this->name = name;
        this->price = price;
        this->quantity = quantity;
        this->votes = votes;
    }
};
vector<Dish> dishes = {Dish("Biryani", 200, 2,1), Dish("Pizza", 100, 4,1),
Dish("Burger", 50, 6, 1), Dish("Coke", 50, 8, 1), Dish("Pepsi", 50, 10, 1)};


string lower(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

Dish finddish(string s){
    for(int i=0;i<dishes.size();i++){
        if(lower(dishes[i].name) == lower(s)){
            return dishes[i];
        }
    }
    return Dish("", 0, 0,0);
}
