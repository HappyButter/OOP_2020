#pragma once
#include "BitChanger.h"
#include <iostream>

class BitChanger;


class BitArray
{
public:
    BitArray(unsigned int size, bool onesOrZeros = 0);                 
    /* 
        BitArray class constructor alocates new array of unsignetd int N
        bits. By default all bits are zeros.
    */

    ~BitArray();
    /*
        BitArray destructor. Dealocate memory after alocating unsigned char array.
    */
    void print() const;
    /*
        print() functions prints formatted whole array of bits.
    */
    BitChanger operator[](unsigned int) const;
    /*
        overloaded operator[] returns object class BitChanger 
        to unlock ability of cahnging one bit in an array of unsigned chars. 
    */
    BitArray *operator=(const BitArray &);
    /*
        overloaded operator= creates a copy of given object. 
    */

private:
    unsigned char * m_data;
    unsigned int m_size;
};
