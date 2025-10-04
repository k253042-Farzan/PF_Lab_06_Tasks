#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Before swap Number 1 is %d and Number 2 is %d", n1, n2);
    n1 = n1^n2;
    n2 = n1^n2;
    n1 = n1^n2;
    printf("\nAfter swapping Number 1 is %d and Number 2 is %d", n1, n2);
    return 0;
}