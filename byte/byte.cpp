#include "byte.hpp"

byte::byte()
{
    tab = 0x00;
}//Constructor byte

void byte::push(int position, bool value){
    if(value)
        tab |= 1<<position;
    else
        tab &= ~1<<position;    
}
bool byte::pull(int position){
    return tab&(1<<position);
}
unsigned char byte::conwert(){
    return tab;
}
bool byte::operator[](int position){
    return tab&(1<<position);
}
void byte::clear(){
    tab = 0x00;
}
byte::~byte()
{
}//Destruktor byte
 std::ostream& operator<<(std::ostream& out, byte & bit){
    return bit.getOut(out);
 }
 std::fstream& operator<<(std::fstream& out, byte& bit){
    return bit.getOut(out);
 }
template <class T>
T& byte::getOut(T& out){
    for(int i=7; i>=0; i--){
        out << pull(i);
    }
    return out;
}