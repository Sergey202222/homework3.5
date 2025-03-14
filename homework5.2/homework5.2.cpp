#include "homework5.2.hpp"

Counter::Counter()
{
    counter = 1;
}

Counter::Counter(int counter)
{
    this->counter = counter;
}

void Counter::add()
{
    ++counter;
}

void Counter::subtract()
{
    --counter;
}

int Counter::equals()
{
    return counter;
}