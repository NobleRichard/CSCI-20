#include<iostream>
using namespace std;
    
    class Story{
        private:
        string stories_[20];
        int num_;
        public:
        void SetStory(int number, string story[160]);
        int SearchStory(string a, string b);
        void PrintStory();
    };

//the class should be in here