# FizzBuzz Program

This is a simple Java implementation of the classic FizzBuzz problem. The program iterates through numbers from 1 to 100 and prints:

- **"FizzBuzz"** for numbers divisible by both 3 and 5.
- **"Fizz"** for numbers divisible by 3 only.
- **"Buzz"** for numbers divisible by 5 only.
- The number itself if it is not divisible by either 3 or 5.

## How It Works

1. The program uses a `for` loop to iterate from 1 to 100.
2. Each number is checked for divisibility:
   - If divisible by both 3 and 5, print `"FizzBuzz"`.
   - If divisible by 3 only, print `"Fizz"`.
   - If divisible by 5 only, print `"Buzz"`.
   - Otherwise, print the number itself.

## Code

```java
public class FizzBuzz {
    public static void main(String[] args) {
        for (int i = 1; i <= 100; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                System.out.println("FizzBuzz");
            } else if (i % 3 == 0) {
                System.out.println("Fizz");
            } else if (i % 5 == 0) {
                System.out.println("Buzz");
            } else {
                System.out.println(i);
            }
        }
    }
}
