#include<iostream> 
using namespace std; 

class Time {
    private:
        int hours; 
        int minutes; 
        int seconds; 
    public:
        Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) { }
        void display() { 
            cout << hours << ":" << minutes << ":" << seconds << endl; 
        }
        friend Time addTime(const Time& time1, const Time& time2); 
};

Time addTime(const Time& time1, const Time& time2) { 
    int seconds = time1.seconds + time2.seconds; 
    int minutes = time1.minutes + time2.minutes + seconds / 60; 
    int hours = time1.hours + time2.hours + minutes / 60; 

    seconds = seconds % 60; 
    minutes = minutes % 60; 

    return Time(hours, minutes, seconds);
}
    
    
int main() {
    Time t1(10, 12, 14);
    Time t2(5, 50, 50); 

    Time t3 = addTime(t1, t2); 
    t1.display(); 
    t2.display(); 
    cout << "t1 + t2 = " << endl; 
    t3.display(); 
}