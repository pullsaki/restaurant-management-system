#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<algorithm>
#include<list>
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
    cout << "Top five dishes in our restaurant according to customer's rating are: " << endl;
    cout << "====================="<<endl;
    list<pair<int, string>> l;
    for(int i=0;i<dishes.size();i++){
        l.push_back(make_pair(dishes[i].votes,dishes[i].name));
    }
    l.sort([](const std::pair<int, string> &x, const std::pair<int, string> &y)
    {
    return x.first < y.first;
    });
    // l.reverse();
    auto it = l.cbegin();
    for(int i=0;i<5;i++){
        cout << it->second << endl;
        it++;
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
void add_dishes_to_cart(int i){
    string dish;
    int q;
    cout << "Enter the dish name to be added to the cart" << endl;
    cin >> dish;
    cout << "Enter the quantity of the dish to be added to the cart" << endl;
    cin >> q;
    customers[i].orders.push_back(pair<string,int>(dish,q));
    customers[i].bill_amount+=finddish(dish).price*q;
}
void viewbill(int i){
    cout << "Bill for customer " << customers[i].name << endl;
    cout << "====================="<<endl;
    cout << std::left << std::setw(20) << "Dish name" << internal
    << setw(20) << "Price" <<setw(20) << "Quantity"<< endl;
    for(int j=0;j<customers[i].orders.size();j++){
        cout << std::left << std::setw(20) << customers[i].orders[j].first << internal << setw(20)
        << finddish(customers[i].orders[j].first).price << internal << setw(20) << customers[i].orders[j].second << endl;
    }

    cout << "Total bill amount: " << customers[i].bill_amount << endl;
}
void placeorder(int i){
    cout << "Your order has been successfully placed!" << endl;
    if(customers[i].no_of_visits>1){
        cout << "You have been given a " << 2*customers[i].no_of_visits << "% discount on your bill!" << endl;
        customers[i].bill_amount-=(2*customers[i].no_of_visits*customers[i].bill_amount)/10;
        viewbill(i);
    }
    else{
        viewbill(i);
    }
    customers[i].bill_amount = 0;
    customers[i].orders.clear();
}
void votedishes(){
cout << "Enter the name of the dish for which you want to give rating: " << endl;
string dish;
cin >> dish;
Dish d = finddish(dish);
d.votes++;
}


void customerservices(int i){
    int num;
    bool exit = false;
    while(!exit){
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
        add_dishes_to_cart(i);
    }
    if(num == 4){
        viewbill(i);
    }
    if(num == 5){
        placeorder(i);
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
