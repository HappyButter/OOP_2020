#pragma once
#include "Ksztalt.h"


class Kolo: public Ksztalt
{
public:
	Kolo(double);
	/*
		Constructor initialize m_radius variable.
	*/
	~Kolo() = default; 			// nothing to be done
	void wypisz(std::ostream &) const override;
	/*
		Prints info about class as expected.
	*/
	double polePow() const override;
	/*
		returns circle area.
	*/

private:
	double m_radius;
};
