#pragma once

class Figure
{
protected:
    int side_counts;
public:
    Figure(int side_counts);
    virtual int get_a();
    virtual int get_b();
    virtual int get_c();
    virtual int get_d();

    virtual int get_A();
    virtual int get_B();
    virtual int get_C();
    virtual int get_D();
};

class Triangle : public Figure
{
protected:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;
public:
    Triangle(int a, int b, int c, int A, int B, int C);
    int get_a() override;
    int get_b() override;
    int get_c() override;
    int get_A() override;
    int get_B() override;
    int get_C() override;
};

class RightTriangle : public Triangle
{
public:
    RightTriangle(int a, int b, int c, int A, int B);
};

class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle(int a, int b, int A, int B);
};

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle(int a);
};

class Quadrangle : public Figure
{
protected:
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    int get_a() override;
    int get_b() override;
    int get_c() override;
    int get_d() override;
    int get_A() override;
    int get_B() override;
    int get_C() override;
    int get_D() override;
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int a, int b, int A, int B);
};

class Rectangle : public Parallelogram
{
public:
    Rectangle(int a, int b);
};

class Rhombus : public Parallelogram
{
public:
    Rhombus(int a, int A, int B);
};

class Square : public Rhombus
{
public:
    Square(int a);
};

void print_info(Figure* base);