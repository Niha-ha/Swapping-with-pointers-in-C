# Swapping with Pointers in C

## 📝 Description

This C program swaps the values of two integers **only if** the value of `a` is greater than `b`.  
It uses **pointers** to modify the original variables by passing their **addresses** to a function.

## 🔧 How It Works

- The user enters two numbers.
- The function `swap()` receives their addresses (pointers).
- Inside `swap()`, it checks if the value pointed to by `a` is greater than `b`.
- If so, it swaps the values using a temporary variable.

## 💻 Code

```c
#include <stdio.h>

// This function swaps the values of a and b only if a is greater than b
void swap(int *a, int *b) {
    if (*a > *b) {           // Check if swapping is needed
        int temp = *a;       // Store the value of *a in temp
        *a = *b;             // Assign value of *b to *a
        *b = temp;           // Assign original value of *a (from temp) to *b
    }
}

int main() {
    int a, b;  // Declare two integer variables

    printf("Enter two numbers:\n"); // Ask the user for input

    scanf("%d %d", &a, &b); // Read two integers from user

    swap(&a, &b); // Call the swap function with the addresses of a and b

    // Print the values after the potential swap
    printf("The numbers after swapping: a = %d, b = %d\n", a, b);

    return 0; // Indicate successful program completion
}
```

## 📦 File Name

`swapping_with_pointers_in_C.c`

## 📚 Concepts Used

- Pointers and memory addresses
- Passing by reference
- Pointer dereferencing
- Conditional logic
- Basic input/output in C

## 🧰 Tools Used

- [Code::Blocks IDE](http://www.codeblocks.org/)
- C compiler (GCC or the one built into Code::Blocks)

## 💡 Sample Output

```
Enter two numbers:
9 4
The numbers after swapping: a = 4, b = 9
```

```
Enter two numbers:
2 8
The numbers after swapping: a = 2, b = 8
```

## ✅ How to Compile and Run (Code::Blocks)

1. Open Code::Blocks
2. Create a new project or source file
3. Paste the code
4. Click **Build and Run (F9)**

## 🙋 Author

This project is part of my C programming learning journey.

