#include <iostream>
#include "byte.hpp"
#include "bitset.hpp"

int main(){
    BitSet bit(7);
    std::cout<<"Free = "<<bit.freebyte()<<"\n";
    byte b;
    b.push(1,true);
    b.push(0,true);
    b.push(2,true);
    for(int i=0; i<8; i++)
      std::cout<<i<<"  "<<b[i]<<"\n";
    std::cout<<b.conwert();
    return 0;
}