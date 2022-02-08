#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<algorithm>
#include "constants.cpp"
using namespace std;

void viewdishes(){
    cout << "Dishes available are: " << endl;
    cout << std::left << std::setw(20) << "Dish name" << internal << setw(20) << "Price" <<setw(20) << "Quantity Available"<< endl;
    for(int i=0;i<dishes.size();i++){
        cout << std::left << std::setw(20) << dishes[i].name << internal << setw(20) << dishes[i].price
        << internal << setw(20) << dishes[i].quantity << endl;
    }


}
void add_dishes(){}
void viewbill(){}
void placeorder(){}
void votedishes(){}


void customerservices(){
    int num;
    bool exit = false;
    while(exit == false){
    cout << "Choose any one of the options below:" << endl;
    cout << "1. View available dishes and quantity" << endl;
    cout << "2. Select dishes into cart" << endl;
    cout << "3. View dishes in cart and total amount to be paid" << endl;
    cout << "4. Place order" << endl;
    cout << "5. Vote for dishes"<<endl;
    cout << "6. Logout" << endl;
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
        votedishes();
    }
    if(num == 6){

        cout << "You are successfully logged out" << endl;
        exit = true;
    }
}
}
