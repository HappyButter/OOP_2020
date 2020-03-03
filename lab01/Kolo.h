#pragma once
#include "Kwadrat.h"

//klasa Kolo 
class Kolo : public Punkt
{
private:
	double m_radius;

public:
	Kolo(double);
	~Kolo() = default;
	void wypisz(std::ostream &) const override;
	double polePow() const override;	
};