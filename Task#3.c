#include<stdio.h>
int main()
{
	int balance = 50000, w_a;
	while(balance>0){
	printf("\nEnter Withdraw amount: ");
	scanf("%d", &w_a);
	if(w_a>balance){
		printf("Insufficient Balance.");
	}else{
		balance = balance-w_a;
		printf("Transaction Succesful. \nBalance Remaining: %d", balance);
	 }
	}
	return 0;
}