#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void sieve_of_eratosthenes(int N) {
    
    bool *primes = malloc((N + 1) * sizeof(bool));
    
  
    for (int i = 0; i <= N; i++) {
      primes[i] = true;
    }
    
   
    primes[0] = primes[1] = false;

  
    for (int i = 2; i * i <= N; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= N; j += i) {
                primes[j] = false; 
            }
        }
    }

   
    printf("Prime numbers less than or equal to %d:\n", N);
    for (int i = 2; i <= N; i++) {
        if (primes[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");

    free(primes);
}

int main() {
    int N;

 
    printf("Enter the value of N (1 ≤ N ≤ 1000000): ");
    scanf("%d", &N);

    
    if (N < 1 || N > 1000000) {
        printf("Please enter a number between 1 and 1000000.\n");
    } else {
        sieve_of_eratosthenes(N);
    }

    return 0;
}
