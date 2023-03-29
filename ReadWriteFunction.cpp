#include <iostream>


double FunctionQ(double x, double y)
{
	double valueQ{ (x * x + (3 * x * y) - 15) / (2 * y) };

	return valueQ;
}


int main()
{
	std::cout << "Please give input value for 'x': ";
	double x{};
	std::cin >> x;
	std::cout << "Please give input value for 'y': ";
	double y{};
	std::cin >> y;

	std::cout << "The output value of function Q is: " << FunctionQ(x, y) << '\n';

	return 0;
}