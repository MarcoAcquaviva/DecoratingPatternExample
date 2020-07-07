#include "Cacao.h"

std::string Cacao::description()
{
    return beverage->description() + " cacao";
}

float Cacao::cost()
{
    return beverage->cost() +  0.2f;
}
