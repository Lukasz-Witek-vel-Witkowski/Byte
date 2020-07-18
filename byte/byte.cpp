#include "byte.hpp"

byte::byte()
{
    tab = 0;
}//Constructor byte

void byte::push(int position, bool value){
    int temp = value;
    tab |= temp<<position;
}
bool byte::pull(int position){
    return tab&(1<<position);
}
int byte::conwert(){
    return tab;
}
bool byte::operator[](int position){
    return tab&(1<<position);
}
void byte::clear(){
    tab = 0;
}
byte::~byte()
{
}//Destruktor byte
 std::ostream& operator<<(std::ostream& out, byte & bit){
    for(int i=0; i<8; i++){
        out << bit[i];
    }
    return out;
 }
