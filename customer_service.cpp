#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include "constants.cpp"
using namespace std;

void placeorder(){}
void vieworders(){}
void viewbill(){}

void customerservices(){
    int num;
    bool exit = false;
    while(exit == false){
    cout << "Welcome to Restuarant"<<"\n";
    cout << "Choose any one of the options below:" << endl;
    cout << "1. Place order" << endl;
    cout << "2. View orders" << endl;
    cout << "3. View bill" << endl;
    cout << "4. Logout" << endl;
    cin >> num;
    if(num == 1){
        placeorder();
    }
    if(num == 2){
        vieworders();
    }
    if(num == 3){
        viewbill();
    }
    if(num == 4){
        exit = true;
    }
}
}
