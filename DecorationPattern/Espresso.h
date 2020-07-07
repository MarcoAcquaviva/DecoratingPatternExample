#pragma once
#include "StartBeverage.h"
class Espresso : public StartBeverage
{
public:
	Espresso() = default;
	Espresso(const Espresso&) = delete;
	Espresso(Espresso&&) = delete;
	Espresso& operator=(const Espresso&) = delete;
	Espresso& operator=(Espresso&&) = delete;
public:
	std::string description() override;
	float cost() override;
};

