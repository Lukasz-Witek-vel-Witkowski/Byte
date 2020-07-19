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
ConventerBit::~ConventerBit(){

}
