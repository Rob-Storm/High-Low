#include <iostream>
#include <string.h>
#include <random>

int lives = 10;

void CompareNumbers(int yourGuess, int compNumb)
{
	if (yourGuess == compNumb)
	{
		printf("You Win!");

		exit(EXIT_SUCCESS);
	}

	if (yourGuess > compNumb)
	{
		printf("Too High! \n");

		lives--;
	}

	if (yourGuess < compNumb)
	{
		printf("Too Low! \n");

		lives--;
	}
}

int main()
{
	int randomNumber;
	int numGuess;
	bool isPlaying = true;

	srand(time(NULL));

	randomNumber = rand() % 100 + 1;

	printf("Guess a number 1-100 \n");
	while (isPlaying)
	{

		if (lives > 0)
		{		
			std::cout << "You have " << lives << " guesses left. \n";

			std::cin >> numGuess;

			CompareNumbers(numGuess, randomNumber);
		}

		else
		{
			printf("You Lose!\n");

			exit(EXIT_SUCCESS);
		}

	}

}