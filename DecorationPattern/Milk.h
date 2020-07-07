#pragma once
#include "Condiments.h"
class Milk : public Condiments
{
public:
	Milk(Beverage* _beverage) : beverage{ _beverage } { }
	Milk() = delete;
	Milk(const Milk&) = delete;
	Milk(Milk&&) = delete;
	Milk& operator=(const Milk&) = delete;
	Milk& operator=(Milk&&) = delete;

	std::string description() override;
	float cost() override;

private:
	Beverage* beverage;

};

