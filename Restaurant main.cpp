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
customers.push_back(Customer("sai", "password4", 0, 0, vector<pair<string,int>>()));
customers.push_back(Customer("aditya", "password5", 0, 0, vector<pair<string,int>>()));
customers.push_back(Customer("aakash", "password6", 0, 0, vector<pair<string,int>>()));
customers.push_back(Customer("jhon101", "password7", 0, 0, vector<pair<string,int>>()));
customers.push_back(Customer("jhon102", "password8", 0, 0, vector<pair<string,int>>()));
customers.push_back(Customer("jhon104", "password9", 0, 0, vector<pair<string,int>>()));
    int num;
    bool customer, admin, exit = false;
    while(exit == false){
    cout << "Welcome to Restuarant"<<"\n";
    cout << "Choose any one of the options below:" << endl;
    cout << "1. Admin Login" << endl;
    cout << "2. Customer Login" << endl;
    cin >> num;
    if(num == 1){
        if(checkadmin()){
            exit = true;
            admin = true;
        }
    }
    if(num == 2){
        if(checkcustomer()){
            exit = true;
            customer = true;
        }
    }
}
if(customer){
    customerservices();
}
if(admin){
    adminservices();
}
}
