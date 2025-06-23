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
