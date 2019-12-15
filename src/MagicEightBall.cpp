
#include "../include/MagicEightBall.h"

MagicEightBall::MagicEightBall()
{
	std::srand(time(NULL));
	this->m_responses = std::vector<std::string>();
}


MagicEightBall::MagicEightBall(std::vector<std::string> responses)
{
	std::srand(time(NULL));

	this->m_responses = responses;
}


MagicEightBall::~MagicEightBall()
{

}



int MagicEightBall::AddResponse(std::string value)
{
	this->m_responses.push_back(value);

	return 0;
}


std::string MagicEightBall::Shake()
{
	int v = std::rand() % this->m_responses.size();

	return this->m_responses[v];
}
