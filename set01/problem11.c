//11. Write a C program to find the sum of 2 complex numbers
#include <stdio.h>

struct complex {
	float real;
	float imaginary;
};
typedef struct complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main() {
    Complex a, b, sum;
    a = input_complex();
    b = input_complex();
    sum = add_complex(a, b);
    output(a, b, sum);
    return 0;
}

Complex input_complex() {
    Complex c;
    printf("Enter the real part for C\n");
    scanf("%f", &c.real);
    printf("Enter the img part for C\n");
    scanf("%f", &c.imaginary);
    printf("c is %f+i%f\n", c.real, c.imaginary);
    return c;
}

Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum) {
    printf("a is %f+i%f\n", a.real, a.imaginary);
    printf("b is %f+i%f\n", b.real, b.imaginary);
    printf("The sum of a and b is %f+i%f\n", sum.real, sum.imaginary);
}
