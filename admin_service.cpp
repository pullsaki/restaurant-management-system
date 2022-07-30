#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>
#include "constants.cpp"
using namespace std;

void view_dishes() {
    viewdishes();

}
void add_dishes_menu() {
    string dishname;
    int price, qty;
    cout << "Enter dish name: " << endl;
    cin.ignore(256, '\n');
    getline(cin, dishname, '\n');
    cout << "Enter price of the dish: " << endl;
    cin >> price;
    cout << "Enter quantity of the dish: " << endl;
    cin >> qty;
    dishes.push_back(Dish(dishname, price, qty, 1));


}
void modify_dish() {
    cout << "Enter dish name which needs to be modified: ";
    string s;
    int price, ind, qty;
    cin >> s;
    bool fd = 0;
    for (int i = 0;i < dishes.size();i++) {
        if (lower(s) == lower(dishes[i].name)) {
            fd = 1;
            ind = i;
            break;
        }
    }
    if (fd) {
        cout << "Do you wish to modify price if YES enter 1 all other numbers indicate NO" << endl;
        int i;
        cin >> i;
        if (i == 1) {
            cout << "Enter new price: " << endl;
            int pr;
            cin >> pr;
            dishes[ind].price = pr;
        }
        cout << "Do you wish to modify quantity if YES enter 1 all other numbers indicate NO" << endl;
        cin >> i;
        if (i == 1) {
            cout << "Enter new quantity: " << endl;
            int qty;
            cin >> qty;
            dishes[ind].quantity = qty;
        }

    }
}
void search_by_name() {
    searchdish();
}

void adminservices() {
    int num;
    bool exit = false;
    while (!exit) {
        cout << "Choose any one of the options below:" << endl;
        cout << "1. View available dishes and quantity" << endl;
        cout << "2. Add new dishes into menu" << endl;
        cout << "3. Modify a particular dish" << endl;
        cout << "4. Search for a particular dish using its name" << endl;
        cout << "5. Logout" << endl;
        cin >> num;
        if (num == 1) {
            view_dishes();
        }
        if (num == 2) {
            add_dishes_menu();
        }
        if (num == 3) {
            modify_dish();
        }
        if (num == 4) {
            search_by_name();
        }
        if (num == 5) {
            cout << "You are successfully logged out" << endl;
            exit = true;
        }
    }
}