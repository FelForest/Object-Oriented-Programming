#pragma once

#include <string>

#define str std::string

class NameCard
{
public:
	NameCard(const str& name, const str& phone_number, const str& address, const str& rank);

	void ShowData();

private:
	str name;
	str phone_number;
	str address;
	str rank;
};