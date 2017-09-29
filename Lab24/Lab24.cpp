#include<iostream>
#include<string>
#include <cmath>
#include <cstdlib>
using namespace std;


int Rand(int little, int big){  //gives random number 
    int s = 0; // the scope for this varible will only be this function. It will never know life outisde of thsi function. Its all it knows
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

double PoundsToKilo(double poundtokilo){ //bring in user inputed pound and switch to kilo  poundtokilo will stay in this function forever. It doesn't know if  its in hell or heaven. For it is a number that has no sense of life
    return poundtokilo * 0.453592;  //returns the pound to kilo
}

double KilogramPound(double kilotopound){ //bring in user inputed kilo and swtich to pound kilotopound stays in the scope of the function KilogramToPound
    return kilotopound * 2.20462;  //returns the kilo to pound
}

int main(){
    double holder = 0;
    holder = Rand(78, 22);
 
    double kilo = 0;
    kilo = holder;
    kilo = PoundsToKilo(kilo);   //calls function and then function returns the pounds but in kilos
    cout << kilo << endl;  //output the now kilo
    superholder = kilo;
    
    double pound = 0;
    pound = kilo;
    pound = KilogramPound(pound); //calls function and then function returns the kilo but in pounds
    cout << pound << endl;  //output the now pound
    
    cout << "I bet " << holder << "lbs is equal to " << pound << "lbs." << endl;
    
    return 0;
}