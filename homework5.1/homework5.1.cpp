#include "homework5.1.hpp"

int addition(int num1, int num2)
{
	return num1 + num2;
}

int subtraction(int num1, int num2)
{
	return num1 - num2;
}

int multiplication(int num1, int num2)
{
	return num1 * num2;
}

int division(int num1, int num2)
{
	return num1 / num2;
}

int raising_to_a_power(int num1, int num2)
{
	int power{ 1 }, iter{ 0 };
	while (iter < num2)
	{
		power *= num1;
		++iter;
	}
	return power;
}