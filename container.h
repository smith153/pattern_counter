#ifndef container_h
#define container_h

class C_block
{
  private:
	unsigned char digit;
	unsigned int seq_length;
	unsigned int count;
	C_block *next;
  public:
	C_block() { digit = 0; seq_length = 0; count = 1; next = 0; }
	void setDigit(char a) { digit = a; }
	void setSeqLength(unsigned int a) { seq_length = a; }
	void setCount(unsigned int a) { count = a; }
	void setNext(C_block *nextNode) { next = nextNode; }
	void vDisplay();
	C_block* getNext() { return next; }
	unsigned char getDigit() { return digit; }
	unsigned int getSeqLength() { return seq_length; }
	unsigned getCount() { return count; }
	

};


#endif
