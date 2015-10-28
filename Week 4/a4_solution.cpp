/*
 Dave Harden
 2/09/15
 CS 110B
 Assignment 4.2
 
 This program receives five cards from the user, entered in as integers
 between 2-9 when prompted by the program. The program will then test which
 poker condition the hand meets, four of a kind, full house, straight, three
 of a kind, two pair, or high card. If the hand meets one of those conditions,
 the program will output which condition was met. The program will only output
 the highest level condition for the hand. After outputting the condition,
 the program exits without further output.
 */



#include <iostream>
using namespace std;

int numOccurrences(int targetCard, const int hand[]);
bool containsFourOfaKind(const int hand[]);
bool containsFullHouse(const int hand[]);
bool containsThreeOfaKind(const int hand[]);
int numPairs(const int hand[]) ;
bool isStraightStartingWith(int startCard, const int hand[]);
bool containsTwoPair(const int hand[]);
bool containsPair(const int hand[]);
bool containsStraight(const int hand[]);

const int HAND_SIZE = 5;
const int LOWEST_NUM = 2;
const int HIGHEST_NUM = 9;

int main() {
    int hand[HAND_SIZE];
    
    cout << "Enter five numeric cards, no face cards.  Use 2 - 9." << endl;
    for (int cardCount = 0; cardCount < HAND_SIZE; cardCount++) {
        cout << "Card " << cardCount + 1 << ": ";
        cin >> hand[cardCount];
    }
    
    if (containsFourOfaKind(hand)){
        cout << "Four of a kind! " << endl;
    } else if (containsFullHouse(hand)){
        cout << "Full house!" << endl;
    } else if (containsStraight(hand)){
        cout << "Straight!" << endl;
    } else if (containsThreeOfaKind(hand)){
        cout << "Three of a kind!" << endl;
    } else if (containsTwoPair(hand)){
        cout << "Two pair!" << endl;
    } else if (containsPair(hand)){
        cout << "One pair!" << endl;
    } else {
        cout << "High card." << endl;
    }
}





/*
 This function receives an array, hand. It iterates through the array using
 a for loop. For each index, it calls numOccurences() and passes it the array
 and the current index (targetCard). It returns true if numOccurences() returns
 4, otherwise, it returns false.
 
 pre: none
 post: returns true if hand[] contains a four of a kind.
 */

bool containsFourOfaKind(const int hand[]) {
    for (int targetCard = LOWEST_NUM; targetCard <= HIGHEST_NUM; targetCard++) {
        if (numOccurrences(targetCard, hand) == 4) {
            return true;
        }
    }
    
    return false;
}




/*
 This function receives an array, hand. It calls containsThreeOfaKind() and
 numPairs() to check if there is a three of a kind and a pair. If both
 functions return true, then the hand[] contains a full house and it returns
 true.
 
 pre: none
 post: returns true if hand[] contains a full house.
 */

bool containsFullHouse(const int hand[]) {
    return (containsThreeOfaKind(hand) && numPairs(hand) == 1);
}




/*
 This function receives an array, hand. It iterates through the array using
 a for loop. For each index, it calls isStraightStartingWith() and passes it
 the index and the array. It will return true if isStraightStartingWith()
 ever returns true and it will return false if isStraightStartingWith() never
 returns true.
 
 pre: none
 post: returns true if hand[] contains a straight.
 */

bool containsStraight(const int hand[]) {
    for (int lowCardInStraight = LOWEST_NUM; lowCardInStraight <= HIGHEST_NUM - HAND_SIZE + 1; lowCardInStraight++) {
        // straight must start with a number between LOWEST_NUM and HIGHEST_NUM
        if (isStraightStartingWith(lowCardInStraight, hand)){
            return true;
        }
    }
    
    return false;
}




/*
 This function receives an array, hand and an int, startCard. It uses a for
 loop to iterate through the startCard to startCard + 4 to check if the
 numbers are in the hand. For each iteration of the for loop, it calls
 numOccurences() to see if that number is in the hand. If it is not in the hand
 or if multiple copies are in the hand, the hand is not have a straight and
 the function returns false. True is returned if numOccurrences()
 only returns 1s.
 
 pre: startCard < 1
 post: returns true if the hand contains a straight
 */

bool isStraightStartingWith(int startCard, const int hand[]) {
    for (int card = startCard; card <= startCard + (HAND_SIZE - 1); card++) {
        if (numOccurrences(card, hand) != 1) {
            return false;
        }
    }
    return true;
}




/*
 This function receives an array, hand. It iterates through the array using
 a for loop. For each index, it calls numOccurences() and passes it the array
 and the current index (targetCard). If numOccurences() returns 3, the function
 returns true because there is a three of a kind.
 
 pre: none
 post: returns true if hand[] contains a three of a kind.
 */

bool containsThreeOfaKind(const int hand[]) {
    for (int targetCard = LOWEST_NUM; targetCard <= HIGHEST_NUM; targetCard++) {
        if (numOccurrences(targetCard, hand) == 3) {
            return true;
        }
    }
    
    return false;
}




/*
 This function takes an array, hand, and passes it to numPairs()
 to find out if the array contains two pairs.
 
 pre: none
 post: returns true if there are two pairs in the hand array
 */

bool containsTwoPair(const int hand[]) {
    return numPairs(hand) == 2;
}




/*
 This function takes an array, hand, and passes it to numPairs() to
 find out if the array contains one pair.
 
 pre: none
 post: returns true if there is a pair in the hand array
 */

bool containsPair(const int hand[]) {
    return numPairs(hand) == 1;
}




/*
 This function receives an array, hand. It iterates through the array using
 a for loop. For each index, it calls numOccurences() and passes it the array
 and the current index (targetCard). If numOccurences() returns 2, countPairs
 is incremented to keep track of the number of pairs.
 
 pre: none
 post: returns countPairs, the number of pairs in the hand array
 */

int numPairs(const int hand[]) {
    int countPairs = 0;
    for (int targetCard = LOWEST_NUM; targetCard <= HIGHEST_NUM; targetCard++) {
        if (numOccurrences(targetCard, hand) == 2) {
            countPairs++;
        }
    }
    
    return countPairs;
}




/*
 This function finds the number of occurences of targetCard inside the hand
 array. It uses a for loop to iterate through hand[] and checks each index
 to see if it is equal to targetCard. If it is equal, targetCardCount is
 incremented.
 
 pre: None
 post: Returns the number of occurrences targetCard has in hand[]
 */

int numOccurrences(int targetCard, const int hand[]) {
    int targetCardCount = 0;
    for (int cardCount = 0; cardCount < HAND_SIZE; cardCount++) {
        if (hand[cardCount] == targetCard) {
            targetCardCount++;
        }
    }
    return targetCardCount;
}