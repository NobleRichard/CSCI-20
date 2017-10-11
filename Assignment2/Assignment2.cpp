#include<iostream>
#include<string>
#include<cmath> 
using namespace std;

class Runner{   //the class to hold information
  private:
     int minutes_;
     int seconds_;
  public:
    void SetTime(int min, int sec);
    int GetTime();
    double FeetPSecond();  //converts time for 1 mile to feet per second
    double MeterPSecond(); //converts time for 1 mile to meters per second
    int CompareMin(); //compares inputed time to first place and converts to minutes
    int CompareSec(); //compares inputed time to first place and converts to seconds
    int MinSplits(int num); //get splits for runner every 1/4 mile in minutes
    int SecSplits(int numero); //get splits for runner every 1/4 mile in seconds
    void Print(); //prints out all information
    
};

int main(){
    Runner bolt; //make runner 
    
    bolt.SetTime(60, 22);  
    bolt.GetTime();
    bolt.FeetPSecond();
    bolt.MeterPSecond();
    bolt.Print();
    
    return 0;
}

void Runner::SetTime(int min, int sec){
  minutes_ = min;   
  seconds_ = (minutes_ * 60) + sec;   //sets it all in seconds so we can just use that variable
}

int Runner::GetTime(){
  return seconds_;  
}

double Runner::FeetPSecond(){
  return 5280 / seconds_; //speed in feet per second
}


double Runner::MeterPSecond(){
  return 5280 * .3048 / seconds_; // speed in meters per second
}

int Runner::CompareMin(){
  if(seconds_ > 223){
    return abs(223 - seconds_) / 60;   
  }
}

int Runner::CompareSec(){
  if(seconds_ > 223){
    return abs((223 - seconds_) % 60);
  }
}

int Runner::MinSplits(int num){
   return ((seconds_ / 4) * num) / 60;  //takes splits and converts to minutes
}

int Runner::SecSplits(int numero){
   return ((seconds_ / 4) * numero) % 60; //takes splits and converts to seconds
}

void Runner::Print(){
  cout << "Your speed in this mile run was: " << FeetPSecond() << "ft/s, or " << MeterPSecond() << "m/s." << endl;
  cout << "First place was " << CompareMin() << ":" << CompareSec() << " faster." << endl;
  cout << "Your splits every quarter mile were: " << MinSplits(1) << ":" << SecSplits(1) << ", " << MinSplits(2) << ":" << SecSplits(2) << ", " << MinSplits(3) << ":" << SecSplits(3) << ", and " << MinSplits(4) << ":" << SecSplits(4) << endl;
}

/*
Your speed in this mile run was: 9ft/s, or 2.99135m/s.
First place was 5:15 faster.
Your splits every quarter mile were: 2:14, 4:28, 6:42, and 8:56

Your speed in this mile run was: 3ft/s, or 0.984308m/s.
First place was 23:32 faster.
Your splits every quarter mile were: 6:48, 13:36, 20:24, and 27:12

Your speed in this mile run was: 1ft/s, or 0.467561m/s.
First place was 53:39 faster.
Your splits every quarter mile were: 14:20, 28:40, 43:0, and 57:20

Your speed in this mile run was: 23ft/s, or 7.08962m/s.
First place was 0:4 faster.
Your splits every quarter mile were: 0:56, 1:52, 2:48, and 3:44

Your speed in this mile run was: 7ft/s, or 2.42737m/s.
First place was 7:20 faster.
Your splits every quarter mile were: 2:45, 5:30, 8:15, and 11:0

Your speed in this mile run was: 2ft/s, or 0.73486m/s.
First place was 32:47 faster.
Your splits every quarter mile were: 9:7, 18:14, 27:21, and 36:28

Your speed in this mile run was: 2ft/s, or 0.668332m/s.
First place was 36:25 faster.
Your splits every quarter mile were: 10:2, 20:4, 30:6, and 40:8

Your speed in this mile run was: 11ft/s, or 3.46095m/s.
First place was 4:2 faster.
Your splits every quarter mile were: 1:56, 3:52, 5:48, and 7:44

Your speed in this mile run was: 4ft/s, or 1.24178m/s.
First place was 17:53 faster.
Your splits every quarter mile were: 5:24, 10:48, 16:12, and 21:36

Your speed in this mile run was: 1ft/s, or 0.444325m/s.
First place was 56:39 faster.
Your splits every quarter mile were: 15:5, 30:10, 45:15, and 60:20
*/
