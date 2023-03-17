#include <iostream>
#include <cmath>									 // cmath library is included to call function pow()

//AUTHOR: AKSEL DENIZ AKGUL


void CalculateCircleAreaVer_1()						 // In this function, std::cin and std::cout is used.
{
	const double pi{ 3.14 };                         // An unchangable, constant value is initialized to variable "pi"
	double radius{};

	std::cout << "Please enter radius length: ";
	std::cin >> radius;
	
	double Area{ pow(radius,2) * pi };

	std::cout << "Circle area with radius " << radius << " is " << Area << " unit square." << std::endl;
}

void CalculateCircleAreaVer_2()						// In this function, printf and scanf_s is used.
{
	const double pi{ 3.14 };
	double radius{};

	printf("Please enter radius length: ");
	scanf_s("%lf", &radius);                        // scanf_s is safer to use than scanf, %lf indicates that the input value will be type double

	double Area{ pow(radius,2) * pi };              // pow() is called to calcuate the base radius with exponent 2

	printf("Circle area with radius %lf is %lf unit square.\n", radius, Area);
}


int main()
{
	CalculateCircleAreaVer_1();

	CalculateCircleAreaVer_2();

	return 0;
}