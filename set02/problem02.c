//02.  Write a program to find if a triangle is scalene.
#include <stdio.h>
int input_side(int a, int b, int c);
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
    int a, b, c;
    input_side(&a, &b, &c); 
    int scalene = check_scalene(a, b, c);
    output(a, b, c, scalene);
}

int input_side(int a, int b, int c)
{
    printf("Enter the length of one side: ");
    scanf("%d", a);
    printf("Enter the length of the second side: ");
    scanf("%d", b);
    printf("Enter the length of the third side: ");
    scanf("%d", c);
    return 0;
}

int check_scalene(int a, int b, int c)
{
    int scalene = 0;
    if (a == b || a == c || b == c)
    {
        printf("The sides are equal, and therefore, it's not a scalene triangle\n");
    }
    else
    {
        printf("The sides are not equal, and therefore, it's a scalene triangle\n");
        scalene = 1;
    }
    return scalene;
}

void output(int a, int b, int c, int isscalene)
{
    printf("The sides of the triangle are %d, %d, and %d, and the triangle is %s scalene.\n",");
}