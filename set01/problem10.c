// Write a C program to compare two strings, character by character.
#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
    char string1[50], string2[50];
    input_two_strings(string1, string2);
    int result = stringcompare(string1, string2);
    output(string1, string2, result);
    return 0;    
}

void input_two_strings(char *string1, char *string2)
{
    printf("Enter the string : \n");
    scanf("%s",string1);
    printf("Enter the string : \n");
    scanf("%s",string2);

}

int stringcompare(char *string1, char *string2)
{
    
    for(int i=0;string1[i]!='\0' || string2!='\0';i++)
    {
        
        if(string1[i]<string2[i])
        {
            return 0;
           
        }
        if(string1[i]>string2[i])
        {
            return 1;
            
        }
        else 
        {
            return 2;
            
        }
    }  
}

void output(char *string1, char *string2, int result)
{
    if(result==0)
    {
        printf("%s is greater\n",string1);
    }
    if(result==1)
    {
        printf("%s is greater\n",string2);
    }
    if(result==2)
    {
        printf("Both strings are same\n");
    }
    
}