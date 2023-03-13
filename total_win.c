#include <stdio.h>
#include <stdlib.h>

void totalWin(int numOfBets, float win1, float win2, float win3, float bonus, float totalWinning)
{

	printf("\n==========PYGAMES =============");
	printf("\n=======HOME OF SPORTS============");
	printf("\nsport type:     DATE:     TIME:");
	printf("\nBetting          %s       %s      ", __DATE__, __TIME__);
	printf("\n-----------------------------------------");
	printf("\n Total bets: %d                              ", numOfBets);
	printf("\nBet 1 winnings ____________________ksh %.2f", win1);
	printf("\nBet 2 winnings ____________________ksh %.2f", win2);
	printf("\nbet 3 winnings ____________________ksh %.2f", win3);
	printf("\nBonus _____________________________ksh %.2f", bonus);
	printf("\n\n-----------------------------------------");
	printf("\nTotal                             ksh %.2f", totalWinning);

	printf("\n============Thank you =============");
	printf("\n");
	printf("\n    Indroducing Our Mega Jackport.  ");
	printf("\n    WELCOME AGAIN and AGAIN.");

}
