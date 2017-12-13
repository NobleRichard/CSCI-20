#include "main.h"

int main(){
    
    Story Sarah, Michael, Dan, Bianca, Chris, Isabell, Rusell, Steph;
    
    string story[160];
    ifstream fin; //input file stream
    ofstream fout; //ouptut file stream
    fin.open("input.txt"); //opens file
    
    for (int i = 0; i < 159; i++){ //grab hold of all stories
    getline(fin, story[i]); //grabs whole lines from code
    } 
    fin.close(); //closes file
    
    Sarah.SetStory(0, story);
    Michael.SetStory(20, story);
    Dan.SetStory(40, story);
    Bianca.SetStory(60, story);
    Chris.SetStory(80, story);
    Isabell.SetStory(100, story);
    Rusell.SetStory(120, story);
    Steph.SetStory(140, story);
    
    fout.open("output.txt"); //opens html
    for (int i = 0; i < 160; i++){
        fout << story[i] << endl;
    }
    fout.close(); 
    int holder = Intro();
    if( holder == 1){
        string str1, str2;
        cout << "Input two keywords that you would like to compare." << endl;
        cin >> str1;
        cin >> str2;
        cout << endl;
        cout << "Stories that may resemble what you are dealing with." << endl;
        cout << endl;
        
        if (Sarah.SearchStory(str1, str2) >= 2 ){
        Sarah.PrintStory();
        }
        if(Michael.SearchStory(str1, str2) >= 2 ){
        Michael.PrintStory();
        }
        if(Dan.SearchStory(str1, str2) >= 2 ){
        Dan.PrintStory();
        }
        if(Bianca.SearchStory(str1, str2) >= 2 ){
        Bianca.PrintStory();
        }
        if(Chris.SearchStory(str1, str2) >= 2 ){
        Chris.PrintStory();
        }
        if(Isabell.SearchStory(str1, str2) >= 2 ){
        Isabell.PrintStory();
        }
        if(Rusell.SearchStory(str1, str2) >= 2 ){
        Rusell.PrintStory();
        }
        if(Steph.SearchStory(str1, str2) >= 2 ){
        Steph.PrintStory();
        }
    }
    else {
        cout << "Maybe next time!" << endl;
    }
    return 0;
}

//has mains and calling of functions here
//holds functions only used in main here


int Intro(){
    int answer;
    cout << "Welcome to Assignment5. Here in Assignment5 we try to hold a collection of personal testimonies that can be potentially encouraging to others." << endl;
    cout << "Type 1 to search for a story, or any other key to leave." << endl;
    cin >> answer;
    if (answer == 1){
        return 1;
    }
    else{
        cout << "Have a good day." << endl;
        return 0;
    }
}
