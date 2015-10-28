/*
Name: Chris Bastian
Class: CS110B-META-FALL-2015
Date: Monday, Sept. 14th
Instructor: David Harden
File Name: a4.cpp

This program is a simple poker game.  A user inputs 5 cards into an array.  This array is then evaluated based on poker hands.  A hand is returned.
*/


#include <iostream>

using namespace std;

bool containsPair(const int cardCount[]);
bool containsTwoPair(const int cardCount[]);
bool containsThreeOfaKind(const int cardCount[]);
bool containsStraight(const int cardCount[]);
bool containsFullHouse(const int cardCount[]);
bool containsFourOfaKind(const int cardCount[]);

int main() {
	int hand[] = {6, 6, 6, 9, 9};
	int cardCount[] = {0,0,0,0,0,0,0,0,0,0};
	
	// this reads in the cards - could be it's own function
	for (int count = 0; count < 5; count++){
		cout << "Enter five numeric cards, no face cards. Use 2-9. ";
		cin >> hand[count];
	}
	
	// this is counting cards - could be it's own function		
	for (int i = 0; i < 5; i++)
		cardCount[hand[i]] += 1;
	
	// evaluates hands - could be it's own function 
	
	if (containsFourOfaKind(cardCount))
	{
		cout << "contains four of a kind" << endl;
	} 
	else if (containsFullHouse(cardCount)) 
	{
		cout << "contains full house" << endl;
	}
	else if (containsStraight(cardCount)) {
		cout << "contains straight" << endl;
	}
	else if (containsThreeOfaKind(cardCount)) 
	{
		cout << "contains three of a kind" << endl;
	}

	else if (containsTwoPair(cardCount))
	{
		cout << "contains two pair" << endl;
	}
		
	else if (containsPair(cardCount))
	{
		cout << "contains a pair" << endl;
	}	
		
	else {
		cout << "High Card";
	}	

}









// the following functions derive hands based on the passed in array of card count.  A boolean value is returned

// pair
bool containsPair(const int cardCount[])
{
	bool pair;
	int numberOfPairs = 0;
	
 	for (int i = 0; i < 10; i++) {
		if (cardCount[i] == 2)
			numberOfPairs += 1;
	}
	if (numberOfPairs == 1)
	return pair = true;
}









// two pair
bool  containsTwoPair(const int cardCount[])
{
	bool twoPair;
	int numberOfPairs = 0;
	
	for (int i = 0; i < 10; i++) {
		if (cardCount[i] == 2)
			numberOfPairs += 1;
	}
	if (numberOfPairs == 2)
	return twoPair = true;
}









// three of a kind
bool containsThreeOfaKind(const int cardCount[])
{
	bool threeKind;
	
	for (int i = 0; i < 10; i++) {
		if (cardCount[i] == 3)
		return threeKind = true;
	}
}









// straight
bool containsStraight(const int cardCount[])
{
	bool straight;
	int streak = 0;
	
	for (int i = 0; i < 10; i++){
		if (cardCount[i] == 1 && cardCount[i+1] == 1){
			streak += 1;
		}
	}	
	if (streak == 4)
		return straight = true;
}











// full house
bool containsFullHouse(const int cardCount[])
{
	bool fullHouse;
	bool pair;
	bool threeKind;
	
	int numberOfPairs = 0;
	// checks to see if 1 pair exists	
	 for (int i = 0; i < 10; i++) {
		if (cardCount[i] == 2)
			numberOfPairs += 1;
	}
	if (numberOfPairs == 1)
	pair = true;
	// checks to see if 3 of a kind exists
	for (int i = 0; i < 10; i++) {
		if (cardCount[i] == 3)
		threeKind = true;
	}
	// if both pair and 3 of a kind exist
	if (pair && threeKind)
	return fullHouse = true;
}









// four of a kind
bool containsFourOfaKind(const int cardCount[])
{
	bool fourKind;
		
	for (int i = 0; i < 10; i++) {
		if (cardCount[i] == 4)
		return fourKind = true;
	}
}

/* OUTPUT
Enter five numeric cards, no face cards. Use 2-9.4
Enter five numeric cards, no face cards. Use 2-9.5
Enter five numeric cards, no face cards. Use 2-9.5
Enter five numeric cards, no face cards. Use 2-9.9
Enter five numeric cards, no face cards. Use 2-9.5
contains three of a kind

Enter five numeric cards, no face cards. Use 2-9.3
Enter five numeric cards, no face cards. Use 2-9.6
Enter five numeric cards, no face cards. Use 2-9.3
Enter five numeric cards, no face cards. Use 2-9.3
Enter five numeric cards, no face cards. Use 2-9.3
contains four of a kind

Enter five numeric cards, no face cards. Use 2-9.7
Enter five numeric cards, no face cards. Use 2-9.5
Enter five numeric cards, no face cards. Use 2-9.6
Enter five numeric cards, no face cards. Use 2-9.8
Enter five numeric cards, no face cards. Use 2-9.4
contains straight

Enter five numeric cards, no face cards. Use 2-9.5
Enter five numeric cards, no face cards. Use 2-9.8
Enter five numeric cards, no face cards. Use 2-9.7
Enter five numeric cards, no face cards. Use 2-9.5
Enter five numeric cards, no face cards. Use 2-9.2
contains a pair

Enter five numeric cards, no face cards. Use 2-9.4
Enter five numeric cards, no face cards. Use 2-9.6
Enter five numeric cards, no face cards. Use 2-9.7
Enter five numeric cards, no face cards. Use 2-9.7
Enter five numeric cards, no face cards. Use 2-9.6
contains two pair

Enter five numeric cards, no face cards. Use 2-9.3
Enter five numeric cards, no face cards. Use 2-9.3
Enter five numeric cards, no face cards. Use 2-9.5
Enter five numeric cards, no face cards. Use 2-9.3
Enter five numeric cards, no face cards. Use 2-9.5
contains full house

Enter five numeric cards, no face cards. Use 2-9.4
Enter five numeric cards, no face cards. Use 2-9.5
Enter five numeric cards, no face cards. Use 2-9.3
Enter five numeric cards, no face cards. Use 2-9.8
Enter five numeric cards, no face cards. Use 2-9.9
High Card

*/