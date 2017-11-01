#include<iostream>
#include<cmath>
#include <cstdlib>
using namespace std;      //TRY THINGS

class Computer{
    private:
    int num_; //variable that will hold the number they are on
    bool question_; //should roll?
    public:
    Computer(){  //constructor default
        num_ = 0;
    }
    void RollDie(); //will roll die and keep rolling until they say stop or roll 0
    bool ShouldRoll();//ask if the computer should roll returns a true or false
    int PrintScore();//print sout score for computer
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
    int r = 1;
    srand(time(0));
    char choice;
    bool stop = false;
    cout << "Let's Play Pig!" << endl;
    cout << "Since I am the superior computer Hal. I will allow you to go first." << endl;
    for ( int i = 0; i < 5; i++){ //countdown before game starts
        cout << 5 - i << "....." << endl;
    }
    while(comp.PrintScore() < 100 && per.PrintPoints() < 100){
        int holding = 0;
        int showing = 0;
        showing = (rand () % 6 ) + 1; //first die roll
        cout << "You rolled a " << showing << endl; 
        if(showing != 1){ //checking if the player rolled a 1 if they did it wont run 
            holding = holding + showing;
            cout << "You have " << holding << " points right now." << endl;
            cout << "Would you like to continue rolling? (y/n)" << endl;
            cin >> choice;
            stop = false;
            while(choice == 'y' && stop == false){ //after checking if they can roll lets them roll again
                
                showing = (rand () % 6 )+ 1;
                
                if(showing != 1){ //check to see they didnt roll a 1
                cout << "You rolled a " << showing << endl;
                holding = holding + showing;  //assigns number to certain integer so that I can assign it later
                cout << "You score right now is " << holding << endl;
                cout << "Would you like to continue rolling? (y/n)" << endl;
                cin >> choice;   
                }
                
                else if(showing == 1){
                stop = true; //to stop them if they rolled a 1
                cout << "Oh darn you rolled a "<< showing << " you get no points this time." << endl;
                holding = 0;
                cout << "Your score is " << per.PrintPoints() << endl;
                }
            }
        } //end of if loop 
        else{ //runs if the player rolls 1
        cout << "Oh darn you get no points this time." << endl;
        cout << "Your score is " << per.PrintPoints() << endl;
        }
        int x;
        x = per.PrintPoints() + holding;
        per.SetDie(x);
        cout << "You now have " << per.PrintPoints() << " points." << endl;
        
        //end of player turn
        
        comp.RollDie();    
        r++;
        cout << "Lets start round " << r << endl; 
        for ( int i = 0; i < 5; i++){ //countdown before game starts
        
        cout << 5 - i << "....." << endl;

    }
        
    }   
    if (comp.PrintScore() >= 100){
        cout << "The computer won." << endl;
    }      
    else if (per.PrintPoints() >= 100){
        cout << "You won!" << endl;
    }
    return 0;
}





void Computer::RollDie(){
    int computerdice = 0;
    int holder = 0;
    srand(time(0));
    question_= true;
    computerdice = (rand () % 6 )+ 1;
    if(computerdice != 1){
        while (question_== true && computerdice != 1){ //if conditions true then run roll
            cout << "The computer rolled a " << computerdice << endl;
            if(computerdice != 1){
                holder = holder + computerdice; //adds die number to already existing number
                cout << "The computer now has the score of " << holder << endl;
                question_ = ShouldRoll();
            }
            else{
                cout << "Computer rolled a 1. No points will be added this turn." << endl;
                holder = 0;
                cout << "The computer has " << PrintScore() << " points now."<<endl;
            }
            computerdice = (rand () % 6 )+ 1;
        }//end while loop
        
        if(question_ == false){
            cout << "The computer will hold. " << endl;
            num_ = num_ + holder;
            cout << "The computer now has " << PrintScore() << " points."<< endl;
        }
        else if(computerdice == 1){
        cout << "The computer rolled a " << computerdice << endl;
        cout << "They get 0 points this round." << endl;
        cout << "Their score is " << PrintScore() << " points." << endl;            
        }
    }//end if statement
    else{
        cout << "The computer rolled a " << computerdice << endl;
        cout << "They get 0 points this round." << endl;
        cout << "Their score is " << PrintScore() << " points." << endl;
    }
}





bool Computer::ShouldRoll(){
    int YesorNo = rand () % 2;
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