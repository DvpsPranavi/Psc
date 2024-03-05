#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str,char*revs_str);
void output(char *a, char *reverse_a);

int main() 
{
    char a[100],reverse_a[100];
    input_string(a);
    str_reverse(str,revs_str);
    output(a,reverse_a);
    return 0;
}


void input_string(char *a) 
{
    printf("Enter a string: ");
    scanf("%s", a);
}

void str_reverse(char *str,char *revs_str) 
{
    int length=0;
    while (str[length] != '\0') 
    {
        length++;
    }

    int i, j;
    for (i = length - 1, j = 0; i >= 0; i--, j++) 
    {
        revs_str[j] = str[i];
    }
    revs_str[length] = '\0';
}
    
void output(char *a, char *reverse_a) 
{
    printf("Original String is %s\n", a);
    printf("Reversed String is %s\n", reverse_a);
}
