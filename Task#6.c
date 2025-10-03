#include <stdio.h>
int main() {
    int reversed = 0, num, digit;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if(num<0){
        printf("You entered a negative number.");
    }
    else{
        while(num>0){
            digit = num%10;
            reversed = reversed*10+digit;
            num = num/10;
        }
        printf("Reversed Number: %d", reversed);
    };
    return 0;
}