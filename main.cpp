#include <iostream>
#include <random>
#include "npc.h"
#include "game.h"
#include "dice.h"
using namespace std;

void printMainMenu();

int main() {
//	Dice newDice;	// initialize new dice that can be used
	printMainMenu();

	return 0;
}


void printMainMenu() {
	cout <<"\n(=========================================)\n" 
		"\n     (==============================)\n"
		  "      WELCOME TO TERMINAL-ADVENTURES \n"
		  "     (==============================)\n";
	cout << "\n     WHAT WOULD YOU LIKE TO DO FIRST?\n"
		"\n(=========================================)\n"
		"\n 1) MAKE A NEW CHARACTER\n"
		" 2) START WITH A PRE-MADE CHARACTER\n"
		" 3) READ THE GUIDE\n"
		" 4) SAVE AND QUIT\n" 
		"\n(=========================================)\n";
}
