// 10. Write a C program to compare two strings, character by character.
#include<stdio.h>
void input(char *a,char *b)
{   printf("enter string 1 : ");
    scanf("%s",a);
      printf("enter string 2 : ");
    scanf("%s",b);
}
int compute(char *a,char *b) 
{ 
    int i=0;
    for(i=0;a[i]==b[i] && a[i]!='\0' && b[i]!= '\0';i++);
    if (a[i]>b[i])
    {
        return 1;
    }

    else  if (a[i]<b[i])
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

void output(char *a, char *b, int c)
{
    if (c == 0) 
    {
        printf("The strings %s and %s are equal.\n", a, b);
    } 
    else if (c == 1)
    {
        printf("%s is greater than  %s \n", a, b);
    } 
    else if (c == 2) 
    {
        printf("%s is less than %s \n", a, b);
    }
}
int main()
{
    int c;
    char a[100],b[100];
    input(a,b);
    c=compute(a,b);
    output(a,b,c);
    return 0;
}
