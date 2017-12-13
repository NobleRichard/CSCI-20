#include "class.h"

void Story::SetStory(int number, string story[]){
    num_ = number;
    int cut = number + 20;
    
    for(int i = num_; i < cut; i++){
        stories_[i - num_] = story[i];
    }
}

void Story::PrintStory(){
    for(int i = 0; i < 20; i++){
        cout << stories_[i] << endl;
    }
}

int Story::SearchStory(string a, string b){
        string x = a;
        string y = b;

        int count = 0;
        int check = -1;
        for (int i = 0; i < 20; i++){
            if (stories_[i].find(x) != check){
                count++;
            }
            if (stories_[i].find(y) != check){
                count++;
            }
        }
        
        
    return count;
}




//has constructors and functions here