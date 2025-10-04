#include <stdio.h>
#include<math.h>
int main() {
    int h;
    float ang, l, rad, pi = 3.14;
    printf("Enter Height of the building: ");
    scanf("%d", &h);
    printf("Enter Angle of elevation: ");
    scanf("%f", &ang);
    rad = ang*pi/180;
    l = h/tan(rad);
    printf("The shadow building is created: %.2f ", l);
    return 0;
}