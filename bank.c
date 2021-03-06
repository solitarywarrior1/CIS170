/*Justin Newman
CIS170 Section 01
Bank Program*/

#include<stdio.h>

void displayMenu();
void getBalance(double );
double getWithdrawal(double );
double getDeposit(double );

int main()
	{
		char selection;
		double balance,withdrawal;
		
		displayMenu();
		
		do
			{

				scanf("\n%c",&selection);

				switch(selection)
					{
					case 'D':case 'd':
						system("cls");
						balance=getDeposit(balance);
						displayMenu();
					break;
					case 'W':case 'w':
						system("cls");
                        balance=getWithdrawal(balance);
                        displayMenu();
					break;
					case 'B':case 'b':
						system("cls");
						getBalance(balance);
						displayMenu();
					break;
					case 'Q':case 'q':
						system("cls");
						printf("\nThank you, come again");
					break;
					default :
						system("cls");
						printf("\nPlease make a valid selection from the following menu:\n");
						displayMenu();
					}

			}while(selection!='Q'||selection!='q');

		return 0;

	}

void displayMenu()
	{
		printf("\nWelcome to HFCC Federal Credit Union");
		printf("\n\nPlease select from the following menu:");
		printf("\n\nD:\tMake a deposit");
		printf("\nW:\tMake a withdrawal");
		printf("\nB:\tCheck your account balance");
		printf("\nQ:\tTo quit");
		printf("\n\nPlease enter your selection now:");
	}
	
void getBalance(double current)
	{
		printf("\nYour current balance is $%.2lf\n",current);
	}
	
double getDeposit(double balance)
	{
		double deposit;
		
		printf("enter your deposit amount");
		scanf("%lf",&deposit);
		balance=balance+deposit;
		
		return(balance);
	}
	
double getWithdrawal(double balance)
	{
		double withdrawal;
		
		printf("Enter a new withdrawal amount");
		scanf("%lf",&withdrawal);
		
		if(balance>=withdrawal)
			{
				balance=balance-withdrawal;
			}
		else
			{
				do
				{
			
				printf("\nyou do not have sufficient funds to make this withdrawal, please try again\n");
				printf("Enter a new withdrawal amount");
				scanf("%lf",&withdrawal);
				
				}while(withdrawal>balance);
				
				balance=balance-withdrawal;
			}
			
		return(balance);
	}
