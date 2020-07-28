#ifndef CONVENTERBIT_HPP
#define CONVENTERBIT_HPP
#include "bitset.hpp"
class ConventerBit{
template <class T>
void from(BitSet& bit ,T value);
public:
ConventerBit();
int toInt(BitSet bitset);
short toShort(BitSet bitset);
long long toLong(BitSet bitset);
void toInt(BitSet& bitset, int& value);
void toShort(BitSet& bitset, short& value);
void toLong(BitSet& bitset, long long& value);
void fromInt(BitSet& bit,int value);
void fromShort(BitSet& bit,short value);
void fromLong(BitSet& bit,long value);
void fromLong(BitSet& bit,long long value);
~ConventerBit();
};
#endif //#CONVENTERBIT_HPP

