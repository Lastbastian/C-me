/*
Name: Chris Bastian
Class: CS110B-META-FALL-2015
Date: Friday, August 28th
Instructor: David Harden
File Name: a2.cpp

This program is a simple Black Jack game.  The program "deals" the user two cards then asks if they would like additional cards.  If the user's hand goes over 21 they are notified that they have broken.

The program also keeps track of a dealer hand to compare against the user's hand at the end of the game.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
This function deals card and asks user if they would like additional cards.  The function also compares the dealer's hand to the user's hand.
*/

int main()
{
	srand(time(0));
	int dealersHand = rand() % 21 + 2;
	int sumSoFar;
	char cardResponse;
	bool boolBroke = false;
	char playResponse;
	bool boolPlay = true;
	
	while(boolPlay) {
		cout << "******************* WELCOME TO BLACK JACK *******************" << endl;
		
		int firstCard = rand() % 10 + 1;
		int secondCard = rand() % 10 + 1;
		
		cout << "Your initial cards are a " << firstCard << " , and a " << secondCard << "." << endl;
		sumSoFar = firstCard + secondCard;
	
		cout << "Your total is " << sumSoFar << "." << endl;
	
		cout << "Would you like another card (Y or N)?" << endl;
		cin >> cardResponse;
	
		while (cardResponse == 'y' || cardResponse == 'Y') {
			int additionalCard = rand() % 10 + 1;					
			sumSoFar += additionalCard;
			
			cout << "You have drawn a " << additionalCard << "." << endl;
			cout << "Your total so far is " << sumSoFar << "." << endl;
			
			if(sumSoFar > 21) {
				boolBroke = true;
				break;
			}
			
			cout << "Would you like another card (Y or N)?" << endl;
			cin >> cardResponse;
		}
		
		if(boolBroke) {
			cout << "You are over 21." << endl;
			cout << "** Game over **" << endl; 
		} else {
			cout << "The dealers total is " << dealersHand << endl;
			if(sumSoFar > dealersHand){
				cout << "Congratualions!  You win!" << endl;
			} else {
				cout << "The dealer beat you.  Better luck next time!" << endl;
			}
		}
		cout << "Would you like to play again? (Y or N)" << endl;
		cin >> playResponse;
		if(playResponse == 'n' || playResponse == 'N') {boolPlay = false;}
	}
	cout << "Thanks for playing" << endl;
}

/* OUTPUT FILE --

Loading ~/.bash_profile a shell script that runs in every new terminal you open
Logged in as chrisbastian at cicis.att.net
******************* WELCOME TO BLACK JACK *******************
Your initial cards: 7 , 9
Your total is: 16.
Would you like another card (Y or N)
y
You have drawn a 2.
Your total so far is 18.
Would you like another card (Y or N)?
n
The dealers total is 4
Congratualions!  You win!
Would you like to play again? (Y or N)
y
******************* WELCOME TO BLACK JACK *******************
Your initial cards: 7 , 9
Your total is: 16.
Would you like another card (Y or N)
Y
You have drawn a 3.
Your total so far is 19.
Would you like another card (Y or N)?
Y
You have drawn a 9.
Your total so far is 28.
You are over 21.
** Game over **
Would you like to play again? (Y or N)
n
Thanks for playing

*/