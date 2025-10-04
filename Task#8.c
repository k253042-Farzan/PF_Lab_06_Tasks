#include<stdio.h>
#include<math.h>
int main()
{
    float s, i, m;
    printf("Enter the Intensity: ");
    scanf("%f", &i);
    printf("Enter the standard reference value: ");
    scanf("%f", &s);
    m = log10(i/s);
    printf("\nMagnitude of Earhquake: %0.1f", m);
}