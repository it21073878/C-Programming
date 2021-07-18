// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A
#include<stdio.h>
int main(void)
{
	//ariables
	char trancTyp;
	double  bal;
	double amt;
	double newbal;
	
	printf("Enter Transaction type (W - withdrawls , D - Deposit) : "); 
	trancTyp = getchar(); //Transcaction type
	
	if (trancTyp == 'W' || trancTyp == 'w')
		{
			
			printf("You have selected to withdraw money \n");
			printf("====================================\n");	
			printf("Enter the bank balance : "); 
			scanf("%lf", &bal);	 // bank balance		
			
			
			printf("Enter  withhdraw ammount : ");
			scanf("%lf", &amt); //withhdraw ammount
			
			newbal = bal - amt ;
			printf("New Bank balance : %.2f", newbal); //New Bank balance
			
		}	
	else if (trancTyp == 'D'|| trancTyp == 'd')
		{
			
			printf("You have selected to deposit money\n");	
			printf("==================================\n");
			printf("Enter the bank balance : ");
			scanf("%lf", &bal);// bank balance
			
			
			printf("Enter  deposit ammount : ");
			scanf("%lf", &amt); //deposit ammount
			
			newbal = bal + amt ;
			printf("New Bank balance : %.2f", newbal);	//New Bank balance
				
		}
	else 
		{ 
			printf("You have selected an invalid transaction type");		
			
		}	
	
	return 0;
	
}
