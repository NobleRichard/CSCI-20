//Richard Gutierrez
// 10-31-17
//This project was a colaboration between Evan Drake, Carter Dishman, and Richard Gutierrez.

/*  PROBLEM STATEMENT
This program is responsible for creating user names for a new website you have created.
It should accept a first name of up to 10 characters and a last name of up to 20 characters. 
It should tell the user if the name is larger than the max size.
It should also determine if the names are the same and output a warning.  
After checking these things, it should create three different user name options 
(for example: apbrowne; aprilbrowne; abrowne).*/



#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<cctype>



using namespace std;

int main() {            
    string FirstName;           // first name string
    string LastName;            // last name string
    bool Name = false;          // first bool
    bool Name2 = false;         // second bool




while(Name == false){                                             // loop to check first name.
cout << "Please enter your first name" << endl;
cin >> FirstName;

    if (FirstName.length() > 10){                                 //if statement that checks for length of string.
        cout << "Please enter you name again(20 characters max):";
        cin >> FirstName;
        if(FirstName.length() <= 10){
            Name = true;
        }
            
        }
    else{
        Name = true;

    }
}//closes the first while loop
while(Name2 == false){                                             // loop to check first name.
cout << "Please enter your last name" << endl;
cin >> LastName;

    if (LastName.length() > 20){                                   // checking string length.
        cout << "Please enter you name again(20 characters max):";
        cin >> LastName;
        if(LastName.length() <= 20){                             // ending the loop.
            Name2 = true;
        }
            
        }
    else{
        Name2 = true;                                             // ending the loop.
    }

if(FirstName == LastName){
    cout << "WARNING! First name and last name are the same!" << endl;
}

    cout << endl;
    cout << endl;                                                           // posssible username options.
    cout << "Possible Username options:" << endl;
    cout << FirstName[0] << LastName << endl;
    cout << FirstName[0] << FirstName[1] << LastName << endl;
    cout << FirstName[0] << FirstName[1] << FirstName[2] << LastName << endl;
    }    
}