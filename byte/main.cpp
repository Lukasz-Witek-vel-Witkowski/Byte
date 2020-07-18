//#include <iostream>
#include "byte.hpp"
#include "bitset.hpp"

int main(){
    int size = 109;
    BitSet bit(size);
    std::cout<<"Free = "<<bit.freebyte()<<"\n";
    bit.insert(2, true);
    bit.insert(7, true);
    bit.insert(9, true);
    bit.insert(0, true);
    std::cout<<bit;

    return 0;
}