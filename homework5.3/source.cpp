#include "homework5.3.hpp"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(30);
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    std::cout << "Треугольник:\n";
    print_info(&triangle);
    std::cout << "Прямоугольный треугольник:\n";
    print_info(&rightTriangle);
    std::cout << "Равнобедренный треугольник:\n";
    print_info(&isoscelesTriangle);
    std::cout << "Равносторонний треугольник::\n";
    print_info(&equilateralTriangle);
    std::cout << "Четырёхугольник:\n";
    print_info(&quadrangle);
    std::cout << "Прямоугольник:\n";
    print_info(&rectangle);
    std::cout << "Квадрат:\n";
    print_info(&square);
    std::cout << "Параллелограмм:\n";
    print_info(&parallelogram);
    std::cout << "Ромб:\n";
    print_info(&rhombus);
    return EXIT_SUCCESS;
}