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
    cout << "1. View available dishes and quantity" << endl;
    cout << "2. Select dishes into cart" << endl;
    cout << "3. View dishes in cart and total amount to be paid" << endl;
    cout << "4. Place order" << endl;
    cout << "5. Logout" << endl;
    cin >> num;
    if(num == 1){
        viewdishes();
    }
    if(num == 2){
        add_dishes();
    }
    if(num == 3){
        viewbill();
    }
    if(num == 4){
        placeorder();
    }
    if(num == 5){

        cout << "You are successfully logged out" << endl;
        exit = true;
    }
}
}
