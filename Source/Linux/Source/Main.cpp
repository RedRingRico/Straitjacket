#include <iostream>
#include <Game.hpp>

int main( int p_Argc, char **p_ppArgv )
{
	std::cout << "Straitjacket" << std::endl;

	Straitjacket::Game TheGame;

	if( TheGame.Initialise( ) != ZED_OK )
	{
		std::cout << "[Straitjacket::main] <ERROR> Failed to initialise the "
			"game" << std::endl;

		return ZED_FAIL;
	}

	return TheGame.Execute( );
}

