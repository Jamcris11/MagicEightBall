
#include <iostream>
#include "../include/MagicEightBall.h"

int main(int argc, char* argv[]) 
{
	std::vector<std::string> responses =
		std::vector<std::string>(

	MagicEightBall meb = MagicEightBall();

	meb.AddResponse("Yes.");
	meb.AddResponse("No.");
	meb.AddResponse("Maybe...");
	meb.AddResponse("Please ask again.");
	
	std::cout << meb.Shake() << '\n';

	return 0;
}
