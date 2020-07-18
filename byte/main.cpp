//#include <iostream>
#include "byte.hpp"
#include "bitset.hpp"

int main(){
  /*
  char j=0;
  for(int k=0; k<120; k ++ ){
    j = k;
    for(int i=0; i<sizeof(j)*8; i++){
      std::cout<<i<<"\t"<<(bool)(j&(1<<i))<<"\n";
    }
    std::cout<<"---------------------------------------------------\n";
  }
  */
    int size = 13;
    BitSet bit(size);
    std::cout<<"Free = "<<bit.freebyte()<<"\n";
    bit.insert(2, true);
    bit.insert(7, true);
    bit.insert(9, true);
    bit.insert(0, true);
    for(int i=0; i<size; i++){
      std::cout<< i <<'\t'<< bit[i]<<"\n";
    }

    return 0;
}