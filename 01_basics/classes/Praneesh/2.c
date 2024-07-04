#include <iostream>
#include <stdlib.h>
#include <string.h>

struct brainrot
{
	char *skibidi_name;
	int sigma_level;
	int rizz_level;
};


int main()
{
	char buffer[20];
	std::cout << "your name : "<<std::endl;
	std::cin.getline(buffer,20);

	struct brainrot b1;
	b1.skibidi_name = (char *)malloc(sizeof(char) * ((sizeof(buffer)/(sizeof(buffer[0]))) + 1));
	strcpy(b1.skibidi_name,buffer);
	b1.sigma_level = 10;
	b1.rizz_level = 10;

	std::cout << b1.skibidi_name << std::endl;

	return 0;
}