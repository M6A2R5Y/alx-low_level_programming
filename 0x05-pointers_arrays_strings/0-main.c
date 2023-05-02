#include <stdio.h>

// Function prototype
void reset_to_98(int *n);

int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);

    // Call reset_to_98 function with a pointer to n
    reset_to_98(&n);

    printf("n=%d\n", n);
    return 0;
}

// Implementation of reset_to_98 function
void reset_to_98(int *n) {
    *n = 98;
}
