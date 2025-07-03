#include "stdafx.h"
#include <iostream>



int fib(int a) {
	for (int i = 0; i < a; i++) {
		if (a == 0 || a == 1)
		{
			return a;
		}
		else return (fib(a - 1) + fib(a - 2));
	}
}


int main()
{
	setlocale(LC_ALL, "russian");
	int a;
	int mas[100];
	std::cout << "Введите число: ";
	std::cin >> a;
	std::cout << std::endl;
	std::cout << "Числа Фибоначчи: ";
	for (int i = 0; i < a; i++)
	{
		mas[i] = fib(i);
		std::cout << mas[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}


