/*Final Project*/


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath> 
#include <algorithm>                                   
#include <vector>                                     
#include <cstdlib>                                     
#include <ctime>
#include <stack>
#include <string>
#include <chrono>
#include <thread>
#include "CharleighList.h" //linked list .h
#include "BattleshipClass.h" //class .h
#include "boatMENU.h" 
using namespace std;

void boat(int*[], int, int);
void computerboat(int* [], int, int);
int setColumn(string, int);

bool inputverificationchoice(int ptr);

struct ASCIIChar 
{
	unsigned char value; // The ASCII value of the character
	bool isPrintable; // Whether the character is printable or not
	bool isWhitespace; // Whether the character is whitespace or not
	bool isLetter; // Whether the character is a letter or not
	bool isDigit; // Whether the character is a digit or not
	bool isPunctuation; // Whether the character is punctuation or not
	bool isControlChar; // Whether the character is a control character or not
};
void clearScreen() {
	// This function clears the console screen
	cout << "\033[2J\033[1;1H";
}




// functions
void arrSelectSort(int* [], int);
void showArray(const int[], int);
void showArrPtr(int* [], int);

//modification functions
bool inputverification(int& ptr);
void arrSelectSortDescending(int* [], int);



int main()
{
	
	int num_frames = 1;  // Change this to adjust the number of frames
	int delay_ms = 1000;  // Change this to adjust the delay between frames

	string frame1 = R"(
__/\\\________/\\\____/\\\\\\\\\\___/\\\__________/\\\______________/\\\\\\\\\\\\\\        
 _\/\\\_______\/\\\___\/\\\//////___\/\\\_________\/\\\____________/\\\//////////\\\     
  _\/\\\_______\/\\\___\/\\\_________\/\\\_________\/\\\__________/\\\/_________\//\\\       
   _\/\\\_______\/\\\___\/\\\_________\/\\\_________\/\\\________/\\\____________ \//\\\     
    _\/\\\\\\\\\\\\\\\___\/\\\\\\\\\___\/\\\_________\/\\\________\/\\\_____________\///     
     _\/\\\/////////\\\___\/\\\/////____\/\\\_________\/\\\________\//\\\__________/\//    
      _\/\\\_______\/\\\___\/\\\_________\/\\\_________\/\\\_________\///\\\______/\\/ 
       _\/\\\_______\/\\\___\/\\\\\\\\\\\_\/\\\\\\\\\\\_\/\\\\\\\\\\\___\//\\\\\\\\\\ 
        _\///________\///____\///////////__\///////////__\///////////_____\//////////       
)";
	string frame2 = R"(
                ___        ___    ___           ___        _______  ___ 
       \      / |    |    /      /   \    /\/\  |             |    /   \ 
        \    /  |--  |   |      |     |  /    \ |--           |   |     |
         \/\/   |___ |___ \___   \___/  /      \|___          |    \___/
)";

	for (int i = 0; i < num_frames; i++) 
	{
		// Print the first frame
		cout << frame1 << '\n';

		// Wait for a brief period
		this_thread::sleep_for(chrono::milliseconds(delay_ms));

		// Print the second frame
		cout << frame2 << '\n';

		// Wait for a brief period
		this_thread::sleep_for(chrono::milliseconds(delay_ms));
	}
	{
		const int num_framess = 20;  // Change this to adjust the number of frames
		const int delay_msss = 100;  // Change this to adjust the delay between frames
		int position = 0;  // The current position of the battleship

		string battleshipp = R"(
									|__
                                     |\/
                                     ---
                                     / | [
                              !      | |||
                            _/|     _/|-++'
                        +  +--|    |--|--|_ |-
                     { /|__|  |/\__|  |--- |||__/
                    +---------------___[}-_===_.'____                 /\
                ____`-' ||___-{]_| _[}-  |     |_[___\==--            \/   _
 __..._____--==/___]_|__|_____________________________[___\==--____,------' .7
|                                                                          /
 \_________________________________________________________________________|)";

		for (int i = 0; i < num_framess; i++)
		{
			// Clear the console screen
			clearScreen();

			// Print the battleship at the current position
			cout << string(position, ' ') << battleshipp << '\n';

			// Wait for a brief period
			this_thread::sleep_for(chrono::milliseconds(delay_msss));

			// Update the position of the battleship
			position++;

			/*// Print the battleship at a different position
			for (int j = 0; j < i; j++)
			{
				cout << ' ';
			}
			cout << battleship << '\n';

			// Wait for a brief period
			this_thread::sleep_for(chrono::milliseconds(delay_mss));*/
		}
	}


		srand(time(0));
		cout << "Hello World\n\n";

		//hardcode computer ships
		int filler = 0;
		//pt boat 2 pegs
		Battleship PT;
		string ptboat = "PT Boat";
		//hardcode name and ship.
		int ptpegs = 2;
		PT.ship(ptboat, ptpegs);
		//PT.hits();
		int pt = 0;
		int addpt = 0;
		PT.pegvalues(ptpegs);

		//frigate boat 3 pegs
		Battleship frigate;
		string frigat = "frigate";
		int fripegs = 3;
		//hardcode name and ship.
		frigate.ship(frigat, fripegs);
		//frigate.hits();
		int fri = 0;
		int addfri = 0;
		int thirdfri = 0;
		frigate.pegvalues(ptpegs);

		//submarine boat 3 pegs
		Battleship submarine;
		string submarines = "submarine";
		int subpegs = 3;
		//hardcode name and ship.
		submarine.ship(submarines, subpegs);
		//submarine.hits();
		int sub = 0;
		int addsub = 0;
		int thirdsub = 0;
		submarine.pegvalues(ptpegs);

		//battleship boat 4 pegs
		Battleship battleship;
		string battleshipS = "battleship";
		int battleshipps = 4;
		//hardcode name and ship.
		battleship.ship(battleshipS, battleshipps);
		//battleship.hits();
		int bs = 0;
		int bs2 = 0;
		int bs3 = 0;
		int bs4 = 0;
		battleship.pegvalues(ptpegs);

		//aircraft carrier boat 5 pegs
		Battleship aircraft;
		string aircrafts = "aircraft";
		int aircraftc = 5;
		//hardcode name and ship.
		aircraft.ship(aircrafts, aircraftc);
		//aircraft.hits();
		int ac = 0;
		int ac2 = 0;
		int ac3 = 0;
		int ac4 = 0;
		int ac5 = 0;
		aircraft.pegvalues(ptpegs);

		//hardcode computer
		const int NUM_COMP = 100;
		int computerboard[NUM_COMP];
		//replace all spots on human board with 0's
		for (int count = 0; count < NUM_COMP; count++)
		{
			computerboard[count] = 0;
			//cout << computerboard[count];
		}
		// array of pointers
		int* arrPtrcomp[NUM_COMP];
		// point the pointers to the computerboard array
		for (int count = 0; count < NUM_COMP; count++)
		{
			arrPtrcomp[count] = &computerboard[count];  // arrPtr at count is assigned the memory location of humanboard at count
		}
		//COMPUTER PT
		computerboat(arrPtrcomp, NUM_COMP, ptpegs);
		for (int count = 0; count < NUM_COMP; count++)
		{
			if (computerboard[count] != 0 && pt == 0)
			{
				pt = computerboard[count];
			}
			else if (computerboard[count] != 0 && pt != 0)
			{
				addpt = computerboard[count];
			}

		}
		PT.boats(pt, addpt, filler, filler, filler);
		//COMPUTER FRIGATE
		computerboat(arrPtrcomp, NUM_COMP, fripegs);
		for (int count = 0; count < NUM_COMP; count++)
		{
			if (computerboard[count] != 0 && computerboard[count] != pt && computerboard[count] != addpt && fri == 0)
			{
				fri = computerboard[count];
			}
			else if (computerboard[count] != 0 && computerboard[count] != pt && computerboard[count] != addpt && computerboard[count] != fri && addfri == 0)
			{
				addfri = computerboard[count];
			}
			else if (computerboard[count] != 0 && computerboard[count] != pt && computerboard[count] != addpt && computerboard[count] != fri && computerboard[count] != addfri)
			{
				thirdfri = computerboard[count];
			}

		}
		frigate.boats(fri, addfri, thirdfri, filler, filler);
		//COMPUTER SUB
		computerboat(arrPtrcomp, NUM_COMP, subpegs);
		for (int count = 0; count < NUM_COMP; count++)
		{
			if (computerboard[count] != pt && computerboard[count] != addpt && computerboard[count] != fri && computerboard[count] != addfri && computerboard[count] != thirdfri)
			{
				if (computerboard[count] != 0 && sub == 0)
				{
					sub = computerboard[count];
				}
				else if (computerboard[count] != 0 && computerboard[count] != sub && addsub == 0)
				{
					addsub = computerboard[count];
				}
				else if (computerboard[count] != 0 && computerboard[count] != sub && computerboard[count] != addsub && thirdsub == 0)
				{
					thirdsub = computerboard[count];;
				}
			}

		}
		submarine.boats(sub, addsub, thirdsub, filler, filler);
		//COMPUTER BATTLESHIP
		computerboat(arrPtrcomp, NUM_COMP, battleshipps);
		for (int count = 0; count < NUM_COMP; count++)
		{
			if (computerboard[count] != pt && computerboard[count] != addpt && computerboard[count] != fri && computerboard[count] != addfri && computerboard[count] != thirdfri && computerboard[count] != sub && computerboard[count] != addsub && computerboard[count] != thirdsub)
			{
				if (computerboard[count] != 0 && bs == 0)
				{
					bs = computerboard[count];
				}
				else if (computerboard[count] != 0 && computerboard[count] != bs && bs2 == 0)
				{
					bs2 = computerboard[count];
				}
				else if (computerboard[count] != 0 && computerboard[count] != bs && computerboard[count] != bs2 && bs3 == 0)
				{
					bs3 = computerboard[count];
				}
				else if (computerboard[count] != 0 && computerboard[count] != bs && computerboard[count] != bs2 && computerboard[count] != bs3 && bs4 == 0)
				{
					bs4 = computerboard[count];
				}
			}

		}
		battleship.boats(bs, bs2, bs3, bs4, filler);
		//COMPUTER AIRCRAFT C
		computerboat(arrPtrcomp, NUM_COMP, aircraftc);
		for (int count = 0; count < NUM_COMP; count++)
		{
			if (computerboard[count] != pt && computerboard[count] != addpt && computerboard[count] != fri && computerboard[count] != addfri && computerboard[count] != thirdfri && computerboard[count] != sub && computerboard[count] != addsub && computerboard[count] != thirdsub && computerboard[count] != 0 && computerboard[count] != bs && computerboard[count] != bs2 && computerboard[count] != bs3 && computerboard[count] != bs4)
			{
				if (computerboard[count] != 0 && ac == 0)
				{
					ac = computerboard[count];
				}
				else if (computerboard[count] != 0 && computerboard[count] != ac && ac2 == 0)
				{
					ac2 = computerboard[count];
				}
				else if (computerboard[count] != 0 && computerboard[count] != ac && computerboard[count] != ac2 && ac3 == 0)
				{
					ac3 = computerboard[count];
				}
				else if (computerboard[count] != 0 && computerboard[count] != ac && computerboard[count] != ac2 && computerboard[count] != ac3 && ac4 == 0)
				{
					ac4 = computerboard[count];
				}
				else if (computerboard[count] != 0 && computerboard[count] != ac && computerboard[count] != ac2 && computerboard[count] != ac3 && computerboard[count] != ac4 && ac5 == 0)
				{
					ac5 = computerboard[count];
				}

			}

		}
		aircraft.boats(ac, ac2, ac3, ac4, ac5);

		//cout << "computer board" << endl;
		//for (int count = 0; count < NUM_COMP; count++)
		//{
		//	cout << computerboard[count] << endl;
		//}
		// 

		//hardcode HUMAN ships
		//pt boat 2 pegs
		Battleship HPT;
		//hardcode name and ship.
		HPT.ship(ptboat, ptpegs);
		//HPT.hits();
		HPT.pegvalues(ptpegs);

		//frigate boat 3 pegs
		Battleship Hfrigate;
		//hardcode name and ship.
		Hfrigate.ship(frigat, fripegs);
		//Hfrigate.hits();
		Hfrigate.pegvalues(ptpegs);

		//submarine boat 3 pegs
		Battleship Hsubmarine;
		//hardcode name and ship.
		Hsubmarine.ship(submarines, subpegs);
		//Hsubmarine.hits();
		Hsubmarine.pegvalues(ptpegs);

		//battleship boat 4 pegs
		Battleship Hbattleship;
		//hardcode name and ship.
		Hbattleship.ship(battleshipS, battleshipps);
		//Hbattleship.hits();
		Hbattleship.pegvalues(ptpegs);

		//aircraft carrier boat 5 pegs
		Battleship Haircraft;
		//hardcode name and ship.
		Haircraft.ship(aircrafts, aircraftc);
		//Haircraft.hits();
		Haircraft.pegvalues(ptpegs);

		char symbol;
		//// set up humanboard with an array of 0's
		const int NUM_SPOT = 100;
		int humanboard[NUM_SPOT];
		//replace all spots on human board with 0's
		for (int count = 0; count < NUM_SPOT; count++)
		{
			humanboard[count] = 0;
			//cout << humanboard[count];
		}
		// array of pointers
		int* arrPtr[NUM_SPOT];
		// point the pointers to the humanboard array
		for (int count = 0; count < NUM_SPOT; count++)
		{
			arrPtr[count] = &humanboard[count];  // arrPtr at count is assigned the memory location of humanboard at count
		}
		cout << endl;

		int choice1; //to hold menu choice
		const int CONTINU = 1, //CONSTANTS FOR MENU CHOICES
			QUIT_C = 2;
		do
		{
			showMenu(); //display menu and get choice
			cin >> choice1;
			while (choice1 < CONTINU || choice1 > QUIT_C) //validate choice
			{
				cout << "Please enter a valid choice: ";
				cin >> choice1;
			} //if the program is not 2 continue

			if (choice1 != QUIT_C)
			{
				int pt = 0;
				int addpt = 0;
				cout << "Enter choice for PT Boat (2 pegs)" << endl;
				boat(arrPtr, NUM_SPOT, 2);
				for (int count = 0; count < NUM_COMP; count++)
				{
					if (humanboard[count] != 0 && pt == 0)
					{
						pt = humanboard[count];
					}
					else if (humanboard[count] != 0 && pt != 0)
					{
						addpt = humanboard[count];
					}

				}
				HPT.boats(pt, addpt, filler, filler, filler);
				cout << "   ";
				for (int col = 0; col < 10; col++)
				{
					cout << " " << char(col + 65);
				}
				cout << endl;
				for (int row = 0; row < 10; row++)
				{
					if (row == 9)
					{
						cout << row + 1 << " ";
					}
					else
					{
						cout << row + 1 << "  ";
					}
					for (int col = 0; col < 10; col++)
					{
						if (humanboard[row * 10 + col] == 0)
						{
							symbol = '.';
						}
						else if (humanboard[row * 10 + col] >= 1)
						{
							symbol = 'O';
						}
						cout << " " << symbol;
					}
					cout << endl;
				}
				int fri = 0;
				int addfri = 0;
				int thirdfri = 0;
				cout << "\nEnter choice for Frigate (3 pegs)" << endl;
				boat(arrPtr, NUM_SPOT, 3);
				for (int count = 0; count < NUM_COMP; count++)
				{
					if (humanboard[count] != 0 && humanboard[count] != pt && humanboard[count] != addpt && fri == 0)
					{
						fri = humanboard[count];

					}
					else if (humanboard[count] != 0 && humanboard[count] != pt && humanboard[count] != addpt && humanboard[count] != fri && addfri == 0)
					{
						addfri = humanboard[count];

					}
					else if (humanboard[count] != 0 && humanboard[count] != pt && humanboard[count] != addpt && humanboard[count] != fri && humanboard[count] != addfri)
					{
						thirdfri = humanboard[count];

					}

				}
				Hfrigate.boats(fri, addfri, thirdfri, filler, filler);
				cout << "   ";
				for (int col = 0; col < 10; col++)
				{
					cout << " " << char(col + 65);
				}
				cout << endl;
				for (int row = 0; row < 10; row++)
				{
					if (row == 9)
					{
						cout << row + 1 << " ";
					}
					else
					{
						cout << row + 1 << "  ";
					}
					for (int col = 0; col < 10; col++)
					{
						if (humanboard[row * 10 + col] == 0)
						{
							symbol = '.';
						}
						else if (humanboard[row * 10 + col] >= 1)
						{
							symbol = 'O';
						}
						cout << " " << symbol;
					}
					cout << endl;
				}

				int sub = 0;
				int addsub = 0;
				int thirdsub = 0;
				cout << "\nEnter choice for Submarine (3 pegs)" << endl;
				boat(arrPtr, NUM_SPOT, subpegs);
				for (int count = 0; count < NUM_COMP; count++)
				{
					if (humanboard[count] != pt && humanboard[count] != addpt && humanboard[count] != fri && humanboard[count] != addfri && humanboard[count] != thirdfri)
					{
						if (humanboard[count] != 0 && sub == 0)
						{
							sub = humanboard[count];
						}
						else if (humanboard[count] != 0 && humanboard[count] != sub && addsub == 0)
						{
							addsub = humanboard[count];
						}
						else if (humanboard[count] != 0 && humanboard[count] != sub && humanboard[count] != addsub && thirdsub == 0)
						{
							thirdsub = humanboard[count];
						}
					}

				}
				Hsubmarine.boats(sub, addsub, thirdsub, filler, filler);
				cout << "   ";
				for (int col = 0; col < 10; col++)
				{
					cout << " " << char(col + 65);
				}
				cout << endl;
				for (int row = 0; row < 10; row++)
				{
					if (row == 9)
					{
						cout << row + 1 << " ";
					}
					else
					{
						cout << row + 1 << "  ";
					}
					for (int col = 0; col < 10; col++)
					{
						if (humanboard[row * 10 + col] == 0)
						{
							symbol = '.';
						}
						else if (humanboard[row * 10 + col] >= 1)
						{
							symbol = 'O';
						}
						cout << " " << symbol;
					}
					cout << endl;
				}

				int bs = 0;
				int bs2 = 0;
				int bs3 = 0;
				int bs4 = 0;
				cout << "\nEnter choice for Battleship (4 pegs) " << endl;
				boat(arrPtr, NUM_SPOT, battleshipps);
				for (int count = 0; count < NUM_COMP; count++)
				{
					if (humanboard[count] != pt && humanboard[count] != addpt && humanboard[count] != fri && humanboard[count] != addfri && humanboard[count] != thirdfri && humanboard[count] != sub && humanboard[count] != addsub && humanboard[count] != thirdsub)
					{
						if (humanboard[count] != 0 && bs == 0)
						{
							bs = humanboard[count];
						}
						else if (humanboard[count] != 0 && humanboard[count] != bs && bs2 == 0)
						{
							bs2 = humanboard[count];
						}
						else if (humanboard[count] != 0 && humanboard[count] != bs && humanboard[count] != bs2 && bs3 == 0)
						{
							bs3 = humanboard[count];
						}
						else if (humanboard[count] != 0 && humanboard[count] != bs && humanboard[count] != bs2 && humanboard[count] != bs3 && bs4 == 0)
						{
							bs4 = humanboard[count];
						}
					}

				}
				Hbattleship.boats(bs, bs2, bs3, bs4, filler);

				cout << "   ";
				for (int col = 0; col < 10; col++)
				{
					cout << " " << char(col + 65);
				}
				cout << endl;
				for (int row = 0; row < 10; row++)
				{
					if (row == 9)
					{
						cout << row + 1 << " ";
					}
					else
					{
						cout << row + 1 << "  ";
					}
					for (int col = 0; col < 10; col++)
					{
						if (humanboard[row * 10 + col] == 0)
						{
							symbol = '.';
						}
						else if (humanboard[row * 10 + col] >= 1)
						{
							symbol = 'O';
						}
						cout << " " << symbol;
					}
					cout << endl;
				}

				int ac = 0;
				int ac2 = 0;
				int ac3 = 0;
				int ac4 = 0;
				int ac5 = 0;
				cout << "\nEnter choice for Aircraft Carrier (5 pegs) " << endl;
				boat(arrPtr, NUM_SPOT, aircraftc);
				for (int count = 0; count < NUM_COMP; count++)
				{
					if (humanboard[count] != pt && humanboard[count] != addpt && humanboard[count] != fri && humanboard[count] != addfri && humanboard[count] != thirdfri && humanboard[count] != sub && humanboard[count] != addsub && humanboard[count] != thirdsub && humanboard[count] != 0 && humanboard[count] != bs && humanboard[count] != bs2 && humanboard[count] != bs3 && humanboard[count] != bs4)
					{
						if (humanboard[count] != 0 && ac == 0)
						{
							ac = humanboard[count];
						}
						else if (humanboard[count] != 0 && humanboard[count] != ac && ac2 == 0)
						{
							ac2 = humanboard[count];
						}
						else if (humanboard[count] != 0 && humanboard[count] != ac && humanboard[count] != ac2 && ac3 == 0)
						{
							ac3 = humanboard[count];
						}
						else if (humanboard[count] != 0 && humanboard[count] != ac && humanboard[count] != ac2 && humanboard[count] != ac3 && ac4 == 0)
						{
							ac4 = humanboard[count];
						}
						else if (humanboard[count] != 0 && humanboard[count] != ac && humanboard[count] != ac2 && humanboard[count] != ac3 && humanboard[count] != ac4 && ac5 == 0)
						{
							ac5 = humanboard[count];
						}

					}

				}
				Haircraft.boats(ac, ac2, ac3, ac4, ac5);
				/*cout << "   ";
				for (int col = 0; col < 10; col++)
				{
					cout << " " << char(col + 65);
				}
				cout << endl;
				for (int row = 0; row < 10; row++)
				{
					if (row == 9)
					{
						cout << row + 1 << " ";
					}
					else
					{
						cout << row + 1 << "  ";
					}
					for (int col = 0; col < 10; col++)
					{
						if (humanboard[row * 10 + col] == 0)
						{
							symbol = '.';
						}
						else if (humanboard[row * 10 + col] >= 1)
						{
							symbol = 'O';
						}
						cout << " " << symbol;
					}
					cout << endl;
				}*/

				break;

			}

			//if choice is 6 quit the program
		} while (choice1 != QUIT_C);

		/*cout << "human board" << endl;
		for (int count = 0; count < NUM_COMP; count++)
		{
			cout << humanboard[count] << endl;
		}*/

		cout << "   ";
		for (int col = 0; col < 10; col++)
		{
			cout << " " << char(col + 65);
		}
		cout << endl;
		for (int row = 0; row < 10; row++)
		{
			if (row == 9)
			{
				cout << row + 1 << " ";
			}
			else
			{
				cout << row + 1 << "  ";
			}
			for (int col = 0; col < 10; col++)
			{
				if (humanboard[row * 10 + col] == 0)
				{
					symbol = '.';
				}
				else if (humanboard[row * 10 + col] >= 1)
				{
					symbol = 'O';
				}
				cout << " " << symbol;
			}
			cout << endl;
		}



		/*PT.displayShipInfo();
		frigate.displayShipInfo();
		submarine.displayShipInfo();
		battleship.displayShipInfo();
		aircraft.displayShipInfo();

		HPT.displayShipInfoH();
		Hfrigate.displayShipInfoH();
		Hsubmarine.displayShipInfoH();
		Hbattleship.displayShipInfoH();
		Haircraft.displayShipInfoH();*/

		//play game
		cout << "\n\nLet's play Battleship! Guess where the computer's ships are: \n";

		const int CONTINUE = 1,
			QUIT_CHOICE = 4,
			SUNK_SHIP = 2,
			DISPLAY_SHIPINFO = 3;
		int choice;
		int row;
		string colu;
		int* ptr = nullptr;

		//game instructions
		cout << "\n* means miss\nX means hit.";
		do
		{
			do {
				// get user choice
				cout << "\n1 guess\n4 quit game\n";
				if (!(cin >> choice)) {
					// invalid input, clear the error flag and ignore remaining input
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Invalid input. Please enter a number.\n";
					continue; // repeat the loop to get valid input
				}
				// validate user choice
				if (choice != CONTINUE && choice != QUIT_CHOICE) {
					cout << "Invalid choice. Please enter either 1 or 4.\n";
				}
			} while (choice != CONTINUE && choice != QUIT_CHOICE);


			if (choice != QUIT_CHOICE)
			{//switch for choice
				switch (choice)
				{
					//case 1 is to enter values
				case 1:
				{

					while (choice == 1)
					{
						bool again = true;
						cout << "\nColumn:  ";
						cin >> colu;
						cout << "Row:  ";
						cin >> row;
						// check if input for row is valid
						while (cin.fail() || row < 1 || row > 10) {
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							cout << "Invalid input. Please enter a number between 1 and 10." << endl;
							cin >> row;
						}
						//to find numbered guess in array
						int place = setColumn(colu, row);
						//cout << "guess: " << place << endl;

						bool match_found = false;
						for (int i = 0; i < NUM_COMP; i++)
						{
							//if (computerboard[i] == 222) //if that spot already equals 222 choose again
							//{
							//	cout << "Choose again: ";
							//	again = false; //changes to false 
							//	break;
							//}
							if (computerboard[i] == place && again == true)
							{
								computerboard[i] = 222;
								match_found = true;
								break;
							}
						}
						if (!match_found && again) // if no match was found, only set the entered place to 555
						{
							int index = place - 1;
							//if (computerboard[place - 1] == 555)//if that spot already equals 555 choose again
							//{
							//	cout << "Choose again: ";
							//	again = false;
							//}
							if (place >= 0 && place < NUM_COMP && computerboard[place] != 222 && again)
							{
								computerboard[place - 1] = 555;
								match_found = true;
							}
						}

						//} while (again == false);
						cout << "computer board" << endl;
						for (int count = 0; count < NUM_COMP; count++)
						{
							cout << computerboard[count] << ", ";
						}
						cout << endl;

						//compare guess to boat arrays. 
						PT.compare(place);

						frigate.compare(place);

						submarine.compare(place);

						battleship.compare(place);

						aircraft.compare(place);
						cout << "Computers Board" << endl;
						cout << "   ";
						for (int col = 0; col < 10; col++)
						{
							cout << " " << char(col + 65);
						}
						cout << endl;
						for (int row = 0; row < 10; row++)
						{
							if (row == 9)
							{
								cout << row + 1 << " ";
							}
							else
							{
								cout << row + 1 << "  ";
							}
							for (int col = 0; col < 10; col++)
							{
								if (computerboard[row * 10 + col] == 0)//not guessed
								{
									symbol = '.';
								}
								else if (computerboard[row * 10 + col] == 222) //guessed and its a hit
								{
									symbol = 'x';
								}
								else if (computerboard[row * 10 + col] == 555) //guessed and its a miss
								{
									symbol = '*';
								}
								else
								{
									symbol = '.';
								}
								cout << " " << symbol;
							}
							cout << endl;
						}

						//computer ships to sink if player wins
						PT.sunk();
						frigate.sunk();
						submarine.sunk();
						battleship.sunk();
						aircraft.sunk();
						bool allShipsSunk2 = true;
						if (!PT.truesunk() || !frigate.truesunk() || !submarine.truesunk() || !battleship.truesunk() || !aircraft.truesunk())
						{
							allShipsSunk2 = false;
						}
						if (allShipsSunk2)
						{
							cout << "\nCONGRATULATIONS, YOU WON!!!\n" << endl;
							cout << "Play again? \n";
							return main();
						}
						//computers turn
						int number;
						int direction;
						int total;
						bool match_found2 = false;
						total = (rand() % 100); //computer randomly picks a number out of 100
						//direction = 1 + (rand() % 2); //computer randomly picks a number out of 2 either 1  for horizonal or 2 for virtical
						//total = number + direction;
						//cout << "random direction number" << total << endl;
						bool again2 = true;
						for (int i = 0; i < NUM_COMP; i++)
						{
							if (humanboard[i] == total && again2 == true)
							{
								humanboard[i] = 333;
								match_found2 = true;
								break;
							}
						}
						if (!match_found2 && again2) // if no match was found, only set the entered place to 555
						{
							int index = total - 1;
							if (total >= 0 && total < NUM_COMP && humanboard[total] != 333 && again2 == true)
							{
								humanboard[total - 1] = 666;
								match_found2 = true;
							}
						}
						//cout << "human board" << endl;
						//for (int count = 0; count < NUM_COMP; count++)
						//{
						//	cout << humanboard[count] << ", ";
					//	}
						//cout << endl;
						//compare guess to boat arrays. 
						HPT.compare(total);

						Hfrigate.compare(total);

						Hsubmarine.compare(total);

						Hbattleship.compare(total);

						Haircraft.compare(total);
						cout << "Players Board" << endl;
						cout << "   ";
						for (int col = 0; col < 10; col++)
						{
							cout << " " << char(col + 65);
						}
						cout << endl;
						for (int row = 0; row < 10; row++)
						{
							if (row == 9)
							{
								cout << row + 1 << " ";
							}
							else
							{
								cout << row + 1 << "  ";
							}
							for (int col = 0; col < 10; col++)
							{
								if (humanboard[row * 10 + col] == 0)
								{
									symbol = '.';
								}
								else if (humanboard[row * 10 + col] == 333)
								{
									symbol = 'X';
								}
								else if (humanboard[row * 10 + col] == 666)
								{
									symbol = '*';
								}
								else if (humanboard[row * 10 + col] >= 1 && humanboard[row * 10 + col] != 666 && humanboard[row * 10 + col] != 333)
								{
									symbol = 'O';
								}
								cout << " " << symbol;
							}
							cout << endl;
						}

						//human ships to sink if computer wins
						HPT.sunk();
						Hfrigate.sunk();
						Hsubmarine.sunk();
						Hbattleship.sunk();
						Haircraft.sunk();
						bool allShipsSunk = true;
						if (!HPT.truesunk() || !Hfrigate.truesunk() || !Hsubmarine.truesunk() || !Hbattleship.truesunk() || !Haircraft.truesunk())
						{
							allShipsSunk = false;
						}
						if (allShipsSunk)
						{
							cout << "\nYOU LOST!\n" << endl;
							cout << "Play again? \n";
							return main();
						}



						do {
							// get user choice
							cout << "Guess again?\n1 guess\n4 quit game\n";
							if (!(cin >> choice)) {
								// invalid input, clear the error flag and ignore remaining input
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(), '\n');
								cout << "Invalid input. Please enter a number.\n";
								continue; // repeat the loop to get valid input
							}
							// validate user choice
							if (choice != CONTINUE && choice != QUIT_CHOICE) {
								cout << "Invalid choice. Please enter either 1 or 4.\n";
							}
						} while (choice != CONTINUE && choice != QUIT_CHOICE);
						cout << endl;
					}
					break;

				}

				}

			}
		} while (choice != QUIT_CHOICE);

		return 0;
	
	
}

void computerboat(int* arrPtr[], int NUM_SPOT, int pegs)
{
	srand(time(0));

	stack <int> compStack;
	int number;
	int direction;
	int* ptr = nullptr;
	bool spot = true;

	do
	{
		number = 1 + (rand() % 100); //computer randomly picks a number out of 100
		if (*(arrPtr[number - 1]) == 0) // check if position is available
		{
			*(arrPtr[number - 1]) = number;
			//cout << "\nrandom starting number" << * (arrPtr[number - 1]) << endl;
			spot = false; // set spot to false if position is available
		}

	} while (spot == true);

	compStack.push(number); //add chosen number to stack
	direction = 1 + (rand() % 2); //computer randomly picks a number out of 2 either 1  for horizonal or 2 for virtical
	//cout << "random direction number" << direction << endl;

	// Define an array of ranges for horizontal
	const int NUM_RANGES = 10;
	int ranges[NUM_RANGES][2] = 
	{
		{1, 10},
		{11, 20},
		{21, 30},
		{31, 40},
		{41, 50},
		{51, 60},
		{61, 70},
		{71, 80},
		{81, 90},
		{91, 100},
	};
	int stop = 0;         //to stop if numbers are in array
	int startvalue = number; // to keep chosen value
	int placementsucessful = 1; //1 placment already made in humanboard array
	if (direction == 1) //if direction is horizontal
	{
		int left = (pegs - placementsucessful); //to keep peg amount 1 peg already made in board array
		// Iterate over the ranges
		for (int i = 0; i < NUM_RANGES; i++)
		{
			int rangeStart = ranges[i][0];
			int rangeEnd = ranges[i][1];
			if (number >= rangeStart && number <= rangeEnd) 	// Check if placement is within current range
			{
				bool firsttry = true;
				for (int count = 0; count < left; left--) //if chosen in B3 that = 22 and PT has 2 pegs. I already added 22 to the humanboard array
				{                                                //so I need pegs - 1 = so there is 1 more peg left to place
					number--; //count down 1 on placment           // we are starting with open spots to the left so 21 is what we are placing
					firsttry = true; //compare is true
					for (int id = 0; id < NUM_SPOT; id++) {
						if (number == *(arrPtr[id]))
						{ //if placment value is the same as any number in the main humanboard array
							firsttry = false; //make it false
							stop++; //add 1 to stop so the if statement will not work
						}
					}
					if (number >= rangeStart && number <= rangeEnd && firsttry == true) //else you will add the number to humanboard array
					{
						*(arrPtr[number - 1]) = number; //add to array placement which is  22- 1 = 21 will be placed
						compStack.push(number); //add to stack
						placementsucessful++;
					}


				}
				bool compare = true;
				if (firsttry == false || placementsucessful != pegs) //if payment successful does not equal pegs then set left back up for right side.
				{
					left = (pegs - placementsucessful);
					number = startvalue; //set placment back to startvalue
					{
						for (int count = 0; count < left; left--) //if chosen in A1 that = 1 and PT has 2 pegs. I already added 1 to the humanboard array
						{                                                //so I need pegs - 1 = so there is 1 more peg left to place //left side failed due to their being no A0.

							number++; //count up on placment           // we are starting with open spots to the left so 2 is what we are placing
							compare = true; //compare is true	
							for (int id = 0; id < NUM_SPOT; id++) {
								if (number == *(arrPtr[id])) { //if placment value is the same as any number in the main humanboard array
									compare = false; //make it false
									stop++; //add 1 to stop so the if statement will not work
								}
							}
							if (number >= rangeStart && number <= rangeEnd && compare == true) //else you will add the number to computerboard array
							{
								*(arrPtr[number - 1]) = number; //add to array placement which is  22- 1 = 21 will be placed
								compStack.push(number); //add to stack
								placementsucessful++;
							}
						}

					}
				}
				if (placementsucessful != pegs)
				{
					//cout << "ERROR: Cannot place boat there, Please choose again.\n";
					for (int count = 0; count < placementsucessful; placementsucessful--)
					{
						//cout << "it got this far 1\n" << endl;
						while (!compStack.empty())
						{
							int stackSize = compStack.size();
							//cout << "it got this far 2\n" << "myStack.size() " << compStack.size() << endl;
							for (int i = 0; i < NUM_SPOT; i++)
							{
								if (compStack.empty())
								{
									//cout << "it got this far 6 compstack = empty \n" << endl;
									break;
								}
								//cout << "it got this far 3\n" << endl;
								if (*(arrPtr[i]) == compStack.top())
								{
								//	cout << "it got this far 4\n" << endl;
									*(arrPtr[i]) = 0;
								//	cout << "myStack.top() " << compStack.top() << endl;
									compStack.pop();
									break;
								}
							}
							if (compStack.empty()) {
								break;
							}
						}
					}
					//cout << "it got this far 5\n" << endl;
					//for (int id = 0; id < NUM_SPOT; id++) //check
					//{
					//	cout << "array after placements are cleared: " << *(arrPtr[id]) << endl;
					//}
					computerboat(arrPtr, NUM_SPOT, pegs); //error and recursively draw function
					return;
				}
			}
		}
	}
	// Define an array of ranges for vertical
	const int NUM_RANGES2 = 10;
	int ranges2[NUM_RANGES2][10] = {
	{1, 11, 21, 31, 41, 51, 61, 71, 81, 91},
	{2, 12, 22, 32, 42, 52, 62, 72, 82, 92},
	{3, 13, 23, 33, 43, 53, 63, 73, 83, 93},
	{4, 14, 24, 34, 44, 54, 64, 74, 84, 94},
	{5, 15, 25, 35, 45, 55, 65, 75, 85, 95},
	{6, 16, 26, 36, 46, 56, 66, 76, 86, 96},
	{7, 17, 27, 37, 47, 57, 67, 77, 87, 97},
	{8, 18, 28, 38, 48, 58, 68, 78, 88, 98},
	{9, 19, 29, 39, 49, 59, 69, 79, 89, 99},
	{10, 20, 30, 40, 50, 60, 70, 80, 90, 100},
	};
	if (direction == 2) //if direction is vertical
	{
		int down = (pegs - placementsucessful); //to keep peg amount 1 peg already made in humanboard array
		int rowIndex = -1;
		int rangeStart2, rangeEnd2;
		for (int i = 0; i < NUM_RANGES2; i++)
		{ // Iterate over the ranges
			int rangeStart2 = ranges2[i][0];
			int rangeEnd2 = ranges2[i][9];
			if (number >= rangeStart2 && number <= rangeEnd2)
			{ // Check if placement is within one of the ranges
				rowIndex = i;
				break;
			}
		}
		bool compare = true;
		bool firsttry = true;
		for (int count = 0; count < down; down--)
		{
			number += 10;
			compare = true;

			for (int id = 0; id < NUM_SPOT; id++) 
			{
				if (number == *(arrPtr[id]))//if placment value is the same as any number in the main humanboard array
				{
					compare = false;
					stop++; ////add 1 to stop so the if statement will not work
				}
			}
			if (number >= ranges2[rowIndex][0] && number <= ranges2[rowIndex][9] && stop == 0 && rowIndex != -1)
			{
				*(arrPtr[number - 1]) = number;
				compStack.push(number);
				placementsucessful++;
			}
		}
		if (placementsucessful != pegs && rowIndex != -1) //if payment successful does not equal pegs then set up side up
		{
			down = (pegs - placementsucessful);
			number = startvalue; //set placment back to startvalue
			while (down != 0)
			{
				for (int count = 0; count < down; down--) //if chosen in B5 that = 15 and PT has 2 pegs. I already added 15 to the humanboard array
				{                                                //so I need pegs - 10 = so there is 1 more peg left to place 
					number -= 10; //count down on placment if its 100 you want to subtract 10 to gett 90// we are starting with open spots to the left so 2 is what we are placing
					compare = true; //compare is true	
					for (int id = 0; id < NUM_SPOT; id++)
					{
						if (number == *(arrPtr[id]))
						{ //if placment value is the same as any number in the main humanboard array
							compare = false; //make it false
							stop++; //add 1 to stop so the if statement will not work
						}
					}
					if (number >= ranges2[rowIndex][0] && number <= ranges2[rowIndex][9] && stop == 0 && rowIndex != -1)
					{
						*(arrPtr[number - 1]) = number;
						compStack.push(number);
						placementsucessful++;
					}
				}
			}
		}
		if (placementsucessful != pegs)
		{
			//cout << "ERROR: Cannot place boat there, Please choose again.\n";
			for (int count = 0; count < placementsucessful; placementsucessful--)
			{
				//cout << "it got this far 1\n" << endl;
				while (!compStack.empty())
				{
					int stackSize = compStack.size();
					//cout << "it got this far 2\n" << "compStack.size() " << compStack.size() << endl;
					for (int i = 0; i < NUM_SPOT; i++)
					{
						if (compStack.empty()) 
						{
							//cout << "it got this far 6 compstack = empty \n" << endl;
							break;
						}
						//cout << "it got this far 3\n" << endl;
						if (*(arrPtr[i]) == compStack.top())
						{
							//cout << "it got this far 4\n" << endl;
							*(arrPtr[i]) = 0;
							//cout << "compStack.top() " << compStack.top() << endl;
							compStack.pop();
							break;
						}
					}
					if (compStack.empty()) {
						break;
					}
				}
			}
			//cout << "it got this far 5\n" << endl;
			//for (int id = 0; id < NUM_SPOT; id++) //check
			//{
			//	cout << "array after placements are cleared: " << *(arrPtr[id]) << endl;
			//}
			computerboat(arrPtr, NUM_SPOT, pegs); //error and recursively draw function
			return;
		}
	}
	//reset stack
	while (!compStack.empty())
	{
		int stackSize = compStack.size();
		for (int i = 0; i < stackSize; i++)
		{
			compStack.pop();

		}
		if (compStack.empty()) {
			break;
		}

	}
	cout << endl;
}


void boat(int* arrPtr [], int NUM_SPOT, int pegs)
{
	stack <int> myStack;
	int row;
	int* ptr = nullptr;
	string col;
	string vertical;

	bool spot = true;
	int placement = 0;
	do
	{
		cout << "\nColumn:  ";
		cin >> col;
		cout << "Row:  ";
		cin >> row;
		// check if input for row is valid
		while (cin.fail() || row < 1 || row > 10) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a number between 1 and 10." << endl;
			cin >> row;
		}
		placement = setColumn(col, row);
		//cout << "col " << col << " colu " << placement << endl;
		if (*(arrPtr[placement - 1]) == 0) // check if position is available
		{
			*(arrPtr[placement - 1]) = placement;
			cout << *(arrPtr[placement - 1]) << endl;
			spot = false; // set spot to false if position is available
		}
		else
		{
			cout << "That spot is already taken on the board. Choose new position:\n";
		}
	} while (spot == true);



	myStack.push(placement);
	cout << endl;
	bool dir = true;
	cout << "Direction:  ";
	cin >> vertical;
	while (vertical != "V" && vertical != "v" && vertical != "H" && vertical != "h")
	{
		cout << "Enter either V or H:  \n";
		cin >> vertical;
	}
	if (vertical == "h" || vertical == "H") //horizonal h = true
	{
		dir = true;
	}
	else //if (vertical == "h" || vertical == "H")
	{
		dir = false;
	}
	// Define an array of ranges for horizontal
	const int NUM_RANGES = 10;
	int ranges[NUM_RANGES][2] = {
		{1, 10},
		{11, 20},
		{21, 30},
		{31, 40},
		{41, 50},
		{51, 60},
		{61, 70},
		{71, 80},
		{81, 90},
		{91, 100},
	};
	int stop = 0;         //to stop if numbers are in array
	int startvalue = placement; // to keep chosen value
	int placementsucessful = 1; //1 placment already made in humanboard array
	if (dir == true) //if direction is horizontal
	{
		int left = (pegs - placementsucessful); //to keep peg amount 1 peg already made in humanboard array
		// Iterate over the ranges
		for (int i = 0; i < NUM_RANGES; i++)
		{
			int rangeStart = ranges[i][0];
			int rangeEnd = ranges[i][1];
			if (placement >= rangeStart && placement <= rangeEnd) 	// Check if placement is within current range
			{
				//cout << "confirm boat function range: " << rangeStart << "-" << rangeEnd << endl;//check

				bool compare = true;

				//cout << "left side initiated: " << endl;// Take pegs going to the left
				//cout << "pegs available: " << left << endl;
				for (int count = 0; count < left; left--) //if chosen in B3 that = 22 and PT has 2 pegs. I already added 22 to the humanboard array
				{                                                //so I need pegs - 1 = so there is 1 more peg left to place
					placement--; //count down 1 on placment           // we are starting with open spots to the left so 21 is what we are placing
					compare = true; //compare is true
					for (int id = 0; id < NUM_SPOT; id++) {
						//cout << "*(arrPtr[id] left side: " << *(arrPtr[id]) << endl;
						if (placement == *(arrPtr[id])) 
						{ //if placment value is the same as any number in the main humanboard array
							compare = false; //make it false
							stop++; //add 1 to stop so the if statement will not work
							//cout << "pegs available after finding doubel placement on humanboard: " << left << endl;
						}
					}
					if (placement >= rangeStart && placement <= rangeEnd && stop == 0) //else you will add the number to humanboard array
					{
						*(arrPtr[placement - 1]) = placement; //add to array placement which is  22- 1 = 21 will be placed
						myStack.push(placement); //add to stack
						//cout << "placement" << *(arrPtr[placement]) << endl;
						placementsucessful++;
						//cout << "pegs available after successful placment of peg: " << left << endl;

					}

					
				}		
				//for (int id = 0; id < NUM_SPOT; id++) //check  
				//{
				//	cout << "*(arrPtr[id] left side completed: " << *(arrPtr[id]) << endl;

///}

				if (placementsucessful != pegs) //if payment successful does not equal pegs then set left back up for right side.
				{
					left = (pegs - placementsucessful);

					//cout << "right side initiated: " << endl;
					//cout << "startvalue: " << startvalue << " placement: " << placement << endl;//check
					placement = startvalue; //set placment back to startvalue
					//cout << "startvalue back to placement: " << startvalue << " placement: " << placement << endl;//check
					//cout << "pegs available start right: " << left << endl;
					while (left != 0)
					{
						for (int count = 0; count < left; left--) //if chosen in A1 that = 1 and PT has 2 pegs. I already added 1 to the humanboard array
						{                                                //so I need pegs - 1 = so there is 1 more peg left to place //left side failed due to their being no A0.

							placement++; //count up on placment           // we are starting with open spots to the left so 2 is what we are placing
							compare = true; //compare is true	
							for (int id = 0; id < NUM_SPOT; id++) {
								//cout << "*(arrPtr[id] right side: " << *(arrPtr[id]) << endl;
								if (placement == *(arrPtr[id])) { //if placment value is the same as any number in the main humanboard array
									compare = false; //make it false
									stop++; //add 1 to stop so the if statement will not work
									//cout << "pegs available after finding same placment on humanboard right side: " << left << endl;
									//cout << "placement successful: " << placementsucessful << endl;


								}
							}
							if (placement >= rangeStart && placement <= rangeEnd && compare != false) //else you will add the number to humanboard array
							{
								*(arrPtr[placement - 1]) = placement; //add to array placement which is  22- 1 = 21 will be placed
								myStack.push(placement); //add to stack
								//cout << "placement" << *(arrPtr[placement]) << endl;
								placementsucessful++;
								//cout << "pegs available after successful placment of peg right side: " << left << endl;
								//cout << "placement successful: " << placementsucessful << endl;

							}
						}

					}
				}
				//check  
				//for (int id = 0; id < NUM_SPOT; id++)
				//{
				//  cout << "*(arrPtr[id] right side completed: " << *(arrPtr[id]) << endl;
				//}
				if (placementsucessful != pegs)
				{
					cout << "ERROR: Cannot place boat there, Please choose again.\n";
					for (int count = 0; count < placementsucessful; placementsucessful--)
					{
						//cout << "it got this far 1\n" << endl;
						while (!myStack.empty())
						{
							int stackSize = myStack.size();
							//cout << "it got this far 2\n" << "myStack.size() " << myStack.size() << endl;
							for (int i = 0; i < NUM_SPOT; i++)
							{
								if (myStack.empty())
								{
								//	cout << "it got this far 6 myStack = empty \n" << endl;
									break;
								}
								//cout << "it got this far 3\n" << endl;
								if (*(arrPtr[i]) == myStack.top())
								{
								//	cout << "it got this far 4\n" << endl;
									*(arrPtr[i]) = 0;
								//	cout << "myStack.top() " << myStack.top() << endl;
									myStack.pop();
								}
							}
							if (myStack.empty()) {
								break;
							}
						}
					}
					//cout << "it got this far 5\n" << endl;
					//for (int id = 0; id < NUM_SPOT; id++) //check
					//{
					//	cout << "array after placements are cleared: " << *(arrPtr[id]) << endl;
					//}
					boat(arrPtr, NUM_SPOT, pegs); //error and recursively draw function
					return;
				}
			}
		}
	}
	// Define an array of ranges for vertical
	const int NUM_RANGES2 = 10;
	int ranges2[NUM_RANGES2][10] = {
	{1, 11, 21, 31, 41, 51, 61, 71, 81, 91},
	{2, 12, 22, 32, 42, 52, 62, 72, 82, 92},
	{3, 13, 23, 33, 43, 53, 63, 73, 83, 93},
	{4, 14, 24, 34, 44, 54, 64, 74, 84, 94},
	{5, 15, 25, 35, 45, 55, 65, 75, 85, 95},
	{6, 16, 26, 36, 46, 56, 66, 76, 86, 96},
	{7, 17, 27, 37, 47, 57, 67, 77, 87, 97},
	{8, 18, 28, 38, 48, 58, 68, 78, 88, 98},
	{9, 19, 29, 39, 49, 59, 69, 79, 89, 99},
	{10, 20, 30, 40, 50, 60, 70, 80, 90, 100},
	};
	/*	int stop = 0;         //to stop if numbers are in array
	int startvalue = placement; // to keep chosen value
	int placementsucessful = 1; //1 placment already made in humanboard array*/

	if (dir == false) //if direction is vertical
	{
		    int down = (pegs - placementsucessful); //to keep peg amount 1 peg already made in humanboard array
			int rowIndex = -1;
			int rangeStart2, rangeEnd2;
			for (int i = 0; i < NUM_RANGES2; i++) 
			{ // Iterate over the ranges
				int rangeStart2 = ranges2[i][0];
				int rangeEnd2 = ranges2[i][9];
				if (placement >= rangeStart2 && placement <= rangeEnd2) 
				{ // Check if placement is within one of the ranges
					rowIndex = i;
					break;
				}
			}

			//if (rowIndex != -1) {
				// Print out the range that placement falls into
				//cout << "confirm boat function range: " << ranges2[rowIndex][0] << "-" << ranges2[rowIndex][9] << endl;

				// Print out the entire row
		//		for (int j = 0; j < 10; j++) 
		//		{
		//			cout << ranges2[rowIndex][j] << " ";
		//		}
		//		cout << endl;
		//	}

				bool compare = true;

		//		cout << "down side initiated: " << endl;
		//		cout << "pegs available: " << down << endl;
						
				for (int count = 0; count < down; down--) 
				{                                               
					placement += 10;          
					compare = true; 

					for (int id = 0; id < NUM_SPOT; id++) {
			//			cout << "*(arrPtr[id] down side: " << *(arrPtr[id]) << endl;
						if (placement == *(arrPtr[id]))//if placment value is the same as any number in the main humanboard array
						{ 
							compare = false; 
							stop++; ////add 1 to stop so the if statement will not work
						//	cout << "pegs available after finding doubel placement on humanboard: " << down << endl;
						}
					}

					if (placement >= ranges2[rowIndex][0] && placement <= ranges2[rowIndex][9] && compare != false && rowIndex != -1)
					{
						*(arrPtr[placement - 1]) = placement; 
						myStack.push(placement); 
					//	cout << "placement" << *(arrPtr[placement]) << endl;
						placementsucessful++;
					//	cout << "pegs available after successful placment of peg: " << down << endl;

					}


				}
				//for (int id = 0; id < NUM_SPOT; id++)  
				//{
				//	cout << "*(arrPtr[id] down dir completed: " << *(arrPtr[id]) << endl;


				//}

				if (placementsucessful != pegs && rowIndex != -1) //if payment successful does not equal pegs then set up side up
				{
					down = (pegs - placementsucessful);

				//	cout << "up side initiated: " << endl;
				//	cout << "startvalue: " << startvalue << " placement: " << placement << endl;//check
					placement = startvalue; //set placment back to startvalue
				//	cout << "startvalue back to placement: " << startvalue << " placement: " << placement << endl;//check
				//	cout << "pegs available start right: " << down << endl;
					while (down != 0)
					{
						for (int count = 0; count < down; down--) //if chosen in B5 that = 15 and PT has 2 pegs. I already added 15 to the humanboard array
						{                                                //so I need pegs - 10 = so there is 1 more peg left to place 

							placement -= 10; //count down on placment if its 100 you want to subtract 10 to gett 90// we are starting with open spots to the left so 2 is what we are placing
							compare = true; //compare is true	
							for (int id = 0; id < NUM_SPOT; id++) 
							{
								//cout << "*(arrPtr[id] right side: " << *(arrPtr[id]) << endl;
								if (placement == *(arrPtr[id])) 
								{ //if placment value is the same as any number in the main humanboard array
									compare = false; //make it false
									stop++; //add 1 to stop so the if statement will not work
								//	cout << "pegs available after finding same placment on humanboard up side: " << down << endl;


								}
							}
							if (placement >= ranges2[rowIndex][0] && placement <= ranges2[rowIndex][9] && compare != false && rowIndex != -1)
							{
								*(arrPtr[placement - 1]) = placement;
								myStack.push(placement);
							//	cout << "placement" << *(arrPtr[placement]) << endl;
								placementsucessful++;
							//	cout << "pegs available after successful placment of peg: " << down << endl;

							}
						}

					}
				}
				//check  
			//	for (int id = 0; id < NUM_SPOT; id++)
				//{
			//		cout << "*(arrPtr[id] up side completed: " << *(arrPtr[id]) << endl;
			//	}
				if (placementsucessful != pegs)
				{
					cout << "ERROR: Cannot place boat there, Please choose again.\n";
					for (int count = 0; count < placementsucessful; placementsucessful--)
					{
						//cout << "it got this far 1\n" << endl;
						while (!myStack.empty())
						{
							int stackSize = myStack.size();
							//cout << "it got this far 2\n" << "myStack.size() " << myStack.size() << endl;
							for (int i = 0; i < NUM_SPOT; i++)
							{
								if (myStack.empty())
								{
									//cout << "it got this far 6 myStack = empty \n" << endl;
									break;
								}
								//cout << "it got this far 3\n" << endl;
								if (*(arrPtr[i]) == myStack.top())
								{
									//cout << "it got this far 4\n" << endl;
									*(arrPtr[i]) = 0;
									cout << "myStack.top() " << myStack.top() << endl;
									myStack.pop();
								}
							}
							if (myStack.empty()) {
								break;
							}
						}
					}
					//cout << "it got this far 5\n" << endl;
					//for (int id = 0; id < NUM_SPOT; id++) //check
					//{
					//	cout << "array after placements are cleared: " << *(arrPtr[id]) << endl;
					//}
					boat(arrPtr, NUM_SPOT, pegs); //error and recursively draw function
					return;
				}
		
	}
	//reset stack
	while (!myStack.empty())
	{
		int stackSize = myStack.size();
		for (int i = 0; i < stackSize; i++)
		{
			myStack.pop();

		}
		if (myStack.empty()) {
			break;
		}

	}
				
	cout << endl;
}


//convert letter into a number; includes validation.
int setColumn(string col, int row)
{
	{

		string validation = col;
		string val[10] = { "A","B","C","D","E","F","G","H","I","J" };

		int start = 0;
		int aThroughJ = 0;
		//validate for loop

		do {
			for (start = 0; start < 10; start++)
			{

				// if col is not A then add to athroughj
				if (validation != val[start])
				{
					aThroughJ++;
				}
				else
				{
					break;
				}

			}
			if (aThroughJ == 10 || validation.length() != 1 || !(validation[0] >= 'A' && validation[0] <= 'J'))
			{
				cout << "Enter a letter A through J:  ";
				cin >> validation;
				cout << endl;
				aThroughJ = 0;
			}
			else
			{
				break;
			}
		} while (aThroughJ == 0);

		int index = 0;
		int keepTrack = 0;
		for (index = 0; index < 10; index++)
		{


			if (validation != val[index]) {
				keepTrack++;
			}
			else
			{
				keepTrack++;
				break;
			}

		}

		int place = 0;
		int columnnumber = keepTrack;
		place = ((row * 10) - 10) + columnnumber;
		return place;


		//reset
		start = 0;
		aThroughJ = 0;
		index = 0;
		keepTrack = 0;

	}


}





//INPUT VALIDATION: Do not accept negative numbers for the test scores.
bool inputverification(int& ptr)
{
	if (ptr < 1 && ptr > 10)
	{
		cout << "Invalid row. Please enter a number between 1 and 10.\n";
		return false;
	}
	else
		return true;
}

//INPUT VALIDATION: Do not accept any numbers besides 1 & 4
bool inputverificationchoice (int ptr)
{
	if (ptr == 1 || ptr == 4)
	{
		
		return true;
	}
	else
	{
		cout << "Invalid choice. Please enter either 1 or 4.\n";
		return false;
	}
}

// Selection sort on the array of pointers
void arrSelectSort(int* arr[], int size)
{
	int startScan, minIndex;
	int* minElem;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minElem = arr[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (*(arr[index]) < *minElem)
			{
				minElem = arr[index];
				minIndex = index;
			}
		} // end inner for loop

		arr[minIndex] = arr[startScan];
		arr[startScan] = minElem;

	} // end for loop
}



// display contents of donations[]
void showArray(const int arr[], int size)
{
	for (int count = 0; count < size; count++)
	{
		cout << arr[count] << " ";
	}
	cout << endl;
}

// display contents of *arrPtr[]
void showArrPtr(int* arr[], int size)
{
	for (int count = 0; count < size; count++)
	{
		cout << *(arr[count]) << " ";
	}
	cout << endl;
}


//sort in desending order
// Selection sort on the array of pointers
void arrSelectSortDescending(int* arr[], int size)
{
	int startScan, minIndex;
	int* minElem;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minElem = arr[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (*(arr[index]) > *minElem)
			{
				minElem = arr[index];
				minIndex = index;
			}
		} // end inner for loop

		arr[minIndex] = arr[startScan];
		arr[startScan] = minElem;

	} // end for loop
}
