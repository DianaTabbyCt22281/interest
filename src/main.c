// C program to find the simple interest
#include <stdio.h>

int main() {
  
    // Input values
    float P = 100000, R = 2.5, T = 2;

    // Calculate simple interest
    float SI = (P * T * R) / 100;

    // Print Simple Interest
    printf("Simple Interest = %f\n", SI);

    return 0;
}
