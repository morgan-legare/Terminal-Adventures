#include <iostream>
#include "dice.h"
#include "characterSheet.h"
#include "cctype"
#include "cstring"
using namespace std;


charSheet::charSheet() {
	for(int i = 0; i < SIZE; ++i) {
		charSheet[i] = nullptr;
	}
}

charSheet::~charSheet() {
	for(int i = 0; i < SIZE;, ++i) {
	j	Node* curr = charSheet[i]; 
		while(curr) {
			Node* temp = curr->next;
			delete [] curr->attribute->name;
			delete [] curr->attribute;
			delete curr;
			curr = temp;
		}		

	}

}


int charSheet::hash(const char* name) {
	long int hash = strlen(name) % SIZE;	
	return hash;
}
