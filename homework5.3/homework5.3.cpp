#include "homework5.3.hpp"
#include <iostream>

Figure::Figure(int side_counts) : side_counts(side_counts)
{}
int Figure::get_a()
{
    return 0;
}
int Figure::get_b()
{
    return 0;
}
int Figure::get_c()
{
    return 0;
}
int Figure::get_d()
{
    return 0;
}

int Figure::get_A()
{
    return 0;
}
int Figure::get_B()
{
    return 0;
}
int Figure::get_C()
{
    return 0;
}
int Figure::get_D()
{
    return 0;
}

Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Figure(3)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
}
int Triangle::get_a()
{
    return a;
}
int Triangle::get_b() 
{
    return b;
}
int Triangle::get_c() 
{
    return c;
}
int Triangle::get_A() 
{
    return A;
}
int Triangle::get_B() 
{
    return B;
}
int Triangle::get_C() 
{
    return C;
}

RightTriangle::RightTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90)
{}

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A)
{}

EquilateralTriangle::EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60)
{}

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Figure(4)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
}
int Quadrangle::get_a()
{
    return a;
}
int Quadrangle::get_b()
{
    return b;
}
int Quadrangle::get_c()
{
    return c;
}
int Quadrangle::get_d()
{
    return d;
}
int Quadrangle::get_A()
{
    return A;
}
int Quadrangle::get_B()
{
    return B;
}
int Quadrangle::get_C()
{
    return C;
}
int Quadrangle::get_D()
{
    return D;
}

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B)
{}

Rectangle::Rectangle(int a, int b) : Parallelogram(a, b, 90, 90)
{}

Rhombus::Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B)
{}

Square::Square(int a) : Rhombus(a, 90, 90)
{}

void print_info(Figure* base)
{
    std::cout << "Стороны: a=" << base->get_a() << " b=" << base->get_b() << " c=" << base->get_c();
    if (base->get_d() != 0) std::cout << " d=" << base->get_d() << '\n';
    else std::cout << '\n';
    std::cout << "Углы: A=" << base->get_A() << " B=" << base->get_B() << " C=" << base->get_C();
    if (base->get_D() != 0) std::cout << " D=" << base->get_D() << "\n\n";
    else std::cout << "\n\n";
}