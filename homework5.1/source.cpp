#include "homework5.1.hpp"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int num1{}, num2{};
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    int operation{};
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> operation;

    switch (operation)
    {
    case 1:
        std::cout << num1 << " плюс " << num2 << " = " << addition(num1, num2);
        break;
    case 2:
        std::cout << num1 << " минус " << num2 << " = " << subtraction(num1, num2);
        break;
    case 3:
        std::cout << num1 << " умножить на " << num2 << " = " << multiplication(num1, num2);
        break;
    case 4:
        std::cout << num1 << " разделить на " << num2 << " = " << division(num1, num2);
        break;
    case 5:
        std::cout << num1 << " в степени " << num2 << " = " << raising_to_a_power(num1, num2);
        break;
}
    return EXIT_SUCCESS;
}
