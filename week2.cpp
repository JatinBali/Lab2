/**
 * CET - CS Academic Level 4
 * Description:
 * Student Name: Jatin Bali
 * Student Number: 041074709
 * Lab Sec: 302
 * Course: CST8219 C++ Programming
 * Lab Professor: Eric Torunski
 */
#include <iostream>
using namespace std;               // allows use of cout, endl without std:: :contentReference[oaicite:0]{index=0}

namespace CST8219 {
    class NumberRange {
    private:
        int min, max;
    public:
        NumberRange(int _min, int _max);

        NumberRange(int _max);

        NumberRange();

        ~NumberRange();
    };

    // 2-parameter constructor
    NumberRange::NumberRange(int _min, int _max) : min(_min), max(_max) {
        cout << "In constructor with 2 parameters, min = " << min << endl;
    }

    // 1-parameter constructor
    NumberRange::NumberRange(int _max) : NumberRange(0, _max) {
        cout << "In constructor with 1 parameters, max = " << max << endl;
    }

    // 0-paramter constructor
    NumberRange::NumberRange() : NumberRange(1) {
       cout << "In constructor with 0 parameters" << endl;
    }

    // Destructor
    NumberRange::~NumberRange() {
        cout << "In destructor" << endl;
    }
}
int main() {
    cout << "Week 2 Lab Start" << endl;
    return 0;
}
