#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


long long lcm(int a, int b) {
    return (long long)(a / gcd(a, b)) * b;  
}

int main() {
    int A, B;

  
    printf("Enter Number 1 :  ");
    scanf("%d", &A);
    
    printf("Enter Number 2 : ");
    scanf("%d", &B);

   
    long long result = lcm(A, B);


    printf("Lcm %d and %d is %lld\n", A, B, result);

    return 0;
}
