#include <iostream>
//contains functions that deal with generating random numbers. one function is rand()
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	srand(static_cast<unsigned int>(time(0))); //seed random number generator

	int randomNumber = rand(); //generate random number

	int die = (randomNumber % 6) + 1; //get a number between 1 and 6. Modulus gets a remainder between 0-5 and + 1 
	// makes the 1-6 
	cout << "You rolled a " << die << endl;

	return 0;
}