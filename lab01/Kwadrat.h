#pragma once 
#include <iostream>

//klasa bazowa
class Punkt
{
public:
	virtual ~Punkt() {};
	virtual void wypisz(std::ostream &) const;
	virtual double polePow() const;
};


//klasa kwadrat
class Kwadrat : public Punkt
{
private:
	double m_x;

public:
	Kwadrat(double);
	~Kwadrat() {};
	void wypisz(std::ostream &) const override;
	double polePow() const override;	
};

void wypisz(const Punkt &);