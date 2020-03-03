#pragma once
#include "Ksztalt.h"


class Trojkat: public Ksztalt
{
public:
	Trojkat(double, double, double);
	/*
		Constructor initialize m_a, m_b, m_c variables 
		- triangle side length.
	*/
	~Trojkat() = default;		// nothing to be done
	void wypisz(std::ostream &) const override;
	/*
		Prints info about class as expected.
	*/	
	double polePow() const override;
	/*
		returns triangle area.
	*/


private:
	double m_a;
	double m_b;
	double m_c;
};
