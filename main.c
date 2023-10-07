#include <stdio.h>
#include <stdlib.h>

int createAccount() {
	int password,password2,id;
	printf("Enter your id\n");
	scanf("%d",&id);
	printf("\n");
	printf("Enter your password\n");
	scanf("%d",&password);
		printf("Welcome %c\n",id);
		printf("Your account info: \n");
		printf(".\n");
		printf("..\n");
		printf("...\n");
		printf("....\n");
		printf(".....\n");
		printf("Your account name: %d\n",id);
		printf("Your password: %d\n",password);

}

int deposit() {

    int amount;
    printf("How much money do you have in your hand?\n");
    scanf("%d",&amount);
    printf("Transaction accepted. You %d $ deposited to the bank account\n",amount);
}

int withdraw() {
	int amount;
	printf("How much money do you want to withdraw from your account\n");
	scanf("%d",&amount);
	printf("Transaction accepted. You %d $ withdraw from your account\n",amount);
}

int payment(){

	int prices[] = {20,50,600,100};
	printf("Water bill: %d",prices[0]);
	printf("Electricity bill: %d",prices[1]);
	printf("House bill: %d",prices[2]);
	printf("Food: %d",prices[3]);
}

int main() {

	int option;
	printf("Welcome to the ... Bank\n");
	printf("What do you want to do ? (1.Create account 2.Deposit 3.Withdraw 4.Payment 5.exit)\n");
	scanf("%d",&option);

	switch(option){
		case 1:
			createAccount();
            break;
		case 2:
		    deposit();
            break;
        case 3:
        	withdraw();
        	break;
         case 4:
        	payment();
        	break;
        case 5:
        	break;
	}

	return 0;
}
