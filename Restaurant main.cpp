#include <iostream>
#include <string>
#include <vector>
#include<unistd.h>
using namespace std;
#include "constants.cpp"
#include "login_check.cpp"
#include "customer_service.cpp"
#include "admin_service.cpp"
int main(){
customers.push_back(Customer("rahul", "password", 0, 0, vector<pair<string,int>>()));
customers.push_back(Customer("jhon", "password1", 0, 0, vector<pair<string,int>>()));
customers.push_back(Customer("saketh", "password2", 0, 0, vector<pair<string,int>>()));
customers.push_back(Customer("kaushik", "password3", 0, 0, vector<pair<string,int>>()));
customers.push_back(Customer("ratna", "password4", 0, 0, vector<pair<string,int>>()));
customers.push_back(Customer("aditya", "password5", 0, 0, vector<pair<string,int>>()));
customers.push_back(Customer("aakash", "password6", 0, 0, vector<pair<string,int>>()));
customers.push_back(Customer("jhon101", "password7", 0, 0, vector<pair<string,int>>()));
customers.push_back(Customer("jhon102", "password8", 0, 0, vector<pair<string,int>>()));
customers.push_back(Customer("jhon104", "password9", 0, 0, vector<pair<string,int>>()));
dishes.push_back(Dish("Biryani", 200, 2,1));
dishes.push_back(Dish("Pizza", 100, 4,1));
dishes.push_back(Dish("Burger", 50, 6, 1));
dishes.push_back(Dish("Coke", 50, 8, 1));
dishes.push_back(Dish("Pepsi", 50, 10, 1));
dishes.push_back(Dish("Fries", 50, 12, 1));
dishes.push_back(Dish("Sandwich", 50, 14, 1));
dishes.push_back(Dish("Noodles", 50, 16, 1));
dishes.push_back(Dish("Pasta", 50, 18, 1));
dishes.push_back(Dish("Cake", 50, 20, 1));
dishes.push_back(Dish("Ice-cream", 50, 22, 1));
dishes.push_back(Dish("Chocolate", 50, 24, 1));

    int num, i;
    bool exit = false;
    while(exit == false){
    cout << "Welcome to Restaurant"<<"\n";
    cout << "Choose any one of the options below:" << endl;
    cout << "1. Admin Login" << endl;
    cout << "2. Customer Login" << endl;
    cout << "3. Exit" << endl;
    cin >> num;
    if(num == 1){
        if(checkadmin()){
            adminservices();
        }
    }
    if(num == 2){
        i = checkcustomer();
        if(i > 0){
            customerservices(i);
        }
    }
    if(num == 3){
        cout << "Thank you for using our Restaurant." << endl;
        exit = true;
    }
}
}
