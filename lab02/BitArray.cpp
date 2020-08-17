#include "BitArray.h"
#include <cstring>


BitArray::BitArray(unsigned int size, bool onesOrZeros) 
{
    m_size = size;
    unsigned int numberOfChars = (size / 8) + 1;
    m_data = new unsigned char [numberOfChars];

    for (unsigned int i = 0; i<numberOfChars; ++i )
    {
        if (onesOrZeros)
            m_data[i] = 0xFF;
        else
            m_data[i] = 0x00;
    }
}


BitArray::~BitArray()
{
    delete [] m_data;
}


BitArray* BitArray::operator=(const BitArray& toCopy) 
{
    delete [] m_data;
    m_data = new unsigned char[(toCopy.m_size / 8) + 1];
    m_size = toCopy.m_size;
    std::memcpy(m_data, toCopy.m_data, (toCopy.m_size / 8) + 1);
    return this;
}


BitChanger BitArray::operator[](unsigned int pos) const
{ 
	return BitChanger(pos%8, m_data[pos/8]); 
}


void BitArray::print() const
{
	for (int i = m_size -1; i >=0 ; --i){
		std::cout << (*this)[i];
		if (i%8 == 0)
			std::cout << " <-" << i << " ";
	}
}

