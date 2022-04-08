#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>
#include "constants.cpp"
using namespace std;

void view_dishes(){
    cout << "Dishes available are: " << endl;
    cout << std::left << std::setw(20) << "Dish name" << internal << setw(20) << "Price" <<setw(20) << "Quantity Available"<< endl;
    for(int i=0;i<dishes.size();i++){
        cout << std::left << std::setw(20) << dishes[i].name << internal << setw(20) << dishes[i].price
        << internal << setw(20) << dishes[i].quantity << endl;
    }

}
void add_dishes_menu()
{
    string dishname;
    int price,qty;
    cout<<"enter dish name "<<endl;
   cin.ignore(256, '\n');
getline(cin, dishname, '\n');
    cout<<"enter price of the dish"<<endl;
    cin>>price;
    cout<<"Enter quantity of the dish"<<endl;
    cin>>qty;
     dishes.push_back(Dish(dishname,price,qty,0));


}
void modify_dish()
{
  cout<<"Enter dish name which needs to be modified";
  string s;
  int price ,ind,qty;
  cin>>s;
  bool fd=0;
  for(int i=0;i<dishes.size();i++)
  {
      if(lower(s)==lower(dishes[i].name))
      {
          fd=1;
          ind=i;
          break;
      }
  }
  if(fd)
  {
      cout<<"Do you wish to modify price if YES enter 1 all other numbers indicate NO"<<endl;
      int i;
      cin>>i;
      if(i==1)
      {
         cout<<"enter price"<<endl;
         int pr;
         cin>>pr;
         dishes[i].price=pr;
      }
     cout<<"Do you wish to modify qty if YES enter 1 all other numbers indicate NO"<<endl;
     cin>>i;
     if(i==1)
     {
         cout<<"enter quantity"<<endl;
         int qty;
         cin>>qty;
         dishes[i].quantity=qty;
     }

  }
}
void search_by_name()
{
  string dishname;
    bool notfound = true;
    cout << "Enter the dish name to search: ";
  cin.ignore(256, '\n');
getline(cin, dishname, '\n'); //string s=lower("hi");
    for(int i=0;i<dishes.size();i++){
        string t_name=dishes[i].name;
        if(lower(t_name) == lower(dishname)){
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

void adminservices(){
    int num;
    bool exit = false;
    while(!exit){
    cout << "Choose any one of the options below:" << endl;
    cout << "1. View available dishes and quantity" << endl;
    cout << "2. add new dishes into menu" << endl;
    cout << "3. modify dishes" << endl;
    cout << "4. search dishes by name" << endl;
    cout << "5. Logout" << endl;
    cin >> num;
    if(num == 1){
        view_dishes();
    }
   if(num == 2){
        add_dishes_menu();
    }
    if(num == 3){
        modify_dish();
    }
    if(num == 4){
        search_by_name();
    }
    if(num == 5){
        cout << "You are successfully logged out" << endl;
        exit = true;
    }
}
}