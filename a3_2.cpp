/*
Name: Chris Bastian
Class: CS110B-META-FALL-2015
Date: Friday, Sept. 4th
Instructor: David Harden
File Name: a3.cpp

This program is a simple guessing game. The program has the user pick a number and then via successive guesses, essentially using a binary search, zeros in one the guessed number.
*/

#include <iostream>

using namespace std;

void playOneGame();

int main() {
	char response;
	
	cout << "Ready to play (y/n)? ";
	cin >> response;
	while (response == 'y') {
		playOneGame();
		cout << "Great! Do you want to play again (y/n)? ";
		cin >> response;
	}
}







/* 
This function takes care of main guessing by the computer.  Variables are set for the initial guess and low/high ranges.  These variables get reset each time the user lets the computer know if it's guess is to high or low until a correct anwer is achieved.
*/ 

void playOneGame() {
	int guess = 50;
	int lowRange = 1;
	int highRange = 100;
	char guessResponse;
	
	void getUserResponseToGuess(int guess, char& result)
	
	cout << "Think of a number between 1 and 100 " << endl;	
	cout << "Is it " << guess << " (h/l/c)?" << endl;
	cin >> guessResponse;
	
	while(guessResponse != 'c'){
		if(guessResponse == 'h'){
			lowRange = guess;
			guess = (lowRange + highRange) / 2;
			
			cout << "Is it " << guess << " (h/l/c)?" << endl;
			cin >> guessResponse;
		} else {
			highRange = guess;
			guess = (lowRange + highRange) / 2;
			
			cout << "Is it " << guess << " (h/l/c)?" << endl;
			cin >> guessResponse;
		}
	}
}

void getUserResponseToGuess(int guess, char& result) {
	
}