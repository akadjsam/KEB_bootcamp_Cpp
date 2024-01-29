// #include <iostream>
// #include <cmath>
// #include <cassert>
// #include "test.hpp"

// using namespace std;

// Time::Time(int h, int m, int s):hours(h), minutes(m), seconds(s)
// {
//     normalize();
// }

// Time::Time():hours(0), minutes(0), seconds(0)
// {

// }

// Time::~Time()
// {

// }
// Time::Time(const Time& t):hours(t.hours), minutes(t.minutes), seconds(t.seconds)
// {

// }

// void Time::print() const
// {
//     cout << hours << ":" << minutes << ":" << seconds << endl;
// }

// void Time::tick()
// {
//     seconds ++;
//     normalize();
// }

// void Time::normalize(){
//     if((hours<0)||(minutes<0)||(seconds<0)){
//         assert(false);
//     }
//     if(seconds > 59){
//         int temp = seconds / 60;
//         seconds = seconds % 60;
//         minutes = temp + minutes;
//     }
//     if(minutes > 59){
//         int temp = minutes / 60;
//         minutes = minutes % 60;
//         hours = temp + hours;
//     }
//     if(hours > 23){
//         hours = hours % 24;
//     }
// }