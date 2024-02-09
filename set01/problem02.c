//2. Write a C program to add two numbers.
#include <stdio.h>
int main()
{
    int x,y,sum=0;
    printf("Enter the first number\n");
    scanf("%d",&x);
    printf("Enter the second number\n");
    scanf("%d",&y);
    sum=x+y;
    printf("The sum of %d and %d is %d",x,y,sum);
    return 0;
}