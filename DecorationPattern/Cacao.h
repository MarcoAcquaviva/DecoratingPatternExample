#pragma once
#include "Condiments.h"
class Cacao : public Condiments
{
public:
	Cacao(Beverage* _beverage) : beverage{ _beverage } {  }
	Cacao() = delete;
	Cacao(const Cacao&) = delete;
	Cacao(Cacao&&) = delete;
	Cacao& operator=(const Cacao&) = delete;
	Cacao& operator=(Cacao&&) = delete;

	std::string description() override;
	float cost() override;

private:
	Beverage* beverage;
};

