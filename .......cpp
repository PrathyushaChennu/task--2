#include<iostream>
#include<cstdlib>
#include<ctime>
int main()
{
	srand(time(0));
	int randomNumber=rand()%100+1;
	int userGuess;
	int attempts;
	std::cout<<"Welcome to the Number Guessing Game!\n";
	do
	{
		std::cout<<"enter your guess:";
		std::cin>>userGuess;
		attempts++;
		if(userGuess<randomNumber)
		{
			std::cout<<"Too low!Try again\n";
			
		}
		else
		{
			std::cout<<"Congratulations!You guessed the number"<<randomNumber<<"in"<<attempts<<"attempts.\n";
		}
	}
	while(userGuess!=randomNumber);
	return 0;
}
