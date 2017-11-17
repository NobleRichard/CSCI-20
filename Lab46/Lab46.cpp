//Richard Gutierrez
/*  PROBLEM STATEMENT
Write a program that will read a student’s grades and output an HTML page (Links to an external site.)
Links to an external site. to output a student’s transcript including semester GPA and overall GPA.
The program should ask for an input file which includes the student’s name, 
number of classes, and list of grades (A, B, C, D, F) and class hours.
It reads the data and calculates the semester GPA and overall GPA. */
#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<fstream>
using namespace std;


 


int main(){
    string name1[2];
    string name2[2];
    string name3[2];
    
    int classAmount[3];
    
    int classUnits1[7];
    int classUnits2[7];
    int classUnits3[7];
    
    char grades1[7];
    char grades2[7];
    char grades3[7];
    
    ifstream fir; //input file stream
    fir.open("intput.txt"); //opens file
    
    fir >> name1[0];  //input all the info for first person
    fir >> name1[1];
    fir >> classAmount[0];
    fir >> classUnits1[0];
    fir >> grades1[0];
    fir >> classUnits1[1];
    fir >> grades1[1];
    fir >> classUnits1[2];
    fir >> grades1[2];
    fir >> classUnits1[3];
    fir >> grades1[3];    
    
    fir >> name2[0];  //input all the info for second person
    fir >> name2[1];
    fir >> classAmount[1];
    fir >> classUnits2[0];
    fir >> grades2[0];
    fir >> classUnits2[1];
    fir >> grades2[1];
    fir >> classUnits2[2];
    fir >> grades2[2];
    fir >> classUnits2[3];
    fir >> grades2[3];  
    
    fir >> name3[0];  //input all the info for third person
    fir >> name3[1];
    fir >> classAmount[2];
    fir >> classUnits3[0];
    fir >> grades3[0];
    fir >> classUnits3[1];
    fir >> grades3[1];
    fir >> classUnits3[2];
    fir >> grades3[2];
    fir >> classUnits3[3];
    fir >> grades3[3];  
    fir >> classUnits3[4];
    fir >> grades3[4];  
    
    fir.close(); //closes file
    
    
    for (int i = 0; i < 6; i++){
        
        
        
    }
    
    
    
    
    return 0;
}
