#include "byte.hpp"

byte::byte()
{
    
}//Constructor byte

void byte::push(int position, bool value){
tab |= value<<position;
}
bool byte::pull(int position){
    return tab&1<<position;
}
int byte::conwert(){
    return tab;
}
bool byte::operator[](int position){
    return tab&1<<position;
}
byte::~byte()
{
}//Destruktor byte
