#ifndef BYTE_HPP
#define BYTE_HPP
class byte
{
	unsigned char tab;
public:
	byte();
	void push(int position, bool value); // dziala poprawnie
	bool pull(int position);
	bool operator[](int);
	int conwert();
	void clear();
	~byte();
}; //End class byte
#endif //!BYTE_HPP
