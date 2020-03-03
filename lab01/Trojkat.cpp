#include "Trojkat.h"
#include <cmath>


Trojkat::Trojkat(double a, double b, double c) : m_a(a), m_b(b), m_c(c)
{}

void Trojkat::wypisz(std::ostream & input) const
{
	std::cout << "Trojkat o bokach: "\
	<< m_a << " "\
	<< m_b << " "\
	<< m_c << "\n";
}

double Trojkat::polePow() const
{
	double x = 0.5 * (m_a + m_b + m_c);
	double output = std::sqrt( x*(x-m_a)*(x-m_b)*(x-m_c) );
	return output;
}	