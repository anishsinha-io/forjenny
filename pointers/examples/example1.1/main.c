#include <stdio.h>

int main() {
    int x = 5;                     // declare an integer variable
    int *pointer_to_x = &x;        // now the variable pointer_to_x contains the address of x in memory
    printf("%p\n", pointer_to_x);  // you can print out the address like this if you want to see (%p is the correct format specifier)
    return 0;
}