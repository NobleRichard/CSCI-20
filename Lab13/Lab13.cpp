#include <iostream>
using namespace std;

    int years;
    int future;
    
    int sec = 60;
    int minu = 60;
    int hour = 24;
    int days = 365;
    
    double per = 12;
    int pop = 325765736; //population 
    int net = 1; //number of people added every second p/s
    double netgain ; // net gain per year
    
    int gain; // population added with population over years

int main() {
    
    cout << "The population of the United States on August 30th, 2017 was 325,765,736 people." << endl;
    cout << "Type in how many years into the future you would like to travel, so that you may view the population number there." << endl;
    cin >> years;
    
    netgain = (net / per * sec * minu * hour * days); 
    gain = pop + (years * netgain);
    
    future = 2017 + years;
    
    cout << "There will be approximately, " << gain << " people alive in the United States in the year " << future << "." << endl;
    
    
    
    return 0;
}