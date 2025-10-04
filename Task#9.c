#include<stdio.h>
#include<math.h>
int main()
{
    int nop, final_cost;
    float copp = 250.50, total_cost;
    printf("Enter number of persons: ");
    scanf("%d", &nop);
    total_cost = copp*nop;
    final_cost = (int)ceil(total_cost);
    printf("Total Cost: %d", final_cost);
    return 0;
}
