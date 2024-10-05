#include <stdio.h>
#include <math.h>

void primeNumber(int N) {
    int isPrime = 1;
    if (N <= 1) {
        isPrime = 0; 
    } else {
        for (int i = 2; i <= sqrt(N); i++) {
            if (N % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number\n", N);
    } else {
        printf("%d is not a prime number\n", N);
    }
}

int main() {
    int N;
    printf("Enter an integer number: ");
    scanf("%d", &N); 
    if ((N > 1) && (N < 1000000)) {
        primeNumber(N);
    } else {
        printf("%d is not a correct number\n", N);
    }

    return 0;
}
