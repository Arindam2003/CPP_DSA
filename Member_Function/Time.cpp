#include <iostream>
using namespace std;

class Time {
private:
    int hr, min, sec;

public:
    void setValue(int, int, int);
    void showValue();
    void normalize();
    bool isGreater(Time);
};

void Time::setValue(int h, int m, int s) {
    hr = h;
    min = m;
    sec = s;
    normalize(); 
}

void Time::showValue() {
    cout << hr << " : " << min << " : " << sec << endl;
}

void Time::normalize() {
    //! Normalize seconds
    if (sec >= 60) {
        min += sec / 60;
        sec = sec % 60;
    } else if (sec < 0) {
        min -= (abs(sec) / 60) + 1;
        sec = 60 - (abs(sec) % 60);
    }

    //! Normalize minutes
    if (min >= 60) {
        hr += min / 60;
        min = min % 60;
    } else if (min < 0) {
        hr -= (abs(min) / 60) + 1;
        min = 60 - (abs(min) % 60);
    }

    if (hr < 0) {
        hr = 0;
    }
}

bool Time::isGreater(Time t) {
    if (hr > t.hr) {
        return true;
    } else if (hr < t.hr) {
        return false;
    } else if (min > t.min) {
        return true;
    } else if (min < t.min) {
        return false;
    } else if (sec > t.sec) {
        return true;
    } else {
        return false; 
    }
}

int main() {
    Time t1, t2;
    t1.setValue(2, 70, 87); 
    t1.showValue();
    t2.setValue(3, 45, 23);
    t2.showValue();
    cout << (t1.isGreater(t2) ? "t1 is greater" : "t2 is greater or equal") << endl;
    return 0;
}
