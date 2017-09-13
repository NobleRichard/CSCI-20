/*
*Richard Gutierrez
*Lab16
*9/12/17
*/
#include<iostream>
#include<string>
using namespace std;

struct Stock{  //This is where I create the objects
  string name;
  char sector;
  double current_share_price;
  int number_of_shares_owned;
  double total_stock_value;
};

int main(){
    Stock stock1, stock2, stock3, stock4;
    cout << "Please enter the name of the first company."<< endl;
    cin >> stock1.name;
    cout << "For the sector give the company its corresponding letter."<< endl;
    cout << "A - Auto Companies, C - Consumer Products, F - Financial/Insurance, I - Industrial, T - Technology." << endl;
    cin >> stock1.sector;
    cout << "Input the current price of the shares." << endl;
    cin >> stock1.current_share_price;
    cout << "Input the number of shares owned." << endl;
    cin >> stock1.number_of_shares_owned;
    
    stock1.total_stock_value = stock1.current_share_price * stock1.number_of_shares_owned;
    
    cout << "Please enter the name of the second company."<< endl;
    cin >> stock2.name;
    cout << "For the sector give the company its corresponding letter."<< endl;
    cout << "A - Auto Companies, C - Consumer Products, F - Financial/Insurance, I - Industrial, T - Technology." << endl;
    cin >> stock2.sector;
    cout << "Input the current price of the shares." << endl;
    cin >> stock2.current_share_price;
    cout << "Input the number of shares owned." << endl;
    cin >> stock2.number_of_shares_owned;
    
    stock2.total_stock_value = stock2.current_share_price * stock2.number_of_shares_owned;
    
    cout << "Please enter the name of the third company."<< endl;
    cin >> stock3.name;
    cout << "For the sector give the company its corresponding letter."<< endl;
    cout << "A - Auto Companies, C - Consumer Products, F - Financial/Insurance, I - Industrial, T - Technology." << endl;
    cin >> stock3.sector;
    cout << "Input the current price of the shares." << endl;
    cin >> stock3.current_share_price;
    cout << "Input the number of shares owned." << endl;
    cin >> stock3.number_of_shares_owned;
    
    stock3.total_stock_value = stock3.current_share_price * stock3.number_of_shares_owned;
    
    cout << "Please enter the name of the fourth company."<< endl;
    cin >> stock4.name;
    cout << "For the sector give the company its corresponding letter."<< endl;
    cout << "A - Auto Companies, C - Consumer Products, F - Financial/Insurance, I - Industrial, T - Technology." << endl;
    cin >> stock4.sector;
    cout << "Input the current price of the shares." << endl;
    cin >> stock4.current_share_price;
    cout << "Input the number of shares owned." << endl;
    cin >> stock4.number_of_shares_owned;
    
    stock4.total_stock_value = stock4.current_share_price * stock4.number_of_shares_owned;
    
    double x = stock4.total_stock_value + stock1.total_stock_value + stock2.total_stock_value + stock3.total_stock_value;
    
    cout << "Stock Name      No of Shares     Current Value    Total Value" << endl;
    cout << "__________      ____________     _____________    ___________" << endl;
    cout << stock1.name << stock1.sector << "          " << stock1.number_of_shares_owned << "          " << stock1.current_share_price << "         " << stock1.total_stock_value << endl;
    cout << stock2.name << stock2.sector << "          " << stock2.number_of_shares_owned << "          " << stock2.current_share_price << "         " << stock2.total_stock_value << endl;
    cout << stock3.name << stock3.sector << "          " << stock3.number_of_shares_owned << "          " << stock3.current_share_price << "         " << stock3.total_stock_value << endl;
    cout << stock4.name << stock4.sector << "          " << stock4.number_of_shares_owned << "          " << stock4.current_share_price << "         " << stock4.total_stock_value << endl;
    cout << "Total Portfolio: $" << x << endl;
    
    
    return 0;
}