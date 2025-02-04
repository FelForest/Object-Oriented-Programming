#include "NameCard.h"
#include <iostream>

NameCard::NameCard(const str& name, const str& phone_number, const str& address, const str& rank)
	: name(name), phone_number(phone_number), address(address), rank(rank)
{
}

void NameCard::ShowData()
{
	std::cout 
		<< "��    ��: " << name << "\n"
		<< "��ȭ��ȣ: " << phone_number << "\n"
		<< "��    ��: " << address << "\n"
		<< "��    ��: " << rank << "\n";
}
