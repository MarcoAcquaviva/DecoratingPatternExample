#pragma once
#include <string>
class Beverage
{
public:
	Beverage() = default;
	Beverage(const Beverage&) = delete;
	Beverage(Beverage&&) = delete;
	Beverage& operator=(const Beverage&) = delete;
	Beverage& operator=( Beverage&&) = delete;

public:
	virtual std::string description() = 0;
	virtual float cost() = 0;
};

