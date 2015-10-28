#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int NUM_PRECINCTS = 4;
const int NUM_CANDIDATES = 4;
const int COLUMN_WIDTH = 10;

void readVotes(int votes[][NUM_CANDIDATES]);
void initVotes(int votes[][NUM_CANDIDATES]);
void readNames(string names[]);
void printPrecinctTotals(const int votes[][NUM_CANDIDATES], 
												 ofstream &outfile);
void printCandidateTotals(const int votes[][NUM_CANDIDATES], 
													const string names[], 
													ofstream &outfile);
void printTable(const int votes[][NUM_CANDIDATES], 
								const string names[], 
								ofstream &outfile);
void printReport(const string names[], const int votes[][NUM_CANDIDATES]);




int main()
{
		int votes[NUM_PRECINCTS][NUM_CANDIDATES];
		string names[NUM_CANDIDATES];
		
		readNames(names);
		readVotes(votes);
		printReport(names, votes);
}




void readNames(string names[])
{
		for (int count = 0; count < NUM_CANDIDATES; count++){
				cout << "Enter name of candidate #" << count+1 << ": ";
				getline(cin, names[count]);
		}
}




void readVotes(int votes[][NUM_CANDIDATES])
{
		ifstream infile("votes.dat");
		int precinct, candidate;
		
		initVotes(votes);
		infile >> precinct >> candidate;
		while (infile) {
				votes[precinct-1][candidate-1]++;
				infile >> precinct >> candidate;
		}
		infile.close();
}




void initVotes(int votes[][NUM_CANDIDATES])
{
		
		for (int row = 0; row < NUM_PRECINCTS; row++){
				for (int col = 0; col < NUM_CANDIDATES; col++){
						votes[row][col] = 0;
				}
		}
}

				
				

void printReport(const string names[], const int votes[][NUM_CANDIDATES])
{
		ofstream outfile("votes.out");
		printTable(votes, names, outfile);
		printCandidateTotals(votes, names, outfile);
		printPrecinctTotals(votes, outfile);
}




void printTable(const int votes[][NUM_CANDIDATES], 
								const string names[], 
								ofstream &outfile)
								
								
{
		outfile << setw(11) << "";
		for (int count = 0; count < NUM_CANDIDATES; count++){
				outfile << setw(COLUMN_WIDTH) << names[count].substr(0,COLUMN_WIDTH - 1);
		}
		outfile << endl;

		
				
		for (int row = 0; row < NUM_PRECINCTS; row++){
				outfile << "Precinct " << setw(2) << row+1;
				for (int col = 0; col < NUM_CANDIDATES; col++){
						outfile << setw(COLUMN_WIDTH) << votes[row][col];
				}
				outfile << endl;
		}
		outfile << endl;
}
 



void printCandidateTotals(const int votes[][NUM_CANDIDATES], 
													const string names[], 
													ofstream &outfile)
				 
{
		int sum;
		
		for (int col = 0; col < NUM_CANDIDATES; col++){
				sum = 0;
				for (int row = 0; row < NUM_PRECINCTS; row++){
						sum += votes[row][col];
						//sum = sum + votes[row][col];
				}
				
				outfile << "Total votes for " << setw(10) 
								<< names[col].substr(0,9) << ": " << sum << endl;
		
		}
		outfile << endl;
}
				



void printPrecinctTotals(const int votes[][NUM_CANDIDATES], 
												 ofstream &outfile)
				 
{
		int sum;
		
		for (int row = 0; row < NUM_PRECINCTS; row++){
				sum = 0;
				for (int col = 0; col < NUM_CANDIDATES; col++){
						sum += votes[row][col];
						//sum = sum + votes[row][col];
				}
				
				outfile << "Total votes for precinct " << row+1 
								<< ": " << sum << endl;
		
		}
		outfile << endl;
}
