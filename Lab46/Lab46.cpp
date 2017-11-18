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
    string name1[2]; //holds names
    string name2[2];
    string name3[2];
    
    int classAmount[3]; //holds amount of classes
    
    int classUnits1[7]; //holds amount of units
    int classUnits2[7];
    int classUnits3[7];
    
    char grades1[7]; //holds grades
    char grades2[7];
    char grades3[7];
    
    double GPA[4]; //reusable array to hold grades before getting GPA
    double GPA1 = 0; //holds GPA
    double GPA2 = 0;
    double GPA3 = 0;
    
    ifstream fir; //input file stream
    ofstream fin; //ouptut file stream
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
    
    for (int i = 0; i < 5; i++){ //for loop to figure out grade points
        if(grades1[i] == 'A'){
            GPA[i] = 4;
        }
        else if(grades1[i] == 'B'){
            GPA[i] = 3;
        }
        else if(grades1[i] == 'C'){
            GPA[i] = 2;
        }
        else if(grades1[i] == 'D'){
            GPA[i] = 1;
        }
        else{
            GPA[i] = 0;
        }
    }
    for(int i = 0; i < 5; i++){  //adds up GPA points so that it can divide later
        GPA1 += GPA[i];
    }
    GPA1 = GPA1 / classAmount[0]; //divide grade points to get GPA
    
    for (int i = 0; i < 5; i++){ //repeat
        if(grades2[i] == 'A'){
            GPA[i] = 4;
        }
        else if(grades2[i] == 'B'){
            GPA[i] = 3;
        }
        else if(grades2[i] == 'C'){
            GPA[i] = 2;
        }
        else if(grades2[i] == 'D'){
            GPA[i] = 1;
        }
        else{
            GPA[i] = 0;
        }
    }
    for(int i = 0; i < 5; i++){
        GPA2 += GPA[i];
    }
    GPA2 = GPA2 / classAmount[1];
    
    for (int i = 0; i < 5; i++){ //repeat
        if(grades3[i] == 'A'){
            GPA[i] = 4;
        }
        else if(grades3[i] == 'B'){
            GPA[i] = 3;
        }
        else if(grades3[i] == 'C'){
            GPA[i] = 2;
        }
        else if(grades3[i] == 'D'){
            GPA[i] = 1;
        }
        else{
            GPA[i] = 0;
        }
    }
    for(int i = 0; i < 5; i++){
        GPA3 += GPA[i];
    }
    GPA3 = GPA3/ classAmount[2];
    
    fin.open("Lab46.html"); //opens html

    fin << "Student's name: " << name1[0] << " " << name1[1] << endl;
    fin << "GPA: " << GPA1 << endl;
    
    fin << "Student's name: " << name2[0] << " " << name2[1] << endl;
    fin << "GPA: " << GPA2 << endl;
    
    fin << "Student's name: " << name3[0] << " " << name3[1] << endl;
    fin << "GPA: " << GPA3 << endl;
    GPA1 = (GPA1 + GPA2 + GPA3)/ 3;
    fin << "Overall GPA: " << GPA1;
    
    
    fin.close(); //closes html
    
    return 0;
}
