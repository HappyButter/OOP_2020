#pragma once 
#include <iostream>

class Ksztalt 
{
public:
	Ksztalt() {};				// nothing to be done
	virtual ~Ksztalt() {};		// nothing to be done
	static void wypisz(const Ksztalt &);
	/*
		provides right printing any Shape.
	*/
	virtual void wypisz(std::ostream &) const;
	/*
		virtual print. Nothing to be done here.
	*/
	virtual double polePow() const;
	/*
		returns area of any shape given.
	*/
};

