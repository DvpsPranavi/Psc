//5. Write a C program to compare three numbers using **pass by value**
#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}

int input()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    return n;
}

int compare(int a, int b, int c)
{
    int i,n;
    for(i=0;i<n;i++)
    {
        if(a>=b &&a>=c)
        {
            return a;
        } 

        if( b>=c)
        {
            return b;
        }  

        else
        {
            return c;
        }
    }

    return 0;
}

void output(int a, int b, int c, int largest)
{
    printf("The largest number between %d,%d and %d is %d\n",a,b,c,largest);
}
