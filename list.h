#include "container.h"

#ifndef list_h
#define list_h
class List
{
  private:
	C_block *head;
  public:
	List() { head = 0; }
	void insert(C_block *newNode);
	void vPrint(unsigned int length);
}; 
#endif
