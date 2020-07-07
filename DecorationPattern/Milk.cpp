#include "Milk.h"

std::string Milk::description()
{
    return beverage->description() + " milk";
}

float Milk::cost()
{
    return beverage->cost() + 0.5f;
}
