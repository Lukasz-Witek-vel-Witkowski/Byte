#ifndef BITSET_HPP
#define BITSET_HPP
#include "byte.hpp"
class BitSet
{
	byte* base; 
	unsigned char free;
	int Size;
	template<class T>
	T& getOut(T& out);
public:
	BitSet(int size);
	int freebyte(); 
	bool operator[](int position);
	void insert(int position, bool value );
	friend std::ostream& operator<<(std::ostream& out,  BitSet& bitset); 
	friend std::fstream& operator<<(std::fstream& out, 	BitSet& bitset);
	~BitSet();
}; //End class BitSet
#endif //!BITSET_HPP
