#ifndef CHARACTERSHEET_H
#define CHARACTERSHEET_H


#include <iostream>
#include "dice.h"

struct Attribute {
	char* name;
	int score;
};	

struct Node {
	Attribute attribute;
	Node* next;
};

class CharSheet {
	private:
		static const int SIZE = 13;
		Node* charSheet[SIZE];
		int hash();
	 

	public:
		charSheet();
		~charSheet();
		int addAttr(const char* name, int scorei);

}

#endif
