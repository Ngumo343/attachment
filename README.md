# FizzBuzz Implementation in C++

## Description
This is a simple C++ program that prints numbers from 1 to 100 with the following rules:
- For multiples of 3, it prints `Fizz` instead of the number.
- For multiples of 5, it prints `Buzz` instead of the number.
- For numbers that are multiples of both 3 and 5, it prints `FizzBuzz`.

## How It Works
1. The program uses a `for` loop to iterate through numbers from 1 to 100.
2. Conditional statements (`if`, `else if`, and `else`) are used to check whether each number is:
   - Divisible by both 3 and 5 (prints `FizzBuzz`).
   - Divisible by 3 (prints `Fizz`).
   - Divisible by 5 (prints `Buzz`).
   - None of the above (prints the number itself).

## Code
```cpp
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
```

