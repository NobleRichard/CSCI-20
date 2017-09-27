#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

void Rand(){
    srand(time(0));
    int x = 0;
    x = rand () % 100-50;
    cout << "Your random number is: " << x << endl;
}

int main(){
    
    Rand();
    
    return 0;
}