#include<iostream>
#include<cmath>
using namespace std;

struct Windchill {
    double velocity = 0.0;
    double temp = 0.0;
    double OldWindChill = 0.0;
    double NewWindChill = 0.0;
    double WindDifference = 0.0;
};

int main (){
    
    Windchill wind1, wind2, wind3;
    
    
    cout << "Input velocity of wind in order to get windchill information." << endl;
    cin >> wind1.velocity;
    
    cout << "Input the temperature of the location." << endl;                                                                 
    cin >> wind1.temp;
    
    wind1.OldWindChill = 0.082 * (3.71 * sqrt(wind1.velocity) + 5.81 - 0.25 * wind1.velocity) * (wind1.temp - 91.4) + 91.4;                           
    wind1.NewWindChill = 35.74 + 0.6215 * wind1.temp - 35.75 * pow(wind1.velocity, 0.16) + 0.4275 * wind1.temp * pow(wind1.velocity, 0.16);
    wind1.WindDifference = abs(wind1.OldWindChill - wind1.NewWindChill);
   
    cout << "Wind Speed         Old Formula     New Formula    WindChill Difference " << endl;
    cout << wind1.velocity << "                   " << wind1.OldWindChill << "        " << wind1.NewWindChill << "           " << wind1.WindDifference << endl;
    
    /*
      Wind Speed         Old Formula     New Formula    WindChill Difference 
          4                29.8244         25.767           4.05737
         10                27.0757         32.713           5.6373        
          2                98.8446        105.711           6.8664
      
      
    */
    
    
    
    return 0;
}