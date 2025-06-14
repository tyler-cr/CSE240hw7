/* *
* CSE240 HW 7: noble cpp class file. Creating a display function for the class
*
* Completion time : 7
*
* @author Tyler Crimando
* @version 6/12/25
* @ide G++
*
*/

// Q2b: Define displayRoom() for Noble class (5 points)
// Define the function displayRoom() that you declared within the Noble class in the header file
// See expected output in question file.

// (displayList() function in the hw7.cpp should call this function.)
// Include necessary header files


#include "room.h"
#include "noble.h"

#include <iostream>

void Noble::displayRoom()
{
	cout << "Room name: " << getName() << endl;
	cout << "Number of rooms: " << getNo() << endl;
	cout << "Library: " << getLibraryStr(getLibraryType()) << endl;
}
