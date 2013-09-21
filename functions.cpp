#include "list.h"
#include "functions.h"
#include "container.h"
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

void recurse(char byte, unsigned int count, ifstream& INFILE, List& myList )
{
  char nextByte;
  INFILE.get(nextByte);

  //get will return 0 at eof
  if(byte == 0 && nextByte == 0 && INFILE.tellg() < 1)
	return;

  if(byte == nextByte){
	count++;
	recurse(byte, count, INFILE, myList);
	return;
  } 

  else {
	if (count > 0){
		C_block *ptr = new C_block;
		ptr->setDigit(byte);
		ptr->setSeqLength(count + 1);
	
		myList.insert(ptr);
	}

	long pos = INFILE.tellg();
	pos -= 1;
	INFILE.seekg(pos);
	return;
  }
}
