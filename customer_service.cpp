#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<algorithm>
#include "constants.cpp"
using namespace std;

void viewdishes(){
    cout << "Dishes available are: " << endl;
    cout << "====================="<<endl;
    cout << std::left << std::setw(20) << "Dish name" << internal
    << setw(20) << "Price" <<setw(20) << "Quantity Available"<< endl;
    for(int i=0;i<dishes.size();i++){
        cout << std::left << std::setw(20) << dishes[i].name << internal << setw(20)
        << dishes[i].price << internal << setw(20) << dishes[i].quantity << endl;
    }
}
void searchdish(){
    string dishname;
    bool notfound = true;
    cout << "Enter the dish name to search: ";
    cin >> dishname;
    for(int i=0;i<dishes.size();i++){
        if(lower(dishes[i].name) == lower(dishname)){
            cout << "The dish that you are searching for is available to order and its details are shown below:"<<endl;
            cout << "Price: " << dishes[i].price << endl;
            cout << "Quantity Available: "<< dishes[i].quantity << endl;
            notfound = false;
            break;
        }
    }
    if(notfound){
        cout << "The dish that you are searching is not available to order due to insufficient quantity!"<<endl;
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
    cout << "2. Search for a particular dish using its name"<<endl;
    cout << "3. Select dishes into cart" << endl;
    cout << "4. View dishes in cart and total amount to be paid" << endl;
    cout << "5. Place order" << endl;
    cout << "6. Vote for dishes"<<endl;
    cout << "7. Logout" << endl;
    cin >> num;
    if(num == 1){
        viewdishes();
    }
    if(num == 2){
        searchdish();
    }
    if(num == 3){
        add_dishes();
    }
    if(num == 4){
        viewbill();
    }
    if(num == 5){
        placeorder();
    }
    if(num == 6){
        votedishes();
    }
    if(num == 7){

        cout << "You are successfully logged out" << endl;
        exit = true;
    }
}
}
