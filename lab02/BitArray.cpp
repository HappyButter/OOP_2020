#include "BitArray.h"
#include <cstring>

BitArray::~BitArray()
{
    delete [] m_data;
}
    
    
void BitArray::print() const
{
    unsigned int bitsNumber = m_size - (m_size%8);
     
    for (int i = (m_size % 8) - 1; i >=0; --i)
        std::cout << static_cast<bool>( m_data[m_size/8] & (1 << i) );

    std::cout << " <-" << bitsNumber << " ";
    bitsNumber += -8;

    for (int i = (m_size/8) - 1; i >= 0 ; --i)
    {
        for (int j = 7; j >=0; --j)
            std::cout << static_cast<bool>( m_data[i] & (1 << j) );

        std::cout << " <-" << bitsNumber << " ";
        bitsNumber += -8;
    }

    std::cout << std::endl;
}
 
    
BitChanger BitArray::operator[](unsigned int inputPos) const
{
    unsigned int pos = (inputPos/8);
    return BitChanger(inputPos%8, m_data[pos]);
}

BitArray* BitArray::operator=(const BitArray & toCopy)
{
    delete [] m_data;
    m_size = toCopy.m_size;
    m_data = new unsigned char[(m_size/8) + 1];
    std::memcpy(m_data, toCopy.m_data, (m_size/8) + 1);
    return this;
}