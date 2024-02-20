//05.  Write a program to find GCD _(HCF)_ of two numbers.
#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main() 
{
    int n1,n2;
    n1 = input();
    n2 = input();
    int gcd = find_gcd(n1, n2);
    output(n1, n2, gcd);
    return 0;
}
int input() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
int find_gcd(int a, int b) 
{
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}
void output(int a, int b, int gcd) 
{
    printf("The GCD of %d and %d is: %d\n", a, b, gcd);
}

