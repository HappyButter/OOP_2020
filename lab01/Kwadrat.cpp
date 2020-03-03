#include "Kwadrat.h"

Kwadrat::Kwadrat(double x) : m_x(x)
{}


void Kwadrat::wypisz(std::ostream & output) const
{
	output << "Kwadrat o boku: " << m_x << std::endl;
}


double Kwadrat::polePow() const
{
	return m_x * m_x;
}