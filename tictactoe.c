#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char letterOption;
int userChoice;

void Menu()
{
	printf("-----Menu------\n");
	printf("1 : Play with X\n");
	printf("2 : Play with O\n");
	printf("3 : Exit\n");

}

void DrawBoard()
{
	printf("Enter your choice: "); //1 for x 2 for o
	scanf("%c", &letterOption);
	if(letterOption == 'X' | letterOption == 'x')
	{
		printf("Where would you like to place your \"X\"\n");
	}
	else
	{
		printf("Where would you like to place your \"O\"?\n");
	}
	
	/*printf("     |     |     \n");
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("     |     |     \n");
*/
}

void GoPlayer1()
{
	
	printf("Please select location 1,2,3,4,5,6,7,8 or 9:");
	scanf("%d", &userChoice);
	if(userChoice == 1)
	{
		printf("  X  |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}
	else if(userChoice == 2 )
	{
		printf("     |  X  |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}
	else if (userChoice == 3)
	{
		printf("     |     |  X  \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}
	else if (userChoice == 4)
	{
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("  X  |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}
	else if (userChoice == 5)
	{
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |  X  |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}
	else if (userChoice == 6)
	{
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |  X  \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}
	else if (userChoice == 7)
	{
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("  X  |     |     \n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}
	else if (userChoice == 8)
	{
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |  X  |     \n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}
	else if (userChoice == 9)
	{
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |  X  \n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}


		
	
}

void GoPlayer2()
{
	printf("Please select location 1,2,3,4,5,6,7,8 or 9:");
	scanf("%d", &userChoice);
	
	if(userChoice == 2)
	{
		printf("   X |  O  |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("     |     |     \n");
		printf("Position 2 has been filled\n");
	}
	else if (userChoice == 3)
	{
		printf("   X |     |  O  \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("     |     |     \n");
		printf("Position 3 has been filled\n");
	}
	else if (userChoice == 4)
	{
		printf("  X  |     |     \n");
		printf("_____|_____|_____\n");
		printf("  O  |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("     |     |     \n");
		printf("Position 4 has been filled\n");
	}
	else if (userChoice == 5)
	{
		printf("  X  |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |  O  |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("     |     |     \n");
		printf("Position 5 has been filled\n");
	}
	else if (userChoice == 6)
	{
		printf(" X   |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |  O  \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("     |     |     \n");
		printf("Position 6 has been filled\n");
	}
	else if (userChoice == 7)
	{
		printf("  X  |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("  O  |     |     \n");
		printf("     |     |     \n");
		printf("Position 7 has been filled\n");
	}
	else if (userChoice == 8)
	{
		printf("     |     |     \n");
		printf("___X_|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |  O  |     \n");
		printf("     |     |     \n");
		printf("Position 8 has been filled\n");
	}
	else if (userChoice == 9)
	{
		printf("   X |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |  O  \n");
		printf("     |     |     \n");
		printf("Position 9 has been filled\n");
	}
	

}

void Player1SecondMove()
{
		printf("Please select location 1,2,3,4,5,6,7,8 or 9:");
	scanf("%d", &userChoice);
	
	if(userChoice == 2 )
	{
		printf("     |  X  |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}
	else if (userChoice == 3)
	{
		printf("     |     |  X  \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}
	else if (userChoice == 4)
	{
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("  X  |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}
	else if (userChoice == 5)
	{
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |  X  |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}
	else if (userChoice == 6)
	{
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |  X  \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}
	else if (userChoice == 7)
	{
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("  X  |     |     \n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}
	else if (userChoice == 8)
	{
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |  X  |     \n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}
	else if (userChoice == 9)
	{
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("_____|_____|_____\n");
		printf("     |     |  X  \n");
		printf("     |     |     \n");
		printf("Next Player, GO!\n");
	}


		
	
}





int main()
{
	Menu();
	DrawBoard();
	GoPlayer1();
	GoPlayer2();

	
	return 0;
}