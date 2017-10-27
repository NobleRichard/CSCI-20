#include<iostream>
#include<cmath>
#include <cstdlib>
using namespace std;

class Computer{
    private:
    int num_; //variable that will hold the number they are on
    bool question_; //should roll?
    public:
    Computer(){  //constructor default
        num_ = 0;
    }
    void RollDie(); //will roll die and keep rolling until they say stop or roll 0
    bool ShouldRoll();
    int PrintScore();
};

class Person{
  private:
  int count_;
  public:
    Person(){
        count_ = 0;
    }
    void SetDie(int x);
    int PrintPoints();
};



int main(){
    Computer comp;
    Person per;
    srand(time(0));
    char choice;
    cout << "Let's Play Pig!" << endl;
    cout << "Since I am the superior computer Hal. I will allow you to go first." << endl;
    for ( int i = 0; i < 5; i++){
        cout << 5 - i << "....." << endl;
    }
     int holding = 0;
        int showing = 0;
        showing = (rand () % 5 )+ 1;
        cout << "You rolled a " << showing << endl;
        if(showing != 1){
            cout << "Would you like to continue rolling? (y/n)" << endl;
            cin >> choice;
            while(choice == 'y'){
                holding = holding + showing;
                showing = (rand () % 5 )+ 1;
                cout << "You rolled a " << showing << endl;
                    if(showing != 1){
                    cout << "Would you like to continue rolling? (y/n)" << endl;
                    cin >> choice;
                    }
                    else{
                        holding = showing;
                        int x;
                        x = per.PrintPoints() + holding;
                        per.SetDie(x);
                        cout << "You now have " << per.PrintPoints() << " points." << endl;
                    }
            }
        }
        else{
        cout << "Oh darn you get no points this time." << endl;
        cout << "Your score is " << per.PrintPoints() << endl;
        }
          
    return 0;
}





void Computer::RollDie(){
    int computerdice;
    int holder = 0;
    question_= true;
    while (question_== true|| computerdice != 1 || num_ != 100){//if conditions true then run roll
        computerdice = (rand () % 5 )+ 1;
        if(computerdice != 1){
            holder = holder + computerdice; //adds die number to already existing number
            if(num_ >= 100){ // will check if computer won
                cout << "The computer won. You lost. It's ok. You can cry later." << endl;
                question_ = false;
            }
            else{
                question_ = ShouldRoll();
            }
        }
        else {
            cout << "Computer rolled a 0. No points will be added this turn." << endl;
            holder = 0;
            cout << "I'll hold. I have " << PrintScore() << " points now."<<endl;
        }
        num_ = num_ + holder;//this way only if the computer holds will they keep points        
        cout << "I'll hold. I have " << PrintScore() << " points now."<<endl;
    }
    
}

bool Computer::ShouldRoll(){
    int YesorNo = rand () % 1;
    if(YesorNo == 1){
        
        return true;
    }

    else
    return false;
}

int Computer::PrintScore(){
    return num_;
}

void Person::SetDie(int points){
     count_ = points;  
}   
    


int Person::PrintPoints(){
    return count_;
}


