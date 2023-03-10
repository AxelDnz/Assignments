#include <iostream>

// AUTHOR: AKSEL DENIZ AKGUL

void Fibonacci(int N)
{
	// index,first, second and sum is initialized here
	int index{ 0 };
	int firstValue{ 0 };
	int secondValue{ 1 };
	unsigned long long int sum{ 0 };

	// This part here is not inside the loop because first 2 numbers must be printed out without taking their sum.
	std::cout << "Number N's index is " << index << " and value is " << firstValue << '\n';  // first value is printed out here
	index++;
	std::cout << "Number N's index is " << index << " and value is " << secondValue << '\n'; // secon value is printed out here
	index++;

	// This loop is used to print out results according to given "N" value
	while (index != N + 1)
	{
		sum = firstValue + secondValue;
		std::cout << "Number N's index is " << index << " and value is " << sum << '\n';
		index += 1;
		firstValue = secondValue;
		secondValue = sum;
	}
}


int main()
{
	std::cout << "Please enter a natural number: ";
	int N{ 0 };
	std::cin >> N;
	std::cout << '\n';

	Fibonacci(N);
	
	return 0;
}
