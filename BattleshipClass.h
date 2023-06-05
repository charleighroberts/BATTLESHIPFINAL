//BattleshipClass 
//class object

#ifndef BattleshipClass_H
#define BattleshipClass_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath> 
#include <cstdlib>
#include <ctime>
using namespace std;

class Battleship
{
private:
	string shipName; // shipName: Each object should be named to reflect the type of ship it is.

	int pegs; // numHits: The number of hits the ship can take before sinking.
	int boatlocation[5]; // location: This should be an int array or vector and stores where on the 10 by 10 grid the ship is placed.
	bool hit[5] = {true, true, true, true, true};
	//hit array of Boolean variables initialized as false, as the ship is hit in each location set the corresponding variable to true,
	//when the entire array is set to true, the ship is sunk.


public:
	// constructor

	void ship(string, int);

	//bool function to set with false values
	bool hits();

	// adds boat locations to an array
	int* boats(int, int, int, int, int);
	bool* pegvalues(int);

	//search to see if ship has been hit
	bool compare(int);

	//search to see if a shop has been sunk
	void sunk();
	bool truesunk();
	bool sinkingship = false;
	//
	void displayhits();

	//display ship locations
	void displayShipInfo();



};

//constructor

void Battleship::ship(string s, int n)
{
	shipName = s;
	pegs = n;

}


int* Battleship::boats(int a, int b, int c, int d, int e)
{

	for (int index = 0; index < pegs; index++)
	{
		if (index == 0)
		{
			boatlocation[index] = a;
			
		}
		else if (index == 1)
		{
			boatlocation[index] = b;
			
		}
		else if (index == 2)
		{
			boatlocation[index] = c;
			
		}
		else if (index == 3)
		{
			boatlocation[index] = d;
			
		}
		else if (index == 4)
		{
			boatlocation[index] = e;
			
		}
	}

	//for (int arra = 0; arra < pegs; arra++)
	//{
		return boatlocation;
	//}
}

bool* Battleship::pegvalues(int a)
{
	if (a == 2)
	{
		hit[0] = false;
		hit[1] = false;
	}
	else if (a == 3)
	{
		hit[0] = false;
		hit[1] = false;
		hit[2] = false;
	}
	else if (a == 4)
	{
		hit[0] = false;
		hit[1] = false;
		hit[2] = false;
		hit[3] = false;
	}
	else if (a == 5)
	{
		hit[0] = false;
		hit[1] = false;
		hit[2] = false;
		hit[3] = false;
		hit[4] = false;
	}
	
		return hit;
}

//calls array for each ship
void Battleship::displayShipInfo()
{
	cout << this->shipName << " boat location: \n";
	for (int arra = 0; arra < pegs; arra++)
	{
		cout << this->boatlocation[arra] << endl;
	}

}

/*//set bool hits up with false values
bool Battleship::hits()
{
	for (int index = 0; index < pegs; index++)
	{
		hit[index] = false;
		return hit[index];
	}

}*/


//compare arrays to guess
bool Battleship::compare(int place)
{

	int noHit = 0;

	for (int arra = 0; arra < pegs; arra++)
	{
		if (boatlocation[arra] == place)
		{
			//cout << "You got a Hit!" << this->shipName << endl;;

			hit[arra] = true;
			noHit++;
			

		}

	}
	//if (noHit == 0)
	//{
	//	cout << "You Missed " << this->shipName << endl;
	//}
	return hit;

}

//it should display the name of the ship how many times it has been hit or , if that was the final hit, that the ship has been sunk.

void Battleship::displayhits()
{
	cout << this->shipName << endl;
	cout << "Total amount of hits it takes to destroy: " << this->pegs << endl;
	int numHits = 0;
	for (int arra = 0; arra < pegs; arra++)
	{
		if (hit[arra] == true)
		{
			numHits++;
		}
	}
	cout << "Total amount of hits: " << numHits << endl;
	if (numHits == pegs)
	{
		cout << this->shipName << " has sunk.\n";
	}
}

//add to it to bool array 
//sunk function
void Battleship::sunk()
{
	bool sunk = true;
	for (int i = 0; i < 5; i++) {
		if (!hit[i])
		{
			sunk = false;
			break;
		}
	}
	if (sunk)
	{
		cout << this->shipName << " ship has sunk!!" << endl;
		truesunk();
	}
}


bool Battleship::truesunk()
{
	return sinkingship;
}
#endif