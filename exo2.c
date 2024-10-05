#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter Number 1 : ");
    scanf("%d", &num1);
    
    printf("Enter Number 2 : ");
    scanf("%d", &num2);

   
    int result = gcd(num1, num2);

 
    printf("PGCD %d and %d is %d\n", num1, num2, result);

    return 0;
}
