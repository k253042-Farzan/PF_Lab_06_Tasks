#include <stdio.h>
int main() {
    int np, arr, a=1;
    printf("Enter number of participants: ");
    scanf("%d", &np);
    for(int i=1;i<=np;i++){
        a=a*i;
    };
    printf("Total arrangements: %d", a);
    return 0;
}