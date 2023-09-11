#include <iostream>
#include <string>
#include <ctime>

enum GAME
{
	ROCK = 1,
	PAPER = 2,
	SCICCORS = 3,
};

// sciccors game
void game(int x)
{	

	int num = rand() % 3 + 1; // random number 1 to 3;
	if(num == ROCK)
	{
		if(x == SCICCORS)
		{
			std::cout <<"You lose" << "\n" << "Computer choosed: " << "Rock" << "\n "  << " Rock beat sciccors" <<std::endl;
		}
		else if( x == PAPER)
		{
			std::cout <<"You win" << "\n" << "Computer choosed: " << "Rock"  << "\n " << " Paper beat scissors" <<std::endl;
		}
		else
		{
			std::cout <<"Its a tie" << std::endl;
		}
	}
	else if(num == PAPER)
	{
		if(x == ROCK)
		{
			std::cout <<"You lose " << "\n" << "Computer choosed: " << "Paper" << "\n "<< "Paper beat rock" << std::endl;
		}
		else if(x == SCICCORS)
		{
			std::cout <<"You win" << "\n" << "Computer choosed: " << "Paper"  << "\n " << "sciccors beat paper" <<std::endl;
		}
		else
		{
			std:: cout << "Its a tiee " << std:: endl;
		}
	}
	else
	{
		if(x == ROCK)
		{
			std::cout <<"You win" << "\n" << "Computer choosed: " << "Sciccors"  << "\n " << " rock beat sciccors" <<std::endl;
		}
		else if(x == PAPER)
		{
				std::cout <<"You lose " << "\n" << "Computer choosed: " << "Scissors"  << "\n " << " sciccors beat paper" << std::endl;
		}
		else
		{
			std::cout <<"Its a tieee" << std::endl;
		}
	}
	
}


int main()
{	
	srand(time(0));
	std::cout << "Press 1: Rock\n Press 2: Paper \n Press 3: Scissors" << std::endl;
	int x{};
	std::cin>>x;
	game(x);

	
	return 0;

}