#include<iostream>
#include<cmath>
using namespace std;

struct Jet {
  float distance;
  int velocity;  //same as speed
  float acceleration;
  float seconds;    
};


int main(){

Jet  vroom1, vroom2, vroom3, vroom4;  //set up jets 

cout << "Input the first jets velocity (kilometers/hours)." << endl; //get velocity and distance from first jet
cin >> vroom1.velocity;
cout << "Input the distance (meters) over which the catapult accelerates the jet from ret to takeoff" << endl;
cin >> vroom1.distance;

vroom1.velocity = vroom1.velocity * 1000 / 60 /60;  //here I convert in order to get km/hr to m/s
vroom1.acceleration = pow(vroom1.velocity,2) / (2 * vroom1.distance); // use my equation to get the acceleration    eq: (v^2)/2s = a
vroom1.seconds = vroom1.velocity / vroom1.acceleration;  // use other equation to get time taken to get to take off speed    eq: (v/a) = t


cout << "Input the second jets velocity (kilometers/hours)." << endl; //get velocity and distance from second jet
cin >> vroom2.velocity;
cout << "Input the distance (meters) over which the catapult accelerates the jet from ret to takeoff" << endl;
cin >> vroom2.distance;

vroom2.velocity = vroom2.velocity * 1000 / 60 /60;  //here I convert in order to get km/hr to m/s
vroom2.acceleration = pow(vroom2.velocity,2) / (2 * vroom2.distance);
vroom2.seconds = vroom2.velocity / vroom2.acceleration;

cout << "Input the third jets velocity (kilometers/hours)." << endl; //get velocity and distance from third jet
cin >> vroom3.velocity;
cout << "Input the distance (meters) over which the catapult accelerates the jet from ret to takeoff" << endl;
cin >> vroom3.distance;

vroom3.velocity = vroom3.velocity * 1000 / 60 /60;  //here I convert in order to get km/hr to m/s
vroom3.acceleration = pow(vroom3.velocity,2) / (2 * vroom3.distance);
vroom3.seconds = vroom3.velocity / vroom3.acceleration;

cout << "Input the fourth jets velocity (kilometers/hours)." << endl; //get velocity and distance from fourth jet
cin >> vroom4.velocity;
cout << "Input the distance (meters) over which the catapult accelerates the jet from ret to takeoff" << endl;
cin >> vroom4.distance;

vroom4.velocity = vroom4.velocity * 1000 / 60 /60;  //here I convert in order to get km/hr to m/s
vroom4.acceleration = pow(vroom4.velocity,2) / (2 * vroom4.distance);
vroom4.seconds = vroom4.velocity / vroom4.acceleration;


//Now to output it all
cout << "The first jets acceleration is: " << vroom1.acceleration << "and the time taken for the jet to reach takeoff speed is: " << vroom1.seconds << endl;
cout << "The second jets acceleration is: " << vroom2.acceleration << "and the time taken for the jet to reach takeoff speed is: " << vroom2.seconds << endl;
cout << "The third jets acceleration is: " << vroom3.acceleration << "and the time taken for the jet to reach takeoff speed is: " << vroom3.seconds << endl;
cout << "The fourth jets acceleration is: " << vroom4.acceleration << "and the time taken for the jet to reach takeoff speed is: " << vroom4.seconds << endl;
return 0;
}