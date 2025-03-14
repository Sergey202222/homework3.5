#pragma once

class Counter
{
public:
    Counter();
    Counter(int);
    void add();
    void subtract();
    int equals();
private:
    int counter;
};