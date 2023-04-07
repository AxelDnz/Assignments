#include <iostream>

int main()
{
	std::cout << "Please enter cost price: ";
	double costPrice{};
	std::cin >> costPrice;

	std::cout << "Please enter selling price: ";
	double sellingPrice{};
	std::cin >> sellingPrice;

	if (sellingPrice - costPrice > 0)
		std::cout << "Profit = " << sellingPrice - costPrice << '\n';
	else if (sellingPrice - costPrice < 0)
		std::cout << "Loss = " << costPrice - sellingPrice << '\n';
	else
		std::cout << "No Profit and No Loss." << '\n';


	return 0;
}