/* *
* CSE240 HW 7: room header file. Friend functions
*
* Completion time : 7
*
* @author Tyler Crimando
* @version 6/12/25
* @ide G++
*
*/

#ifndef _ROOM_H_
#define _ROOM_H_

#include <string>
using namespace std;

enum libraryType { hayden = 0, noble };	// definition of libraryType

class Room {
private:
	string name; // private data members
	int no;
	libraryType lib;

public:
	Room(string roomName, int noOfRooms, libraryType libType); // constructor

	// accessor methods
	string getName();
	int getNo();
	libraryType getLibraryType();

	virtual void displayRoom()
	{}

	// Q3a: Declare Friend Function changeLibraryType()  (1 point)
	// Declare a friend function named changeLibraryType() which has 2 parameters and no return value.
	// The first parameter is a pointer to Room class, and the second is an integer which is the new Library type.
	// You need to define this function in hw7.cpp and call this function in case 'c' of executeAction() in hw7.cpp file
	friend void changeLibraryType(Room &curRoom, libraryType newLibrary);

	//helper function to get string representation of library
	string getLibraryStr(libraryType type);
	
};

#endif // _ROOM_H_
