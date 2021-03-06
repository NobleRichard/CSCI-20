#include <iostream>
using namespace std;

class Salary
{
    private: 
        double annual_;
    public:
        Salary() //constructor
        {
            annual_ = 0;    
        }
        Salary(int x){
            if (x > 0){
                annual_ = x;
            }
            else
                annual_ = 0;
        }
        Salary(double salary){
            if (salary > 0){
                annual_ = salary;
            }
            else
                annual_ = 0;
        }
        void SetAnnualSalary(double salary) 
        {
            if (salary > 0){
                annual_ = salary;
            }
            else
                annual_ = 0;
        }
        double GetAnnualSalary()
        {
            return annual_;
        }
        void Print()
        {
             cout<<"$"<<annual_<<endl;
        }
};

int main(){
    
    
    Salary Art(2000);
    Art.Print();
    
    
    return 0;
}

//Comment the class per the class style guide
//Identify the following parts of the class
//      constructor
//      overload the constructor to accept an input for salary 
//      and set the salary to the input
//Create a main function that creates an object with no input
//  creates an object with input that is negative
//  and creates an object with input that is appropriate.
//and outputs the salary for each object.