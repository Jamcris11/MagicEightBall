#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

class MagicEightBall
{
	// Just stores all the possible answers the magic eight ball can say.
	std::vector<std::string> m_responses;

public:
	// Boring constructors
	MagicEightBall();
	MagicEightBall(std::vector<std::string> responses);
	~MagicEightBall();
	
	// Adds a new possible response your magic eight ball can operate with!
	int AddResponse(std::string value);
	
	// Shakes the magic eight ball and returns an answer!
	std::string Shake();
};
