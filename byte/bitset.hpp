#ifndef BITSET_HPP
#define BITSET_HPP
#include "byte.hpp"
#include <bitset>
class BitSet
{
protected:
	byte* base = nullptr; 
	unsigned char free;
	int Size;
	template<class T>
	T& getOut(T& out);
	bool getbit(int position);
	byte& pull(int position);
public:
	BitSet(int size);
	int freebyte(); 
	void insertTopFree(int position, bool value);
	bool getToFree(int position);
	bool operator[](int position);
	void insert(int position, bool value );
	long long convert();
	int size();
	void setSize(int value);
	void updateFree();
	friend std::ostream& operator<<(std::ostream& out,  BitSet& bitset); 
	friend std::fstream& operator<<(std::fstream& out, 	BitSet& bitset);
	~BitSet();
}; //End class BitSet
#endif //!BITSET_HPP
