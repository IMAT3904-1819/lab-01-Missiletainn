// GithubProject1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <time.h>


int main()
{
	int x;
	srand(time(NULL));
	x = rand() % 100 + 1;
	int y = 0;
	int iWin = 0;
	int z = 5;
	char iPlayAgain;
	while (iWin != 1)
	{
		std::cout<< "Guess a Number between 1 and 100, you have "<< z << " Guesses Remaining" << std::endl;
		std::cin >> y;
		if (y == x)
		{
			std::cout << "Congratulations You got it right" << std::endl;
			std::cout << "the Number was " << x << std::endl;
			std::cout << "Type y if you want to play again" << std::endl;
			std::cin >> iPlayAgain;
			if (iPlayAgain == 'y' || iPlayAgain == 'Y')
			{
				srand(time(NULL));
				x = rand() % 100 + 1;
				z = 5;
			}
			else
			{
				iWin = 1;
			}
		}
		else if (y > x)
		{
			std::cout << "The Number is Lower" << std::endl;
			z--;
			if (z == 0)
			{
				std::cout << "You are out of guesses" << std::endl;
				std::cout << "the Number was " << x << std::endl;
				std::cout << "Type y if you want to play again" << std::endl;
				std::cin >> iPlayAgain;
				if (iPlayAgain == 'y' || iPlayAgain == 'Y')
				{
					srand(time(NULL));
					x = rand() % 100 + 1;
					z = 5;
				}
				else
				{
					iWin = 1;
				}
			}
			else
			{
				std::cout << "Guess again" << std::endl;
			}
		}
		else if (y < x)
		{
			std::cout << "The Number is Higher" << std::endl;
			z--;
			
			if (z == 0)
			{
				std::cout << "You are out of guesses" << std::endl;
				std::cout << "the Number was " << x << std::endl;
				std::cout << "Type y if you want to play again" << std::endl;
				std::cin >> iPlayAgain;
				if (iPlayAgain == 'y' || iPlayAgain == 'Y')
				{
					srand(time(NULL));
					x = rand() % 100 + 1;
					z = 5;
				}
				else
				{
					iWin = 1;
				}
			}
			else
			{
				std::cout << "Guess again" << std::endl;
			}
		}
		else if (std::error_condition())
		{
			std::cin.clear();
			std::cin.ignore();
			y = 0;
			std::cout << "that wasn't a number, try again" << std::endl;
			
		}


	}

	system("pause");
	system("cls");




    return 0;
}

