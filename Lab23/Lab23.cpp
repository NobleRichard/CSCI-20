#include<iostream>
#include<string>
#include <cmath>
#include <cstdlib>
using namespace std;

void Switcheroo(int& little, int& big){
    int s = 0;
    if(little > big){  //in order to swtich things up we need to see if we even need to
        s = little;
        little = big;
        big = s;
        return;
    }
    return;
}

void Rand(int small, int huge){
    
    
    Switcheroo( small, huge ) ;
    srand(time(0));
    int x = 0;
    x = rand () % (huge-small) + small + 1;
    cout << "Your random number between " << small << " and " << huge << " is: " << x << endl;
}




int main(){
    int Num1 = 0;
    int Num2 = 0;
    
    cout << "Enter two numbers and I will give you a number between the both of them." << endl;
    cin >> Num1;
    cin >> Num2;
    

    Rand(Num1, Num2);
    
    return 0;
}


/*
Your random number between 1 and 10 is: 7


*/
