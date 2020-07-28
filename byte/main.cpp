#include <iostream>
#include "converterbit.hpp"
int main()
{
    std::cout << "test\n";
    unsigned char te = 254;
    for (int i = 7; i >= 0; i--)
    {
        std::cout << (bool)(te & (1 << i));
    }
    std::cout << sizeof(long long);
    int size = 10;
    BitSet bit(size);
    std::cout << "Free = " << bit.freebyte() << "\n";
    std::cout<< "Size = "<<bit.size() << "\n";
    bit.insert(7, true);
    bit.insert(6, true);
    bit.insert(5, true);
    bit.insert(4, true);
    bit.insert(3, true);
    bit.insert(2, true);
    bit.insert(1, true);
    bit.insert(0, true);
    bit.insert(3, false);
    bit.insert(4, false);
    std::cout<<bit<<"\n";
  
    bit.insertTopFree(0,true);
    bit.insertTopFree(1,true);
    bit.insertTopFree(2,true);
    bit.insertTopFree(3,true);
    bit.insertTopFree(4,true);
    bit.insertTopFree(5,true);
    bit.insertTopFree(3,false);
    bit.insertTopFree(4,false);
    for(int i=0; i<=6; i++){
        std::cout<<i <<"\t"<<bit.getToFree(i)<<"\n";
    }
  
   /* ConventerBit con;
    std::cout << "Start\n";
    int tr = 255;
    std::cout<<"value "<<254<<"\t"<<std::bitset<sizeof(int)*8>(tr);
    int ti = 3;
    std::cout<<"value "<<3<<"\t"<<std::bitset<sizeof(int)*8>(ti);
    std::cout << "\n\nint\t" << con.toInt(bit) << "\t" << std::bitset<sizeof(int) * 8>(con.toInt(bit)) << "\n";
    std::cout << "short\t" << con.toShort(bit) << "\t" << std::bitset<sizeof(short) * 8>(con.toShort(bit)) << "\n";
    std::cout << "long\t" << con.toLong(bit) << "\t" << std::bitset<sizeof(long long) * 8>(con.toLong(bit)) << "\n";

    short test = 639;
    con.fromShort(bit, test);
    std::cout << "from\t" << test << "\t" << bit;
    std::cout << "\nKoniec programu\n";*/
    return 0;
}