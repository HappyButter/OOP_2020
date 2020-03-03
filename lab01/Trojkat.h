#pragma once
#include "Kwadrat.h"

//klasa Trojkat
class Trojkat : public Punkt
{
private:
	double m_a;
	double m_b;
	double m_c;

public:
	Trojkat(double,double,double);
	~Trojkat() = default;
	void wypisz(std::ostream &) const override;
	double polePow() const override;	
};