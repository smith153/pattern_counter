#include "container.h"
#include "list.h"
#include <stdio.h>


void List::insert(C_block* newNode)
{
  C_block *nodePtr;
  C_block *previousNode = 0;
	if(!head){
		head = newNode;
		newNode->setNext(0);
	}

	else{
		nodePtr = head;
		previousNode = 0;

		while(nodePtr != 0 && nodePtr->getDigit() < newNode->getDigit()){
			previousNode = nodePtr;
			nodePtr = nodePtr->getNext();
		}


		if(nodePtr != 0 && nodePtr->getDigit() == newNode->getDigit() && nodePtr->getSeqLength() < newNode->getSeqLength()){
			while(nodePtr != 0 && nodePtr->getDigit() == newNode->getDigit() && nodePtr->getSeqLength() < newNode->getSeqLength()){
				previousNode = nodePtr;
				nodePtr = nodePtr->getNext();
			}
		}

		if(nodePtr != 0 && newNode->getDigit() == nodePtr->getDigit() && newNode->getSeqLength() == nodePtr->getSeqLength()){
			nodePtr->setCount(nodePtr->getCount() + 1);
			delete newNode;
			return;
		}


		if(previousNode == 0){
			head = newNode;
			newNode->setNext(nodePtr);
		}

		else{
			previousNode->setNext(newNode);
			newNode->setNext(nodePtr);
		}
	}
}

void List::vPrint(unsigned int length)
{
  C_block *nodePtr = head;
  while(nodePtr){
	if(nodePtr->getSeqLength() >= length)
		nodePtr->vDisplay();
	nodePtr = nodePtr->getNext();
  }

}

