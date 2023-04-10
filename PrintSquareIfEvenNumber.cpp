#include <iostream>


int main()
{
	std::cout << "Please enter an integer number: ";
	int number{};
	std::cin >> number;

	if (number % 2 == 0)
		std::cout << "Number is even, result = " << number * number << '\n';
	else
		std::cout << "Number is odd, no calculation." << '\n';


	return 0;
}