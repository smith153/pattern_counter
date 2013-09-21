#include "container.h"
#include <iostream>
#include <stdio.h>


using namespace std;

void C_block::vDisplay()
{
  printf("Digit %X of length %d has %d counts\n",digit,seq_length,count);
//  cout << hex << "Digit " << static_cast<unsigned short int>(digit) << dec << " has " << count << " counts of length " << seq_length << endl;
}
