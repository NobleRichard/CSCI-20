#include<iostream>
#include<string>
using namespace std;

class book{
  private:
     string title_;
     string author_;
     int copyrightyear_;
  public:
     void SetTitle(string x);//sets title to x so that you can later set to title
     string GetTitle();//returns title_
     void SetAuthor(string y);//sets author to y so that you can later set to author
     string GetAuthor();//returns author_
     void SetCRY(int z);  //CRY = copyrightyear
     int GetCRY();  //CRY = copyrightyear
     void Print(); //prints it all out
};

int main(){
    book num1, num2, num3, num4, num5;
    num1.SetTitle("Romans"); //sets names for titles
    num2.SetTitle("Philippians");
    num3.SetTitle("Corinthians1");
    num4.SetTitle("Corinthians2");
    num5.SetTitle("Galatians");
    num1.SetAuthor("Paul"); //sets names for authors
    num2.SetAuthor("Paul");
    num3.SetAuthor("Paul");
    num4.SetAuthor("Paul");
    num5.SetAuthor("Paul");
    num1.SetCRY(100); //sets names for copyrightyear
    num2.SetCRY(104);
    num3.SetCRY(105);
    num4.SetCRY(110);
    num5.SetCRY(115);
    
    num1.Print();//prints info for the objects
    num2.Print();
    num3.Print();
    num4.Print();
    num5.Print();
    
    return 0;
}

void book::SetTitle(string x){
    title_ = x;
}
string book::GetTitle(){
    return title_;
}
void book::SetAuthor(string y){
   author_ = y;
}
string book::GetAuthor(){
    return author_;
}
void book::SetCRY(int z){
    copyrightyear_ = z;
}
int book::GetCRY(){
    return copyrightyear_; 
}
void book::Print(){
    cout << GetTitle() << " " << GetAuthor() << " " << GetCRY() << endl; //call functions within the class because we are already in the class
}
/*
Romans Paul 100
Philippians Paul 104
Corinthians1 Paul 105
Corinthians2 Paul 110
Galatians Paul 115
*/


