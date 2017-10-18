#include<iostream>
#include <cmath>
#include <cstdlib>
using namespace std;


int Rand(){  //random number generator function
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
    while  (p > 50 || p < 1){ // checks to make sure user input fits criteria
        cout << "Please input a number between 1 and 50." << endl;
        cin >> p;
    }
    c = Rand(); //assign random number to c so that we can use it
    
    while (c != p){ //making sure that it only runs when both user number and random number are not equal
    if(p > c){ // to check is number is too big
        for (int i = 0; i < 5; i++ ){ //used to print out 5..4..3..2..1 one at a time to make it more dramatic
        cout << 5 - i << "..." << endl;
        }
        cout << "Your number is too big!" << endl;
        cout << "Try again!" << endl;
        cin >> p;
    }
    else { //check if number is too small
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