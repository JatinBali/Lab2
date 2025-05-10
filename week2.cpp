#include <iostream>
using namespace std;

namespace CST8219 {
    class NumberRange {
    private:
        int min;
        int max;

    public:
        // 2-parameter constructor
        NumberRange(int _min, int _max);

        // 1-parameter constructor
        NumberRange(int _max);

        // 0-parameter constructor
        NumberRange();

        // Destructor
        ~NumberRange();
    };
}


int main() {
    // Demo #3 - Constructor with 2 parameters
    CST8219::NumberRange five(1, 6);  // Step 11

    // Demo #2 - Constructor with 1 parameter
    // CST8219::NumberRange rangeTen(10);  // Step 9

    // Demo #1 - Constructor with 0 parameters
    // CST8219::NumberRange firstRange;    // Step 7

    return 0;
}