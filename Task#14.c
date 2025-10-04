#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplied by 2: %d", num<<1);
    printf("\nMultiplied by 4: %d", num<<2);
    printf("\nMultiplied by 8: %d", num<<3);
    return 0;
}