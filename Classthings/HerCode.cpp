#include <iostream>
using namespace std;

class Salary
{
    private: 
        double annual_;
    public:
        void SetAnnualSalary(double salary)
        {
            annual_ = salary;
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
    Salary engineer;
    
    engineer.SetAnnualSalary(100000);
    engineer.GetAnnualSalary();
    engineer.Print();
    
    
    return 0;
}


//Comment the class per the class style guide
//Identify the following parts of the class
//      data field
//      mutator function
//      accessor function
//Create a main function that creates an object and runs all of the functions in order