#include "NameCard.h"
#include <iostream>

NameCard::NameCard(const str& name, const str& phone_number, const str& address, const str& rank)
	: name(name), phone_number(phone_number), address(address), rank(rank)
{
}

void NameCard::ShowData()
{
	std::cout 
		<< "이    름: " << name << "\n"
		<< "전화번호: " << phone_number << "\n"
		<< "주    소: " << address << "\n"
		<< "직    급: " << rank << "\n";
}
