#include <stdio.h>
#include<math.h>
int main() {
    int p, t,n;
    float A, r;
    printf("Enter Principal Amount: ");
    scanf("%d", &p);
    printf("Enter Annual interest rate(in percent): ");
    scanf("%f", &r);
     printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);
     printf("Enter time in years: ");
    scanf("%d", &t);
    r = r/100;
    A=p*pow(1+r/n, n*t);
    printf("Future value of Investment: %.2f", A);
    return 0;
}