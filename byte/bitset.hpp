#ifndef BITSET_HPP
#define BITSET_HPP
#include "byte.hpp"
class BitSet
{
	byte* base; 
	unsigned char free;
public:
	BitSet(int size);
	int freebyte(); 
	~BitSet();
}; //End class BitSet
#endif //!BITSET_HPP
