#pragma once
#include "Ksztalt.h"


class Kwadrat: public Ksztalt
{
public:
	Kwadrat(double);
	/*
		Constructor initialize m_x variable - side length of the square.
	*/
	~Kwadrat() = default;		// nothing to be done
	void wypisz(std::ostream &)	const override;
	/*
		Prints info about class as expected.
	*/
	double polePow() const override;
	/*
		returns suare area.
	*/


private:
	double m_x;
};
