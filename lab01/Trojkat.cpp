#include "Trojkat.h"
#include <cmath>

Trojkat::Trojkat(double a, double b, double c) : m_a(a), m_b(b), m_c(c)
{} 


void Trojkat::wypisz(std::ostream & output) const
{
	output << "Trojkat o bokach: " << m_a << " "\
								   << m_b << " "\
								   << m_c << std::endl;
}

double Trojkat::polePow() const
{
	double polowaObwodu = (m_a + m_b + m_c) * 0.5;
	return std::sqrt( polowaObwodu*(polowaObwodu - m_a)*(polowaObwodu - m_b)*(polowaObwodu - m_c) );
}