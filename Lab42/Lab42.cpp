/*This program mimics an online shopping cart.  
You are the proprietor of an online shop and 
have to keep track of inventory, price and the
user’s shopping cart.  Create a menu of at least 
10 items for the user to choose from.  Identify 
your starting inventory and price.  As the user 
an item, you should remove that item from inventory 
(subtract 1) and add the price to a total.  When the
user is done adding items to their cart, you should 
output a statement of what they have ordered and the 
total cost of their purchases.  Do not allow you 
inventory to go below 0.*/
#include<iostream>
#include<string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
 srand(time(0));
 string storageName[10] = {"chicken", "juice", "milk", "rice", "peppers", "chips", "eggs", "oranges", "cheese", "candy"};
 int Storagenum[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int StorageStock[10];
 float StoragePrice[10] = {5.67, 2.36, 3.25, 3.75, .58, 2.00, 4.56, .90, 4.37, 1.25};
 
 int ShopperItems[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
 int ShopperAmounts[10];
 int x = 0;
 
 

for(int i = 0; i < 10; i++){//assigns amount of inventory
    StorageStock[i] = rand() % 10 + 1; 
}
 cout << "This is what we have in stock, what its item number is, how many of the item we have in stock, and how much it costs." << endl;
 for (int j = 0; j < 10; j++){ //prints out the inventory
    cout << storageName[j] << "      " << Storagenum[j] << "       " << StorageStock[j] << "    $" << StoragePrice[j] << endl;
 }

cout <<"Would you like to buy anything? (y/n)" << endl;
char decision = 'y';
cin >> decision;
while(decision == 'y'){
    cout << "What would you like to buy?" << endl;
    string choice;
    cin >> choice;
    
    for (int i = 0; i < 10; i++){
        if(storageName[i] == choice) {
            cout << "You want to buy " << storageName[i] << ". How many would you like to add to cart.? << endl;
            cin >> x;
            if(StorageStock[i] >= x){
                ShopperAmounts[i] = x; //add to the shopping cart
                StorageStock[i] = StorageStock[i] - x; //subtract from the stock inventory
            }
            else{
                cout << "We don't have that many items in stock. Take an amount we have please." << endl;
                cin >> x;
                ShopperAmounts[i] = x; //add to the shopping cart
                StorageStock[i] = StorageStock[i] - x; //subtract from the stock inventory
            }
        }
    }
    
}
  
    return 0;
}



