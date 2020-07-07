#define Print(msg) (std::cout << msg << std::endl)

#include <iostream>

#include "Espresso.h";
#include "Milk.h";
#include "Cacao.h";
#include <memory>

int main()
{
	 std::unique_ptr<Beverage> b = std::make_unique<Espresso>();
	std::string description = b->description();
	std::string cost = std::to_string( b->cost()) ;
	Print(description+ " at " + cost + " euro");

	b = std::make_unique<Milk>(b.release());
	description = b->description();
	cost = std::to_string(b->cost());
	Print(description + " at " + cost + " euro");

	b = std::make_unique<Cacao>(b.release());
	description = b->description();
	cost = std::to_string(b->cost());
	Print(description + " at " + cost + " euro");;

	b = std::make_unique<Cacao>(b.release());
	description = b->description();
	cost = std::to_string(b->cost());
	Print(description + " at " + cost + " euro");;
}
