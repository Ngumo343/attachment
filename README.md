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
# Product Cards

This project is a simple web page that displays product cards for two popular sneakers: **Nike X OFF-white - The 10: Air Jordan 1 Off-white - Chicago** and **Nike Air Jordan 1 Retro High Off-White UNC**. The cards feature attractive designs, hover effects, and action buttons.

## Features

- **Responsive Design**: The layout uses Flexbox for adaptability across devices.
- **Hover Effects**: Smooth animations on hover, making the cards more interactive.
- **Action Buttons**: Includes "Buy Now" buttons and a favorite icon.

## Preview

### Card 1: Nike X OFF-white - The 10: Air Jordan 1 Off-white - Chicago
**Price**: $999  
This card uses a red theme with a clean layout to showcase the sneaker.  

### Card 2: Nike Air Jordan 1 Retro High Off-White UNC
**Price**: $1599  
This card uses a blue theme with a stylish display image for the sneaker.  

## How to Use

1. Clone or download the repository.
2. Open the `index.html` file in your preferred web browser.
3. View the product cards and interact with the buttons or hover effects.

## Code Highlights

- **HTML Structure**: Each card contains an image, title, description, price, and action buttons.
- **CSS Effects**:
  - Box-shadow and scale on hover:
    ```css
    .product-card:hover {
      transform: translateY(-10px);
      box-shadow: 0 8px 15px rgba(0, 0, 0, 0.2);
    }
    ```
  - Responsive layout using Flexbox:
    ```css
    .product-container {
      display: flex;
      flex-wrap: wrap;
      gap: 20px;
    }
    ```

## Customization

- Replace the image URLs in the `<img>` tags for different product displays.
- Modify the `.red-card` and `.blue-card` classes in the CSS to change the background colors of the product cards.

## Technologies Used

- **HTML5**: Structure and semantics.
- **CSS3**: Styling and animations.

## Future Enhancements

- Add more product cards to showcase other items.
- Integrate JavaScript to handle dynamic interactions like adding to a shopping cart or marking favorites.
- Include a backend to support real purchases and user management.

## License

This project is available for personal and educational use. Feel free to modify and reuse the code as needed.


