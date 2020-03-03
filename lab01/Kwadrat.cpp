#include "Kwadrat.h"

//-------------------Punkt class functions--------------------------------------------
void wypisz(const Punkt & input)
{	input.wypisz(std::cout); }


void Punkt::wypisz(std::ostream & input) const
{	std::cout << "ERROR: that's Punkt function wypisz().\n";	}


double Punkt::polePow() const

{	
	std::cout << "ERROR: that's Punkt function polePow().\n";
	return 0.0;
}


//-------------------Kwadrat class functions------------------------------------------
Kwadrat::Kwadrat(double x) : m_x(x)
{}

void Kwadrat::wypisz(std::ostream & input) const
{
	input << "Kwadrat o boku: " << m_x << std::endl;
}

double Kwadrat::polePow() const
{
	double output = m_x * m_x;
	return output;
}	
