/* Write a program that reads in a product computation of the
following form:    N0 * N1 * N2 * N3 * â€¦ * Nn =    
and returns the product of the given ints,   
along with the number of terms in the product.    
Note that you don't know how many integer values the user    
will enter until they enter an equal sign (=).     
Example:   
Please enter a product to be computed, followed by an = sign.   
: 4 * 56 * 2 * 7 * 4 =    
The product of the 5 numbers entered is 12544  */ 
#include <iostream>
using namespace std; 
int main(){
        // initialization
        int product = 1;
        int numValues = 0;
  // counts number of valid numbers entered
        int number = 1;        
        char oper;
         // read next pair
            cout << "Enter product like 2 * 3 * 4 = " << ": " << endl;
          while (oper != '=') {
              product = product * number;
              numValues = numValues + 1;
              cin >> number >> oper;
         }
         
         cout << "The product of the " << numValues << " entered is " << product * number << endl;
         return 0;
} 


//Correct output

//4 * 5 * 6 =

//The product of the 3 entered is 120