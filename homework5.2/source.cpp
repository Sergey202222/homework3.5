#include "homework5.2.hpp"
#include <iostream>
#include <Windows.h>

int main()
{
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string answer{};
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> answer;
    int startCounter{};
    if (answer == "да")
    {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> startCounter;
    }

    Counter counter = (answer == "да") ? Counter(startCounter) : Counter();
    char simbol{};
    while (simbol != 'x')
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> simbol;

        switch (simbol)
        {
        case '+':
            counter.add();
            break;
        case '-':
            counter.subtract();
            break;
        case '=':
            std::cout << counter.equals() << '\n';
            break;
        case 'x':
            std::cout << "До свидания!";
            break;
        }
    }
    return EXIT_SUCCESS;
}