#include "Ksztalt.h"


void Ksztalt::wypisz(const Ksztalt & input)
{
	input.wypisz(std::cout);
}


void Ksztalt::wypisz(std::ostream & output) const
{
	output << "ERROR: Uzyles Ksztalt::wypisz(std::ostream&)\n";
}

double Ksztalt::polePow() const
{
	std::cout << "wrong way\n";
	return 0.0;
}