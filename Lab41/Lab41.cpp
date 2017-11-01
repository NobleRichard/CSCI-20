#include<iostream>
using namespace std;


class ArrayTools{
    private:
    int array_[];
    public:
    ArrayTools(){
        for (int i = 0; i < 10; i++){
            array_[i] = 0;
        }
    }
    ArrayTools(int x[], int y){
        for (int i = 0; i < y; i++){
            array_[i] = x[i];
        }
    }
    int Find_min(int y, int z);//search the array between two sizes to return the location of the minimum value in that part of the array
    int Find_max(int y, int z);//search the array between two sizes to return the location of the maximum value in that part of the array
    int Find_sum();//return the sum of all values in the array
    int Num_even_odd();//count the number of even and odd numbers in the array
    int Search(int s);// search the array for a specified value and return the location if the value is found and -1 otherwise
    bool Is_sorted();//check to see of the array is sorted in ascending order.
    int Print(){ //print the array values on the screen in order
        for (int i = 0; i < 10; i++){
            cout << array_[i] << endl;
        }
    };
};
int main(){
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    ArrayTools a(myArray,SIZE);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}

int ArrayTools::Find_min(int y, int z){
    int x = array_[0];
    for (int i = y; i <= z; i++){
        if(x > array_[i]){
            x = array_[i];
        }
    }
    return x;
}

int ArrayTools::Find_max(int y, int z){
    int x = array_[0];
    for (int i = y; i <= z; i++){
        if(x < array_[i]){
            x = array_[i];
        }
    }
    return x;
}

int ArrayTools::Find_sum(){
    int x = 0;
    for (int i = 0; i < 10; i++){
        x += array_[i];
    }
    return x;
}

int ArrayTools::Num_even_odd(){
    int even = 0;
    int odd = 0;
    
    for(int i = 0; i < 10; i++){
        if ((array_[i] % 2) == 1){
            odd++;
        }
        else{
            even++;
        }
    }
}

bool ArrayTools::Is_sorted(){
    int x = 0;
    bool bigger = true;
    for(int i = 0; i < 10; i++){
        if(array_[i] > array_[i + 1]){
            bigger = false;
        }
        else{
            bigger = true;
        }
    }
    return bigger;
}

int ArrayTools::Search(int s){
    int x = 0;
    for (int i = 0; i < 10; i++){
        if (array_[i] == s){
            x = i;
        }
        else {
            x = -1;
        }
    }
    return x;
}



