#include <iostream>

int getNumber()
{
	std::cout << "Please enter a number to solve for factorial: ";
	int number{};
	std::cin >> number;

	return number;
}

int factorialWhile(int number)
{
	int whileNumber{ 1 };
	int i{ 1 };

	while (i <= number)
	{
		whileNumber *= i;
		i++;
	}
	
	return whileNumber;
}

int factorialFor(int number)
{
	int forNumber{ 1 };
	
	for (int i = 1; i <= number; i++)
	{
		forNumber *= i;
	}

	return forNumber;
}

int main()
{
	std::cout << "For Loop: " << '\n';
	std::cout << "Result: " << factorialFor(getNumber()) << '\n' << '\n';

	std::cout << "While Loop: " << '\n';
	std::cout << "Result: " << factorialWhile(getNumber()) << '\n';

	return 0;
}