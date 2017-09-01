#include <iostream>
using namespace std;

    int years;
    int future;
    
    int pop = 325765736; //population 
    int net = 2628000; //people gained per year
    int gain; // population added with population over years

int main() {
    
    cout << "The population of the United States on August 30th, 2017 was 325,765,736 people." << endl;
    cout << "Type in how many years into the future you would like to travel, so that you may view the population number there." << endl;
    cin >> years;
    gain = pop + (years*net);
    future = 2017 + years;
    cout << "There will be approximately " << gain << " people alive in the UNited States in the year " << future << "." << endl;
    
    
    
    return 0;
}