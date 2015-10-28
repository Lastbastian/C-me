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
void getUserResponseToGuess(int guess, char& result);
int getMidPoint(int low, int high);

int main() {
	char response;
	
	cout << "Ready to play (y/n)? ";
	cin >> response;
	while (response == 'y') {
		playOneGame();
		cout << "Great! Do you want to play again (y/n)? ";
		cin >> response;
	}
	cout << "Thanks for playing!" << endl;
}

void playOneGame() {
	int guess = 50;		// initial guess
	int low = 1;		// initial low point
	int high = 100;		// initial high point
	char result;
	
	cout << "Think of a number between 1 and 100. " << endl;
	
	getUserResponseToGuess(guess, result);
	
	while(result != 'c'){
		if(result == 'h'){
			low = guess;
			guess = getMidPoint(low, high);
			
			getUserResponseToGuess(guess, result);
		} else {
			high = guess;
			guess = getMidPoint(low, high);
			
			getUserResponseToGuess(guess, result);
		}
	}
}









/* 
This function inputs the computer guess and displays it to the user.  It then asks for a response and returns the response to the calling function.
*/

void getUserResponseToGuess(int guess, char& result){
	cout << "Is it " << guess << " (h/l/c)?" << endl;
	cin >> result;
}









/*
This function inputs the low and high ints and returns the midpoint between them.
*/

int getMidPoint(int low, int high){
	return (low + high) / 2;	
}

/* OUTPUT

Ready to play (y/n)? y
Think of a number between 1 and 100. 
Is it 50 (h/l/c)?
h
Is it 75 (h/l/c)?
l
Is it 62 (h/l/c)?
c
Great! Do you want to play again (y/n)? y
Think of a number between 1 and 100. 
Is it 50 (h/l/c)?
l
Is it 25 (h/l/c)?
h
Is it 37 (h/l/c)?
l
Is it 31 (h/l/c)?
c
Great! Do you want to play again (y/n)? n
Thanks for playing!

*/