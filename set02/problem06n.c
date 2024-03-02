#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str);
void output(char *a);

int main() 
{
    char a[100];
    input_string(a);
    str_reverse(a);
    output(a);
    return 0;
}

void input_string(char *a) 
{
    printf("Enter a string: ");
    scanf("%s", a);
}

void str_reverse(char *str)
{
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) 
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void output(char *a) 
{
    printf("Reversed String is %s\n", a);
}
