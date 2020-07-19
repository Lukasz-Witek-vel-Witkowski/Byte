//#include <iostream>
#include "byte.hpp"
#include <bitset>
#include "bitset.hpp"
#include "converterbit.hpp"
int main()
{
    std::cout<<"test\n";
    unsigned char te =254;
    for(int i=7; i>=0; i--){
    std::cout<<(bool)(te&(1<<i));
    }
    std::cout<<sizeof(long long);
    int size = 64;
    BitSet bit(size);
    std::cout << "Free = " << bit.freebyte() << "\n";
    bit.insert(63, true);
    bit.insert(62, true);
    bit.insert(61, true);
    bit.insert(60, true);
   /* bit.insert(48, true);
    bit.insert(46, true);
    bit.insert(44, true);
    bit.insert(42, true);
    bit.insert(40, true);
    bit.insert(38, true);
    bit.insert(36, true);
    bit.insert(34, true);
    bit.insert(32, true);
    bit.insert(30, true);
    bit.insert(28, true);
    bit.insert(26, true);
    bit.insert(24, true);
    bit.insert(22, true);
    bit.insert(20, true);
    bit.insert(18, true);
    bit.insert(16, true);
    bit.insert(14, true);
    bit.insert(12, true);*/
    bit.insert(7, true);
    //bit.insert(4, true);
    //bit.insert(3, true);
    bit.insert(2, true);
    bit.insert(1, true);
    bit.insert(0, true);
    std::cout << bit << "\n";
    ConventerBit con;
    std::cout << "int\t" << con.toInt(bit) <<"\t"<< std::bitset<sizeof(int)*8>(con.toInt(bit))<<"\n";
    std::cout << "short\t" << con.toShort(bit) <<"\t"<< std::bitset<sizeof(short)*8>(con.toShort(bit))<<"\n";
    std::cout << "long\t" << con.toLong(bit) <<"\t"<< std::bitset<sizeof(long long)*8>(con.toLong(bit))<<"\n";
    std::cout << "Koniec programu\n";
    return 0;
}