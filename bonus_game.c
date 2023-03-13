#include <stdio.h>
#include <stdlib.h>

float bonusTotalCash(void)
{
	int bonusRand;
	float question1 = 0;
	float question2 = 0;
	float question3 = 0;
	float question4 = 0;
	float question5 = 0;
	float question6 = 0;
	float question7 = 0;
	float question8 = 0;
	float question9 = 0;
	float question10 = 0;


	int bonus1, bonus2, bonus3, bonus4, bonus5, bonus6, bonus7, bonus8, bonus9, bonus10;
	float totalBonus;
	int miniBonus;


	/* srand(time(NULL));

	int bonusRand = (rand() % 10); */
	printf("\n\n");
	printf("\n_______WELCOME TO BONUS_______");
	printf("\nChoose a question between 1 - 10\t");
	scanf("%d", &bonusRand);


	switch (bonusRand) {

		case 1:
			printf("\nChoose the correct answer from below:\t");
			printf("\n which was the first club to win the English premier legue.\t");
			printf("\n1. Manchester United");
			printf("\n2. Aston villa.");
			printf("\n3. Arsenal.");
			printf("\n4. Nottingham Forest.\t");
			scanf("%d", &bonus1);

			if (bonus1 == 1)
			{
				printf("\nYou have won the bonus question.");
				printf("\nYour Bonus is ksh1000.");

				question1 = 1000;

			}
			else if (bonus1 != 1)
			{
				printf("\nYou are wrong.");
				printf("\nTry again later.");
				question1 = 0;
			}

			break;

		case 2:
			printf("\n_______WELCOME TO BONUS_______");
			printf("\nChoose the correct answer from below:\t");
			printf("\nWhich year the world cup started:\t");
			printf("\n1. 1910.");
			printf("\n2. 1945.");
			printf("\n3. 1930.");
			printf("\n4. 1990.\t");

			scanf("%d", &bonus2);

			if (bonus2 == 3)
			{
				printf("\nYou have won the bonus question.");
				printf("\nYour Bonus is ksh1000.");
				question2 = 1000;

			}
			else if (bonus2 != 3)
			{
				printf("\nFinal chance. Try again.");
				printf("\nWhich was the first country to host the world cup:\t");
				printf("\n1. USA.");
				printf("\n2. Brazil.");
				printf("\n3. France.");
				printf("\n4. Uruguay.\t");
				scanf("%d", &miniBonus);

				if (miniBonus == 4)
				{
					printf("\nYou have won the mini bonus question.");
					printf("\nYou have won ksh 500.");
					question2 = 500;
				}
				else if (miniBonus != 4)
				{
					printf("\nYou are wrong.");
					printf("\nTry again later.");
					question2 = 0;
				}

			}

			break;

		case 3:
			printf("\n_______WELCOME TO BONUS_______");
			printf("\nChoose the correct answer from below:\t");
			printf("\nWhich country held the Olympics in 2020\t");
			printf("\n1. Kenya.");
			printf("\n2. Japan.");
			printf("\n3. Great Britain.");
			printf("\n4. United states.\t");
			scanf("%d", &bonus3);

			if (bonus3 == 2)
			{
				printf("\nYou have won the mini bonus question.");
				printf("\nYou have won ksh 1000.");
				question3 = 1000;

			}
			else if (bonus3 != 2)
			{
				printf("\nYou are wrong.");
				printf("\nTry again later.");
				question3 = 0;

			}

			break;

		case 4:
			printf("\n_______WELCOME TO BONUS_______");
			printf("\nChoose the correct answer from below:\t");
			printf("\nWhich club has won the most UEFA Champions league.");
			printf("\n1. AC Milan");
			printf("\n2. FC Bayern Munich.");
			printf("\n3. Real Madrid.");
			printf("\n4. Barcelona.\t");
			scanf("%d", &bonus4);

			if (bonus3 == 3)
			{
				printf("\nYou have won the mini bonus question.");
				printf("\nYou have won ksh 1000.");
				question4 = 1000;

			}
			else if (bonus4 != 3)
			{
				printf("\nYou are wrong.");
				printf("\nTry again later.");
				question4 = 0;

			}

			break;

		case 5:
			printf("\n_______WELCOME TO BONUS_______\n");
			printf("\nLucky You. You chose a MEGA QUESTION.");
			printf("\nYou have three Chases to bet for free.\n");
			printf("\nWhich was the world's First Sport.");
			printf("\n1. Football.");
			printf("\n2. Wrestling.");
			printf("\n3. Golf.");
			printf("\n4. Formula One.");
			scanf("%d", &bonus5);

			/* more questions to add here */

			if (bonus5 == 2)
			{
				printf("\nYou have won the mini bonus question.");
				printf("\nYou have won ksh 1000.");
				question5 = 1000;
			}
			else if (bonus5 != 2)
			{
				printf("\nYou are wrong.");
				printf("\nTry again later.");
				question5 = 0;
			}
			break;

		case 6:
			printf("\n_______WELCOME TO BONUS_______\n");
			printf("\nWhich is the world's most popular sport.");
			printf("\n1. Formula One.");
			printf("\n2. American football.");
			printf("\n3. Soccar.");
			printf("\n4. Golf.");
			scanf("%d", &bonus6);

			if (bonus6 == 3)
			{
				printf("\nYou have won the mini bonus question.");
				printf("\nYou have won ksh 1000.");
				question6 = 1000;
			}
			else if (bonus6 != 3)
			{
				printf("\nYou are wrong.");
				printf("\nTry again later.");
				question6 = 0;
			}
			
			break;
		case 7:
			printf("\n_______WELCOME TO BONUS_______\n");
			printf("\nWho is the world's Fastest man.");
			printf("\n1. Devid Rundisha.");
			printf("\n2. Ferdinand Omanyala.");
			printf("\n4. Erriyon Knighton.");
			printf("\n4. Usain Bolt.");
			scanf("%d", &bonus7);

			if (bonus7 == 4)
			{
				printf("\nYou have won the mini bonus question.");
				printf("\nYou have won ksh 1000.");
				question7 = 1000;
			}
			else if (bonus7 != 4)
			{
				printf("\nYou are wrong.");
				printf("\nTry again later.");
				question7 = 0;
			}

			break;

		case 8:
			printf("\n_______WELCOME TO BONUS_______\n");
			printf("\n Who is the most paid footballer as of 2022.");
			printf("\n1. Lionel Messi.");
			printf("\n2. Devid De gea.");
			printf("\n3. Cristiano Ronaldo.");
			printf("\n4. Kylian Mbappe.");
			scanf("%d", &bonus8);

			if (bonus8 == 3)
			{
				printf("\nYou have won the mini bonus question.");
				printf("\nYou have won ksh 1000.");
				question8 = 1000;
			}
			else if (bonus8 != 3)
			{
				printf("\nYou are wrong.");
				printf("\nTry again later.");
				question8 = 0;
			}

			break;

		case 9:
			printf("\n_______WELCOME TO BONUS_______\n");
			printf("\nWho is the richest footballer.");
			printf("\n1. Faiq Bolkiah.");
			printf("\n2. Eden Hazard.");
			printf("\n3. Erling haaland.");
			printf("\n4. Robart Lewandowski.");
			scanf("%d", &bonus9);

			if (bonus9 == 1)
			{
				printf("\nYou have won the mini bonus question.");
				printf("\nYou have won ksh 1000.");
				question9 = 1000;

			}
			else if (bonus9 != 1)
			{
				printf("\nYou are wrong.");
				printf("\nTry again later.");
				question9 = 0;
			}
			break;

		case 10:
			printf("\n_______WELCOME TO BONUS_______\n");
			printf("\nWho is the most successful coach in the world.");
			printf("\n1. Alex Ferguson.");
			printf("\n2. pep Guardiola.");
			printf("\n3. Jose Mourinho.");
			printf("\n4. Arsene Wenger.");
			scanf("%d", &bonus10);

			if (bonus10 == 1)
			{
				printf("\nYou have won the mini bonus question.");
				printf("\nYou have won ksh 1000.");
				question10 = 1000;
			}
			else if (bonus10 != 1)
			{
				printf("\nYou are wrong.");
				printf("\nTry again later.");
				question10 = 0;
			}

			break;

			printf("\n_______WELCOME TO BONUS_______");
			printf("\nChoose the correct answer from below:\t");

	}

	totalBonus = question1 + question2 + question3 + question4 + question5 + 
		question6 + question7 + question8 + question9 + question10;
	printf("bonus is %.2f", totalBonus);


	return (totalBonus);
































}
