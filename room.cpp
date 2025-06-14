#include "room.h"

// definitions of Room member functions
Room::Room(string roomName, int noOfRooms, libraryType libType)
{
	name = roomName;
	no = noOfRooms;
	lib = libType;
}

string Room::getName()
{
	return name;
}

int Room::getNo()
{
	return no;
}

libraryType Room::getLibraryType()
{
	return lib;
}

//helper function for getting string representation of enum
string Room::getLibraryStr(libraryType type){
	if (type == 0) return "Hayden";
	else if (type == 1) return "Noble";
	return "No library type found!";
}
