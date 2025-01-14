//9. Write a C program to find the [square root] of a number.
#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main() {
    float number, sqrroot;

    number = input(); 
    sqrroot = square_root(number); 
    output(number, sqrroot); 

    return 0;
}


float input() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    return num;
}


float square_root(float n) {
    if (n < 0) {
        return -1; 
    }

    float estimate = 1;
    float pe=0;

   do {
        pe= estimate;
        estimate =0.5*(estimate + n / estimate);
    }  while (estimate != pe);

    return estimate;
}

void output(float n, float sqrroot) {
    if (sqrroot < 0) {
        printf("Cannot calculate the square root of a negative number.\n");
    } else {
        printf("The square root of %f is approximately %f\n", n, sqrroot);
    }
}