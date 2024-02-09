// 1. Write a C program to print your name.
#include <stdio.h>

int main() 
{
    char str[100]; 

    printf("Please enter your name: ");
    scanf("%s", str); 

    printf(" %s\n", str); 

    return 0;
}

