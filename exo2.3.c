#include <stdio.h>

void generate_fibonacci(int N) {
    long long fib[N];  

 
    fib[0] = 0;
    if (N > 1) {
        fib[1] = 1;
    }


    for (int i = 2; i < N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

   
    printf("The first %d numbers in the Fibonacci series are:\n", N);
    for (int i = 0; i < N; i++) {
        printf("%lld ", fib[i]);
    }
    printf("\n");
}

int main() {
    int N;

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &N);

   
    if (N <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    generate_fibonacci(N); 

    return 0; 
}
