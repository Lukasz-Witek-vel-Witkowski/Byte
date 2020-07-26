#include "converterbit.hpp"

ConventerBit::ConventerBit(){

}
int ConventerBit::toInt(BitSet bitset){
    return bitset.convert();
}
short ConventerBit::toShort(BitSet bitset){
    return bitset.convert();
}
long long ConventerBit::toLong(BitSet bitset){
    return bitset.convert();
}
void ConventerBit::fromInt(BitSet& bit,int value){
  from(bit, value);
}
void ConventerBit::fromShort(BitSet& bit,short value){
  from(bit, value);
}
void ConventerBit::fromLong(BitSet& bit,long value){
  from(bit, value);
}
void ConventerBit::fromLong(BitSet& bit,long long value){
   from(bit, value);
}
ConventerBit::~ConventerBit(){

}
template <class T>
void ConventerBit::from(BitSet& bit ,T value){
   bit.setSize(sizeof(value));
   int Size = sizeof(value)*8;
    for(int i=1; i<=Size; i++){
        if(bool(value&(1<<(Size-i)))!=0){
         bit.insert(Size-i,value&(1<<(Size-i)));
        }
    }
  // bit.updateFree();
}