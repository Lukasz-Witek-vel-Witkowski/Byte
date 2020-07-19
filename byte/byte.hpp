#ifndef BYTE_HPP
#define BYTE_HPP
#include <iostream>
#include <fstream>
class byte
{
	unsigned char tab;
	template <class T>
	T& getOut(T& out);
public:
	byte();
	void push(int position, bool value); // dziala poprawnie
	bool pull(int position);
	bool operator[](int);
	friend std::ostream& operator<<(std::ostream& out, byte& bit); 
	friend std::fstream& operator<<(std::fstream& out, byte& bit);
	unsigned char conwert();
	void clear();
	~byte();
}; //End class byte
#endif //!BYTE_HPP
