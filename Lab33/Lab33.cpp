#include<iostream>
#include <cmath>
#include <cstdlib>
using namespace std;


int Rand(){
    srand(time(0));
    int x = 0;
    x = rand () % 50;
   return x; 
}

int main(){
    int p = 0;
    int c = 0;
    cout << "Guess my number. Input a number 1 - 50." << endl;
    cin >> p;
    while  (p > 50 || p < 1){
        cout << "Please input a number between 1 and 50." << endl;
        cin >> p;
    }
    c = Rand();
    
    while (c != p){
    if(p > c){
        for (int i = 0; i < 5; i++ ){
        cout << 5 - i << "..." << endl;
        }
        cout << "Your number is too big!" << endl;
        cout << "Try again!" << endl;
        cin >> p;
    }
    else {
        for (int i = 0; i < 5; i++ ){
        cout << 5 - i << "..." << endl;
        }
        cout << "Your number too small" << endl;
        cout << "Try again!" << endl;
        cin >> p;
    }
    }
    
        for (int i = 0; i < 5; i++ ){
        cout << 5 - i << "..." << endl;
        }
    cout << "Just Right!" << endl;
    
    return 0;
}