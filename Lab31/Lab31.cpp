#include<iostream>
using namespace std;

int main(){
    int sp = 0;
    int dp = 0;
    int gb = 0;
    int t = 0;
    int cost = 0;
    int line = 0;
    
    cout << "How many smart phones will be in your plan?" << endl;
    cin >> sp;
    cout << "How many dumb phones will be in your plan?" << endl;
    cin >> dp;
    cout <<  "How many GB do you need?" << endl;
    cin >> gb;
    cout << "How many tablets will be in your plan?" << endl;
    cin >> t;
    

    if(((sp <= 10 || dp <=10) && (dp + sp) <= 10) && gb >= 0 && t >= 0){
        cout << "ATT Unliumted Choice Plan" << endl;
        line = dp + sp;  
           if (line == 1 && t != 0 ){
               cost = 90 + 10 * t;
           }
           else if (line ==2 && t != 0 ){
               cost = 145 + 10 * t;
           }
           else {
               cost = 145 + 20 * line + 10 * t;
           }
        cout << "With this plan you would pay:$" << cost << endl;        
    }
    if((sp <= 10 || dp <=10) && gb >= 0 && t >= 0){
        cout << "ATT Family Plan" << endl;
         line = dp + sp;  
           if (gb == 1){
              cost = 30 + 10 * t + 20 * line;    
           }
           else if (gb >= 1 && gb <= 3){
               cost = 40 + 10 * t + 20 * line;
           }
           else if (gb >= 3 && gb <= 6){
               cost = 60 + 10 * t + 20 * line;
           }
           else if (gb >= 6 && gb <= 10){
               cost = 80 + 10 * t + 20 * line;
           }
           else if (gb >= 10 && gb <= 16){
               cost = 90 + 10 * t + 20 * line;
           }
           else if (gb >= 16 && gb <= 25){
               cost = 110 + 10 * t + 20 * line;
           }
        cout << "With this plan you would pay:$" << cost << endl;        
    }  
    if((sp <= 10 || dp <=10)  && gb >= 0 && t >= 0){
        cout << "Verizon Unlimted Plan" << endl;
        line = dp + sp;  
           if (line == 1 && t != 0 ){
               cost = 80 + 10 * t;
           }
           else if (line ==2 && t != 0 ){
               cost = 110 + 10 * t;
           }
           else {
               cost = 80 + 20 * line + 10 * t;
           }
        cout << "With this plan you would pay:$" << cost << endl;        
    }
    if((sp <= 10 || dp <=10)  && gb >= 0 && t == 0){
        cout << "Sprint Unlimted Plan" << endl;
          line = dp + sp;  
           if (line == 1){
               cost = 60;
           }
           else if (line ==2 ){
               cost = 100;
           }
           else {
               cost = 100 + 30 * line;
           }
        cout << "With this plan you would pay:$" << cost << endl;        
    }
    if((sp <= 10 || dp <=10)  && gb <= 2 && t == 0){
        cout << "Sprint 2GB Plan" << endl;
        line = sp + dp;
        cost = line * 40;
        cout << "With this plan you would pay:$" << cost << endl;        
    }
    else{
        cout << "No cell phone plan works for you at this moment." << endl;
    }
    return 0;
}

/*
How many smart phones will be in your plan?
2
How many dumb phones will be in your plan?
0
How many GB do you need?
5
How many tablets will be in your plan?
0
Sprint Unlimted Plan
With this plan you would pay:$100


How many smart phones will be in your plan?
2
How many dumb phones will be in your plan?
1
How many GB do you need?
15
How many tablets will be in your plan?
1
ATT Unliumted Choice Plan
With this plan you would pay:$215

*/

