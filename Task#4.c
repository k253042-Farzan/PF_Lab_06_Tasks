#include <stdio.h>
int main() {
    int num, oNum, remainder, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    oNum = num;

    while (num != 0) {
        remainder = num % 10;              
        result += remainder * remainder * remainder;  
        num = num / 10;                   
    }
    if (result == oNum)
        printf("%d is an Armstrong number.\n", oNum);
    else
        printf("%d is not an Armstrong number.\n", oNum);

    return 0;
}