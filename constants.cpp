#pragma once
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<iomanip>
using namespace std;

class Customer {
public:
    string name;
    string password;
    int bill_amount;
    int no_of_visits;
    vector<pair<string, int> > orders;
    Customer(string name, string password, int bill_amount, int no_of_visits, vector<pair<string, int> > orders) {
        this->name = name;
        this->password = password;
        this->bill_amount = bill_amount;
        this->no_of_visits = no_of_visits;
        this->orders = orders;
    }
};

vector<Customer> customers;


class Admin {
public:
    string name;
    string password;
    Admin(string name, string password) {
        this->name = name;
        this->password = password;
    }
};

vector<Admin> admins = { Admin("admin", "admin") };

class Dish {
public:
    string name;
    int price;
    int quantity;
    int votes;
    Dish(string name, int price, int quantity, int votes) {
        this->name = name;
        this->price = price;
        this->quantity = quantity;
        this->votes = votes;
    }
};

vector<Dish> dishes;

string lower(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

void vote(string s) {
    for (int i = 0;i < dishes.size();i++) {
        if (lower(dishes[i].name) == lower(s)) {
            dishes[i].votes++;
        }
    }
}

Dish finddish(string s) {
    for (int i = 0;i < dishes.size();i++) {
        if (lower(dishes[i].name) == lower(s)) {
            return dishes[i];
        }
    }
    return Dish("", 0, 0, 0);
}

void decrease_quantity(string s, int q) {
    for (int i = 0;i < dishes.size();i++) {
        if (lower(dishes[i].name) == lower(s)) {
            dishes[i].quantity -= q;
        }
    }
}

void viewdishes() {
    cout << "Dishes available are: " << endl;
    cout << "=====================" << endl;
    cout << std::left << std::setw(20) << "Dish name" << internal
        << setw(20) << "Price" << setw(20) << "Quantity Available" << endl;
    for (int i = 0;i < dishes.size();i++) {
        cout << std::left << std::setw(20) << dishes[i].name << internal << setw(20)
            << dishes[i].price << internal << setw(20) << dishes[i].quantity << endl;
    }
    cout << "Top five dishes in our restaurant according to customer's rating are: " << endl;
    cout << "=====================" << endl;
    sort(dishes.begin(), dishes.end(), [](const Dish &lhs, const Dish &rhs) {
        return lhs.votes > rhs.votes;
        });
    cout << std::left << std::setw(20) << "Dish name" << internal
        << setw(20) << "Votes" << endl;
    for (int i = 0;i < 5;i++) {
        cout << std::left << std::setw(20) << dishes[i].name << internal << setw(20)
            << dishes[i].votes << endl;
    }
}

void searchdish() {
    string dishname;
    bool notfound = true;
    cout << "Enter the dish name to search: ";
    cin >> dishname;
    Dish d = finddish(dishname);
    if (d.name != "") {
        cout << "The dish that you are searching for is available to order and its details are shown below:" << endl;
        cout << "Dish name: " << d.name << endl;
        cout << "Price: " << d.price << endl;
        cout << "Quantity Available: " << d.quantity << endl;
    } else {
        cout << "The dish that you are searching is not available to order!" << endl;
    }


}