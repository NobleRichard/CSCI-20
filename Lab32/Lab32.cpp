#include<iostream>
#include<string>
using namespace std;

int main(){
string n;
string m;
char status;
double grossWages;
double taxes;
double withheld;
double moneyowed;
double moneyentitled;


cout << "Lets do Taxes. What is your first name." << endl;
cin >> n;
cout << "What is your second name." << endl;
cin >> m;
cout << "Type 's' for single or 'm' for married. " << endl;
cin >> status;
cout << "What is your gross income?" << endl;
cin >> grossWages;
cout << "How much money was withheld?" << endl;
cin >> withheld;

grossWages = grossWages - 4050;

switch(status){
case 's':
    grossWages = grossWages - 6350;
    if(grossWages <= 9325){
        taxes = grossWages * .9;
    }
    else if(grossWages >= 9326 && grossWages <= 37950){
        taxes = (grossWages - 9325) * .15 + 932.50;
    }
    
    else if(grossWages >= 37951 && grossWages <= 91900){
        taxes = (grossWages - 37950) * .25 + 5226.25;
    }
    else if(grossWages >= 91901 && grossWages <= 191650){
        taxes = (grossWages - 91900) * .28 + 18713.75;
    }
    else if(grossWages >= 191651 && grossWages <= 416700){
        taxes = (grossWages - 191650) * .33 + 46643.75;
    }
    else{
        taxes = (grossWages - 416700) * .396 + 120910.25;
    }
    
    break;

case 'm':
    grossWages = grossWages - 12700;
    if(grossWages <= 18650){
        taxes = grossWages * .9;
    }
    else if(grossWages >= 18651 && grossWages <= 75900){
        taxes = (grossWages - 18650) * .15 + 1865;
    }
    
    else if(grossWages >= 75901 && grossWages <= 153100){
        taxes = (grossWages - 75900) * .25 + 10452.50;
    }
    else if(grossWages >= 153101 && grossWages <= 233350){
        taxes = (grossWages - 153100) * .28 + 29752.50;
    }
    else if(grossWages >= 233351 && grossWages <= 41670){
        taxes = (grossWages - 233350) * .33 + 52220.50;
    }
    else{
       taxes = (grossWages - 416700) * .396 + 112728; 
    }
    break;
}

if (taxes == withheld){
    moneyowed = 0;
    moneyentitled = 0;
}
else if(taxes > withheld){
    moneyowed = taxes - withheld;
    moneyentitled = 0;
}
else {
    moneyentitled = withheld - taxes;
    moneyowed = 0;
}
cout << "Name:" << n << " " << m << endl;
cout << "Total Gross Adjusted Income: $" << grossWages << endl;
cout << "Total Tax owed: $" << moneyowed << endl;
cout << n << " is entitled to a REFUND of $x:" << moneyentitled << endl;

    return 0;
}






