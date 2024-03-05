// 4. Write a program to find nth number in fibonacci sequence.

// > Fibonacci Sequence is of the form: `0, 1, 1, 2, 3, 5, 8, 13, ...`

// ***Function Declarations***
// ```c
// int input();
// int find_fibo(int n);
// void output(int n, int fibo);
// ```

// ***Input***
// ```
// 5
// ```

// ***Output***
// ```
// fibo(5) = 5
// ```
#include<stdio.h>
int input() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}
int find_fibo(int n) {
    if (n <= 1)
        return n;
    else
        return find_fibo(n - 1) + find_fibo(n - 2);
}


void output(int n, int fibo) {
    printf("fibo(%d) = %d\n", n, fibo);
}


int main() {

    int n = input();


    int fibo = find_fibo(n);

    
    output(n, fibo);

    return 0;
}

