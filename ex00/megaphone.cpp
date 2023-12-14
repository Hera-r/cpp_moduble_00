#include <iostream>

std::string toUpper(const std::string& str) 
{
	std::string result = str;

	for (size_t i = 0; i < result.length(); ++i) {
		result[i] = std::toupper(result[i]);
	}
	return result;
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		std::string upperCase;
		for (int i = 1; i < argc; i++)
		{
			upperCase = toUpper(argv[i]);
			std::cout << upperCase;
		}
		std::cout << std::endl;
	}
	else
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

	return 0;
}

