#include <stdio.h>

long long sum_of_divisors(int N) {
    long long sum = 0;

    
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {  
            sum += i;     
        }
    }

    return sum;
}

int main() {
    int N;
    printf("Enter a number (1 ≤ N ≤ 10^6): ");
    scanf("%d", &N);

  
    if (N < 1 || N > 1000000) {
        printf("Invalid input. Please enter a number between 1 and 10^6.\n");
        return 1; 
    }

    long long result = sum_of_divisors(N);
    printf("The sum of all divisors of %d is: %lld\n", N, result);

    return 0; 
}
