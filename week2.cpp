// week2.cpp

#include <iostream>
using namespace std;            // Step 2

namespace CST8219 {              // Step 3
    class NumberRange {
    private:
        int min;
        int max;

    public:
        // Step 4a: 2-parameter constructor
        NumberRange(int _min, int _max);

        // Step 4b: 1-parameter constructor
        NumberRange(int _max);

        // Step 4c: 0-parameter constructor
        NumberRange();

        // Step 6: Destructor
        ~NumberRange();
    };

    // Step 5c: 2-param definition + cout
    NumberRange::NumberRange(int _min, int _max)
        : min(_min), max(_max)
    {
        cout << "In constructor with 2 parameters, min= " << min
             << ", max= " << max << endl;
    }

    // Step 5b: 1-param def delegates to 2-param, then cout
    NumberRange::NumberRange(int _max)
        : NumberRange(0, _max)
    {
        cout << "In constructor with 1 parameters, max= " << max << endl;
    }

    // Step 5a: 0-param def delegates to 1-param, then cout
    NumberRange::NumberRange()
        : NumberRange(1)
    {
        cout << "In constructor with 0 parameters" << endl;
    }

    // Step 6: Destructor definition
    NumberRange::~NumberRange()
    {
        cout << "In destructor" << endl;
    }
} // namespace CST8219

int main(int argc, char const *argv[])
{
    // Step 11 (Demo #3):
    //CST8219::NumberRange five(1, 6);

    // To switch demos, comment out the line above and uncomment one of these:
    // Step 9 (Demo #2):
    // CST8219::NumberRange rangeTen(10);

    // Step 7 (Demo #1):
     CST8219::NumberRange firstRange;

    cout << "I made a NumberRange" << endl;  // Step 7 continuation
    return 0;
}