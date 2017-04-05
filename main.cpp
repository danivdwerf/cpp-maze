#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

int main(int arg, char* argv[])
{
	std::vector<std::string> ascii;
	ascii.push_back("\u02E5");
	ascii.push_back("\u02E6");
	ascii.push_back("\u02E7");
	ascii.push_back("\u02E8");
	ascii.push_back("\u02E9");
	ascii.push_back("\u02EA");
	ascii.push_back("\u02EB");
	ascii.push_back("\u250C");
	ascii.push_back("\u2518");

	for(int i = 0; i<10; i++)
	{
		for(int j = 0; j<10; j++)
		{
			if(j == 9 && i == 0)
			{
				std::cout<<ascii[0]<<"\n";
			}
			else if(j == 9 && i == 9)
			{
				std::cout<<ascii[4]<<"\n";
			}
			else if(j == 0 && i == 9)
			{
				std::cout<<ascii[5];
			}
			else if(j==0 && i== 0)
			{
				std::cout<<ascii[7];
			}
			else if(j==9)
			{
				std::cout<<ascii[1]<<"\n";	
			}
			else if(j==0)
			{
				std::cout<<ascii[1];
			}
			else
			{
				std::cout<<ascii[rand() % ascii.size()-1];
			}
		}
	}
	return 0;
}