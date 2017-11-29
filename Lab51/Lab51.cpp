#include <iostream> 
//#include <iostream> //don't need two iostream libraries
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;
    char * name = new char[10]; //creating a new pointer array that can be accessed

    cout << "Please enter a 10 letter word or less" << endl; 
    cin >> name; 
    cout << name;
/*
    char * head  = name; //the pointer head now holds the value given to the variable name
    char * tail = name;  //the pointer tail also holds the value that was given to name
    nameLength = strlen(*name);  //gives you the length of the "string" name, 

    cout << "Your word is " << firststr << endl;

    if (nameLength<10) 
    {
         while (*head != '\0') //checking to see if the if statement is true. That the value of head is not null so that it can go through the entire word
         {
                cout << *head;   //prints out the value in head
                head++;          
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl;

     tail = &name[strlen(name) - 1]; // tails is given the value of the address of name[] and inside the brackets go the second to last thing in character array

     if (nameLength < 10)
     {
          while (tail != name)
          {
                 cout << *tail; //outputing the value of tail which is now the last letter of the char string 
                 tail--;
          }
     }
     cout << endl;

     head = name;
     tail = &name[strlen(name) - 1]; //again sets the tail as the adress of name 

     head++;
     tail--;

     if (*head == *tail) //checks the 
     {
         cout << "It is an palindrome!" << endl;
     }
     else
     {
         cout << "It is not an palindrome" << endl;
     }
*/
     return 0; 
}