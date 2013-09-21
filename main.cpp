#include "list.h"
#include "container.h"
#include "functions.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


/*
run from command line with a file name as an argument, ex:
./bmpScanner test.bmp

The results will be as follows:

"Digit FF has 2 counts of length 3"

This would mean that there were 2 strings where "FF" occurred back to back with a length of 3, ex:

....FF FF FF A0 B7 FF FF FF 00 03.....

If the results were:
"Digit FF has 2 counts of length 2"

Then it would look similar as:

....FF FF A0 B7 FF FF 00 03.....  

 
*/


int main(int argc, char* argv[])
{
  List myList;
  unsigned int i = 0;
  unsigned int count;
  char byte;
  ifstream INFILE;

  INFILE.open (argv[2], ios::binary);

  if(!(atoi(argv[1]) > 0)){
	cout << " Wrong limit entered?\nFormant is:\n./bmpScanner [match_limit] [filename]" << endl;
	return -1;
  }
  if(!INFILE.is_open()){
	cout << "Input file NOT opened, file name was: " << argv[1] << endl;
	return -1;
  }

  while (!INFILE.eof()){
	INFILE.get(byte);
	count = 0;
	recurse(byte, count, INFILE, myList);
  }

  myList.vPrint(atoi(argv[1]));


  return 0;
}
