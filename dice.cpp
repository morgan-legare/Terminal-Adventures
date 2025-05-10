#include <iostream>
#include <random>
#include "dice.h"
using namespace std;

/*	
	//Example of mt19937 Usage: 
	
	mt19937 generator(random_device{}());
	uniform_int_distribution<int> distribution(1, 6);
	int randomNum = distribution(generator);

	//Test for dice randomness:
	int i = 0;
	while(i <= 10) {
	cout << "d4: " << newDice.d4() << endl;	
	cout << "d6: " << newDice.d6() << endl;	
	cout << "d8: " << newDice.d8() << endl;	
	cout << "d10: " << newDice.d10() << endl;	
	cout << "d12: " << newDice.d12() << endl;	
	cout << "d20: " << newDice.d20() << endl;	
	cout << "d100: " << newDice.d100() << endl;	
	i++;
	cout << "\n" << endl;
*/

int Dice::d4() {
	mt19937 generator(random_device{}());
	uniform_int_distribution<int> distribution(1, 4);
	return distribution(generator);
}


int Dice::d6() {
	mt19937 generator(random_device{}());
	uniform_int_distribution<int> distribution(1, 6);
	return distribution(generator);
}


int Dice::d8() {
	mt19937 generator(random_device{}());
	uniform_int_distribution<int> distribution(1, 8);
	return distribution(generator);
}


int Dice::d10() {
	mt19937 generator(random_device{}());
	uniform_int_distribution<int> distribution(1, 10);
	return distribution(generator);
}


int Dice::d12() {
	mt19937 generator(random_device{}());
	uniform_int_distribution<int> distribution(1, 12);
	return distribution(generator);
}


int Dice::d20() {
	mt19937 generator(random_device{}());
	uniform_int_distribution<int> distribution(1, 20);
	return distribution(generator);
}


int Dice::d100() {
	mt19937 generator(random_device{}());
	uniform_int_distribution<int> distribution(1, 100);
	return distribution(generator);
}


