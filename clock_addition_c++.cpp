/*
Write a class Time which has three data member hour, minute and second and three member functions:
setTime(list of arguments) : Which sets three data members of class.
addTime(Time): To add two time values where one time value(object) is passed as an argument of addTime().
showTime(): To display the time information.
*/
 
#include <iostream>
using namespace std;

class Time {
    private:
        int hours, minutes, seconds;
    public:
        Time() : hours(0), minutes(0), seconds(0) {}

        void setTime(int h, int m, int s) {
            hours = h;
            minutes = m;
            seconds = s;
        }

        void addTime(Time t) {
            seconds = seconds + t.seconds;
            minutes = minutes + seconds / 60;
            seconds = seconds % 60;

            minutes = minutes + t.minutes;
            hours = hours + minutes / 60;
            minutes = minutes % 60;

            hours = hours + t.hours;
        }
        
        void showTime() {
            cout << "After addition the time we get is: " << hours << ":" << minutes << ":" << seconds;
        }
};

int main() {
    Time t1, t2;
    int h, m, s;

    cout << "Enter time for t1 (hours minutes seconds): ";
    cin >> h >> m >> s;
    t1.setTime(h, m, s);

    cout << "Enter time for t2 (hours minutes seconds): ";
    cin >> h >> m >> s;
    t2.setTime(h, m, s);

    t1.addTime(t2);
    t1.showTime();
    return 0;
}
