#include <stdio.h>
int main() {
    int amount;
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    printf("Enter amount in cents: ");
    scanf("%d", &amount);
    while (amount > 0) {
        if (amount >= 25) {
            amount -= 25;
            quarters++;
        } else if (amount >= 10) {
            amount -= 10;
            dimes++;
        } else if (amount >= 5) {
            amount -= 5;
            nickels++;
        } else {
            amount -= 1;
            pennies++;
        }
    }
    printf("Quarters: %d\n", quarters);
    printf("Dimes   : %d\n", dimes);
    printf("Nickels : %d\n", nickels);
    printf("Pennies : %d\n", pennies);
    return 0;
}