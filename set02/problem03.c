//03.  Write a program find whether a number is a composite number
#include <stdio.h>

int input_number()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    return n;
}
int is_composite(int n)
{
   
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
}
void output(int n, int result)
{
    if(result)
    {
        printf("%d is a composite\n",n);
    }
    else{
        printf("%d is not a composite number\n",n);
    }
}
int main()
{
    int n=input_number();
    int result=is_composite(n);
    output(n,result);
    return 0;
}