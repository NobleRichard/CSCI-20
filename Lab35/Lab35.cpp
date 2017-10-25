#include<iostream>
using namespace std;

 class TemperatureConverter{
     private:
     double kelvin_;
     public:
     TemperatureConverter(double x){
         kelvin_ = x;
     };
     TemperatureConverter(){
         kelvin_ = 0;
     }
     void SetTempFromKelvin(double x);
     double GetTempFromKelvin();
     double GetTempAsCelsius();
     double GetTempAsFahrenheit();
     void SetTempFromCelsius(double x);
     void SetTempFromFahrenheit(double x);
     void PrintTemperatures();
 };
 
void TemperatureConverter::SetTempFromKelvin(double x){ 
    kelvin_ = x; //constructs input to make kelvin
};

double TemperatureConverter::GetTempFromKelvin(){ 
    return kelvin_; //outputs kelvin
};
 
double TemperatureConverter::GetTempAsCelsius(){ 
    return  kelvin_ - 273.15; //outputs celsius
};

double TemperatureConverter::GetTempAsFahrenheit(){ 
    return  (9.0 / 5 * (kelvin_ - 273.15) + 32); //outputs fahrenheit
};

void TemperatureConverter::SetTempFromFahrenheit(double x){ 
    if (x < -459.67){ 
        x = -459.67; 
    } 
    kelvin_ = (5.0 * (x -32)/9) + 273.15; //converts fahrenheit to kelvin
}; 

void TemperatureConverter::SetTempFromCelsius(double x){ 
    if (x < -273.15){ //making sure celsius is larger than -273.15
        x = -273.15; 
    } 
    kelvin_ = x + 273.15; //converts celsius to kelvin
}; 

void TemperatureConverter::PrintTemperatures(){ 
    cout << "Your temperature in Kelvin is:" << GetTempFromKelvin() << endl; //print out kelvin
    cout << "Your temperature in Celsius is:" << GetTempAsCelsius() << endl; //print out celsius
    cout << "Your temperature in Fahrenheit is:" << GetTempAsFahrenheit() << endl; //print out fahrenheit
}; 


/*
Your temperature in Kelvin is:0
Your temperature in Celsius is:-273.15
Your temperature in Fahrenheit is:-459.67
Your temperature in Kelvin is:274
Your temperature in Celsius is:0.85
Your temperature in Fahrenheit is:33.53
400.15
Your temperature in Kelvin is:400.15
Your temperature in Celsius is:127
Your temperature in Fahrenheit is:260.6
32
Your temperature in Kelvin is:305.15
Your temperature in Celsius is:32
Your temperature in Fahrenheit is:89.6
32
Your temperature in Kelvin is:273.15
Your temperature in Celsius is:0
Your temperature in Fahrenheit is:32
*/