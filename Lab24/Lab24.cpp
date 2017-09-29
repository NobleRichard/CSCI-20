#include<iostream>
#include<string>
#include <cmath>
#include <cstdlib>
using namespace std;


int Rand(int little, int big){  //gives random number 
    int s = 0;
    if(little > big){  //in order to swtich things up we need to see if we even need to
        s = little;
        little = big;
        big = s;
       
    srand(time(0));
    int x = 0;
    x = rand () % (big-little) + little + 1; //this way it makes the random number between the two inputed numbers
    cout << "Your random number between " << little << " and " << big << " is: " << x << endl;
       
        return x;
    }
   else{ 
   srand(time(0));
    int x = 0;
    x = rand () % (big-little) + little + 1; //this way it makes the random number between the two inputed numbers
    cout << "Your random number between " << little << " and " << big << " is: " << x << endl;
    return x;
}
}

double PoundsToKilo(double poundtokilo){
    return poundtokilo * 0.453592;
}

double KilogramPound(double kilotopound){
    return kilotopound * 2.20462;
}

int main(){
    int holder = 0;
    holder = Rand(78, 22);
    
    double kilo = 0;
    cout << "Input your weight in pounds." << endl;
    cin >> kilo;
    kilo = PoundsToKilo(kilo);
    cout << kilo << endl;
    
    double pound = 0;
    cout << "Input a certain amount of kilos." << endl;
    cin >> pound;
    pound = KilogramPound(pound);
    cout << pound << endl;
    
    return 0;
}