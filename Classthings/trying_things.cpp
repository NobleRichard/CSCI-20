#include<iostream>
#include<string>
using namespace std;

int main(){
        srand(time(0));
    int YesorNo = rand () % 2;
    if(YesorNo == 1){
        cout << "1";
    }

    else{
    cout << "0";
    }
}

