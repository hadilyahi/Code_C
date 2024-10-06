#include <stdio.h>


int modularExponentiation(int A, int B, int M) {
    int result = 1;  
    A = A % M;  

    while (B > 0) {

        if (B % 2 == 1) {
            result = (result * A) % M;
        }

        
        B = B / 2;
        A = (A * A) % M;
    }

    return result;
}

int main() {
    int A, B, M;
    
    
    printf("Enter A: ");
    scanf("%d", &A);
    
    printf("Enter B: ");
    scanf("%d", &B);
    
    printf("Enter M: ");
    scanf("%d", &M);
    

    printf("The result is %d\n", modularExponentiation(A, B, M));
    
    return 0;
}
