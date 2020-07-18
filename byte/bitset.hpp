#ifndef BITSET_HPP
#define BITSET_HPP
#include <iostream>
#include "byte.hpp"
class BitSet
{
	byte* base; 
	unsigned char free;
	int Size;
public:
	BitSet(int size);
	int freebyte(); 
	bool operator[](int position);
	void insert(int position, bool value );
	~BitSet();
}; //End class BitSet
#endif //!BITSET_HPP
