#include "bitset.hpp"

BitSet::BitSet(int size)
{
    if(size>0){
        int Size=size/8;
        int result = size%8;
        if(double(result)>double(Size)) Size+1;
            base = new byte[Size];
        free = (unsigned char)(8-result)%8;

        
    }
    else
    {
        base = new byte;
    }
    
}//Constructor BitSet
int BitSet::freebyte(){
    return free;
}
BitSet::~BitSet()
{
    delete[] base;
}//Destruktor BitSet
