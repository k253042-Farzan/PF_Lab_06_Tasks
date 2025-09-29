#include<stdio.h>
int main()
{
	int n, mul;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(int i=1;i<=10;i++){
		mul = i*n;
		printf("\n%d x %d = %d",n,i,mul);
	}
	return 0;
}
