#include <iostream>
using namespace std;

int main() {
    // Loop through numbers from 1 to 100
    for (int i = 1; i <= 100; i++) {
        // Check for multiples of both 3 and 5
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        }
        // Check for multiples of 3
        else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        }
        // Check for multiples of 5
        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        }
        // Print the number if none of the above conditions are met
        else {
            cout << i << endl;
        }
    }
    return 0;
}
