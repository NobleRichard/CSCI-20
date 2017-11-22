/*
Richard Gutierrez collaboration with EVAN DRAKE< CARTER DISHMAN
11/14/17
Assignemnt 4 b
This program will read in student answers in a new window 
for a test and compare 
the answers to the corresponding answer key
View in a new window for the test.  1 point is 
awarded for each correct answer, omitted answers get 0 
points, and incorrect answers deduct ¼ point.  The program 
should output to the screen and a file the student’s name, 
list of missed questions, and overall grade on the exam.*/

#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<iomanip>
#include<fstream>
using namespace std;

class Grades{
    private:
    string ans1_;
    string ans2_;
    string ans3_;
    char multiAnswers_[36];    // multiple choice answers and true or false
    double points = 0;
    string ans10_;
    string ans20_;
    string ans30_;
    char multiAnswers0_[36];
    
    public:
    void SetAnswers(char y[], string c, string d, string f);
    void SetKey(char z[], string m, string n, string p);
    double Score();
};


int main() {    

Grades stud1, stud2, stud3, stud4, stud5, stud6;

string stringHolder11;
string stringHolder21;
string stringHolder12;
string stringHolder22;
string stringHolder13;
string stringHolder23;
string stringHolder14;
string stringHolder24;
string stringHolder15;
string stringHolder25;
string stringHolder16;
string stringHolder26;


string stringHolder3;
string stringHolder4;
string stringHolder5;

char charHolder[18];
char charHolder1[18];
char charHolder2[18];
char charHolder3[18];
char charHolder4[18];
char charHolder5[18];
char charHolder6[18];

ifstream fir; //input file for student answers
ifstream fil; //input file for answers
ofstream fin; //ouptut file stream
fir.open("input.txt"); //opens input file
fil.open("answers.txt"); // opens answers input file
fin.open("output.txt");//opens the output file
  //the input for the KEY


for (int i = 0; i < 18; i ++){
    fil >> charHolder[i];
}

fil >> stringHolder3;
fil >> stringHolder4;
fil >> stringHolder5;

fil.close();

stud1.SetKey(charHolder, stringHolder3, stringHolder4, stringHolder5);
stud2.SetKey(charHolder, stringHolder3, stringHolder4, stringHolder5);
stud3.SetKey(charHolder, stringHolder3, stringHolder4, stringHolder5);
stud4.SetKey(charHolder, stringHolder3, stringHolder4, stringHolder5);
stud5.SetKey(charHolder, stringHolder3, stringHolder4, stringHolder5);
stud6.SetKey(charHolder, stringHolder3, stringHolder4, stringHolder5);


fir >> stringHolder11;  //the input for the firstperson
fir >> stringHolder21;

for (int i = 0; i < 18; i ++){
    fir >> charHolder1[i];
}

fir >> stringHolder3;
fir >> stringHolder4;
fir >> stringHolder5;

stud1.SetAnswers(charHolder1, stringHolder3, stringHolder4, stringHolder5);



fir >> stringHolder12;  //the input for the second person
fir >> stringHolder22;

for (int i = 0; i < 18; i ++){
    fir >> charHolder2[i];
}
fir >> stringHolder3;
fir >> stringHolder4;
fir >> stringHolder5;

stud2.SetAnswers(charHolder2, stringHolder3, stringHolder4, stringHolder5);



fir >> stringHolder13;  //the input for the thirdperson
fir >> stringHolder23;

for (int i = 0; i < 18; i ++){
    fir >> charHolder3[i];
}
fir >> stringHolder3;
fir >> stringHolder4;
fir >> stringHolder5;

stud3.SetAnswers(charHolder3, stringHolder3, stringHolder4, stringHolder5);



fir >> stringHolder14;  //the input for the fourth person
fir >> stringHolder24;

for (int i = 0; i < 18; i ++){
    fir >> charHolder4[i];
}
fir >> stringHolder3;
fir >> stringHolder4;
fir >> stringHolder5;

stud4.SetAnswers(charHolder4, stringHolder3, stringHolder4, stringHolder5);



fir >> stringHolder15;  //the input for the fifth person
fir >> stringHolder25;

for (int i = 0; i < 18; i ++){
    fir >> charHolder5[i];
}
fir >> stringHolder3;
fir >> stringHolder4;
fir >> stringHolder5;

stud5.SetAnswers(charHolder5, stringHolder3, stringHolder4, stringHolder5);



fir >> stringHolder16;  //the input for the sixth person
fir >> stringHolder26;

for (int i = 0; i < 18; i ++){
    fir >> charHolder6[i];
}
fir >> stringHolder3;
fir >> stringHolder4;
fir >> stringHolder5;

stud6.SetAnswers(charHolder6, stringHolder3, stringHolder4, stringHolder5);

double points1 = stud1.Score();
double points2 = stud2.Score();
double points3 = stud3.Score();
double points4 = stud4.Score();
double points5 = stud5.Score();
double points6 = stud6.Score();




fin << setprecision(2) << stringHolder11 << " " << stringHolder21 << "'s test score: " << stud1.Score() << endl;
fin << stringHolder12 << " " << stringHolder22 << "'s test score: " << stud2.Score() << endl;
fin << stringHolder13 << " " << stringHolder23 << "'s test score: " << stud3.Score() << endl;
fin << stringHolder14 << " " << stringHolder24 << "'s test score: " << stud4.Score() << endl;
fin << stringHolder15 << " " << stringHolder25 << "'s test score: " << stud5.Score() << endl;
fin << stringHolder16 << " " << stringHolder26 << "'s test score: " << stud6.Score() << endl;


fir.close(); //closes the input file
fin.close(); //closes the output file

return 0;
}


//////////////FUNCTIONS////////////////

void Grades::SetAnswers(char y[], string c, string d, string f){
    ans1_ = c;
    ans2_ = d;
    ans3_ = f;
    for(int i = 0; i < 18; i ++){
    multiAnswers_[i] = y[i];
    }
}

void Grades::SetKey(char z[], string m, string n, string p){
    ans10_ = m;
    ans20_ = n;
    
    ans30_ = p;
    for(int i = 0; i < 18; i ++){
    multiAnswers0_[i] = z[i];
    }
}

double Grades::Score(){
    points = 0;
      for(int i = 0; i < 18; i ++){
        if(multiAnswers0_[i] == multiAnswers_[i]){
          points = points + 1;
        }
        else if(multiAnswers0_[i] != multiAnswers_[i]){
          points = points + .25;
        }
        else if(multiAnswers_[i] == '?'){
          points = points + 0;
        } 
      }
      //checks first fill in question
      if(ans1_ == ans10_){
        points = points + 1;
      }
      
      else if(ans1_ == "?"){
        points = points + 0;
      }
      
      else if(ans1_ != ans10_){
        points = points + .25;
      }
      //checks second fill in question
      if(ans2_ == ans20_){
        points = points + 1;
      }
      
      else if(ans2_ == "?"){
        points = points + 0;
      }
      
      else if(ans2_ != ans20_){
        points = points + .25;
      }
      //checks third fill in question
      if(ans3_ == ans30_){
        points = points + 1;
      }
      
      else if(ans3_ == "?"){
        points = points + 0;
      }
      
      else if(ans3_ != ans30_){
        points = points + .25;
      }
    return ((points / 21) * 100);
}