#include <iostream>
#include <GitVersion.hpp>

int main( int p_Argc, char **p_ppArgv )
{
	std::cout << "Straitjacket" << std::endl;
	std::cout << "Version: " << GIT_BUILD_VERSION << " | [" << GIT_TAG_NAME <<
		"]" << std::endl;
	std::cout << "Build date: " << GIT_COMMITTERDATE << std::endl;
	std::cout << "Commit hash: " << GIT_COMMITHASH << std::endl;

	return 0;
}

