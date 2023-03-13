#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "main.h"



struct gamers{
	char name[30];
	float accountBalance;
};


int main(void)
{
	struct gamers user;

	/* seed value for rand() */
	srand(time(NULL));

	int computer1, computer2, computer3;
	float totalWinning;
	float bonus;
	int numOfBets = 0;

	rules();


	printf("\n________________WELCOME TO PYGAME.__________________\n\n");
	printf("\nWhat is your name? ");
	fgets(user.name, 30, stdin);

	printf("\nAmount to depost:\t");
	scanf("%f", &user.accountBalance);

	if (user.accountBalance < 100)
	{
		printf("\nThe minimum amount you can depost is 100.");
		printf("\nTry again.");
	}
	else if (user.accountBalance > 2000)
	{
		printf("\nThe maximum money you can depost is 2000.");
		printf("\nTry again.");
	}

	system("clear");


	computer1 = (rand() % 10);

	float bet1;
	int gess1;
	float win1;

	printf("%d\n", computer1);

	printf("\nStarting the game now.\n");
	printf("\nBET ROUND 1.");
	printf("\nEnter the amount you want to bet:\t");
	scanf("%f", &bet1);

	if (bet1 > user.accountBalance)
	{
		printf("\nInsufficent Balance to bet %.2f.", bet1);
		printf("\nYour Balance is %.2f.", user.accountBalance);
		printf("\nBet with Less amount.");

		return (0);
	}
	
	user.accountBalance = user.accountBalance - bet1;
	numOfBets += 1;


	printf("\nGeuss a number number between 0 - 9:\t");
	scanf("%d", &gess1);

	if (computer1 == gess1)
	{
		printf("\n------ Congratulation -----");
		printf("\n%s you have won the bet.", user.name);

		win1 = bet1 * 5;
		user.accountBalance += win1;
		printf("\nYou have won %.2f. New balance is %.2f.", win1, user.accountBalance);
	}
	else if (computer1 != gess1)
	{
		printf("\nYou have lost the game.");
		printf("\nThe winning number was %d.", computer1);
		printf("\nYour account balance is %.2f\n\n", user.accountBalance);
		win1 = 0;

	}

	float bet2;
	int gess2;
	float win2;

	computer2 = (rand() % 10);

	printf("\n\n");


	printf("\nBet round two is underway.");
	printf("\nEnter the amount you want to bet: ");
	scanf("%f", &bet2);

	printf("\n%d\n", computer2);

	if (bet2 > user.accountBalance)
	{
		printf("\nInsufficent Balance to bet %.2f.", bet2);
		printf("\nYour Balance is %.2f.", user.accountBalance);
		printf("\nBet with Less amount.");

		return (0);
	}

	user.accountBalance -= bet2;
	numOfBets += 1;

	printf("\nGeuss a number bettwen 0 - 9:\t");
	scanf("%d", &gess2);

	if (computer2 == gess2)
	{
		printf("\n------ Congratulation -----\n");
		printf("%s you have won the bet.", user.name);

		win2 = bet2 * 5;
		user.accountBalance += win2;
		printf("\nYou have won %.2f. New balance is %.2f.", win2, user.accountBalance);

	}
	else if (computer2 != gess2)
	{
		printf("\nYou have lost the game.");
		printf("\nThe winning number was %d.", computer2);
		printf("\nYour account balance is %.2f\n\n", user.accountBalance);
		win2 = 0;
	}

	printf("\n\n");

	float bet3;
	int gess3;
	float win3;

	computer3 = (rand() % 10);

	printf("\nBet three is underway.");
	printf("\nEnter the amount you want to bet: ");
	scanf("%f", &bet3);

	printf("\n%d\n", computer3);

	if (bet3 > user.accountBalance)
	{
		printf("\nInsufficent Balance to bet %.2f.", bet3);
		printf("\nYour Balance is %.2f.", user.accountBalance);
		printf("\nBet with Less amount.");

		return (0);
	}

	user.accountBalance -= bet3;
	numOfBets += 1;

	printf("\nGeuss a number bettwen 0 - 9:\t");
	scanf("%d", &gess3);


	if  (gess3 == computer3)
	{
		printf("\n------ Congratulation -----\n");
		printf("%s you have won the bet.", user.name);

		win3 = bet3 * 5;
		user.accountBalance += win3;
		printf("\nYou have won %.2f. New balance is %.2f.", win3, user.accountBalance);
	}
	else if (gess3 != computer3)
	{
		printf("\nYou have lost the game.");
		printf("\nThe winning number was %d.", computer3);
		printf("\nYour account balance is %.2f\n\n", user.accountBalance);
		win3 = 0;
	}

	bonus = bonusTotalCash();
	totalWinning = win1 + win2 + win3 + bonus;


	printf("\n\n");

	totalWin(numOfBets, win1, win2, win3, bonus, totalWinning);


	printf("\n\n");
	return (0);
}
