#include "bitset.hpp"

BitSet::BitSet(int size)
{
    if(size>0){
        Size=size/8;
        int result = size%8;
        if(double(result)>double(Size)) Size+1;
            base = new byte[Size];
        for(int i=0; i<=Size; i++){
            base[i].clear();
        }
        free = (unsigned char)(8-result)%8;
    }
    else
    {
        base = new byte;
    }
    
}//Constructor BitSet

byte& BitSet::pull(int position){
    return base[position];
}

bool BitSet::operator[](int position){
    if(position >= 0 && (position/8)<= Size){
        int pos = position/8;
        int size = position%8;
        return base[pos][size];
    }
    return false;
}

void BitSet::insert(int position, bool value ){
    if(position >= 0 && (position/8)<= Size){
        int pos = position/8;
        int size = position%8;
        base[pos].push(size, value);
     }
}

long long BitSet::convert(){
  long long data = 0;
  if(Size>8) {
    for(int i=0; i<8; i++){
        data = data << 0x08;
        data |= pull(i).conwert()<<0x00;
    }
  }
  else{
    for(int i=0; i<Size; i++){
        data = data << 0x08;
        data |= pull(i).conwert()<<0x00;
     //   std::cout<<"\nvar "<<i<<"\t"<<std::bitset<8>(pull(i).conwert())<<" - "<<(int)pull(i).conwert(); 
    }
  }
  //  std::cout<<"\n";

   //std::cout<<"\n temp "<<data<<" bitowo : "<<std::bitset<64>(data)<<"\n";
    return data;
}

int BitSet::freebyte(){
    return free;
}

BitSet::~BitSet()
{
    delete[] base;
}//Destruktor BitSet

int BitSet::size(){
    return Size;
}


std::ostream& operator<<(std::ostream& out,  BitSet & bitset){
    return bitset.getOut(out);
}
std::fstream& operator<<(std::fstream& out, 	BitSet& bitset){
    return bitset.getOut(out);
}
template<class T>
T& BitSet::getOut(T& out){
    for(int i=0; i<Size; i++)
            out << base[i];

    if(free != 0){
        for(int i=7-free; i>=0; i--)
                out <<base[Size][i];
    }
    
    return out;
}