#include <stdio.h>
int main() {
    int num, count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num){
        if(num & 1){
       count++;
        }
          num = num>>1;
    }
    printf("Number contains %d 1s", count);
    return 0;
}