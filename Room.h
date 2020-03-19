#pragma once
#include <string>
#include <iostream>

/* Objectives:
1) initialization of member variables
2) inheritance
*/

/* this class is used only in objective 1
once you finish that just remove it or comment it out
*/
class Test {
	std::string t;
public:
	Test(std::string s) {
		t = s;
	}
	/* default constructor
	comment/uncomment to see the difference
	*/
    Test() {}
};

class Room {
protected:
	/* variable x of type Test  is included just to illustrate how
	member variables are initialized. Afer you have finished
	that part just remove it
	*/
	Test x;
	/* name of the room */
	std::string name;
	int id;
	/* bldg where the room is */
	std::string bldg;
public:
	Room(std::string n, int i, std::string b):name(n),id(i),bldg(b){
	}
	virtual std::string print() const {
		return bldg + " " + name;
	}
	/* when we write the above code for the constructor, in reality
	the compiler will see the code below, i.e. for every member variable
	it calls the default constructor, unless we explicitly call the constructor
	*/
	/*Room(std::string n, int i, std::string b):x(),name(),id(),bldg() {
		name = "some room";
	}*/
	/* explicitly initializing the member variables */
	/* Room(std::string n, int i, std::string b) :x(b), name(n), id(i), bldg(b) {
	name is initialized to n THEN it is set to some room
	name="some room"
	}
	*/
};
// so we have 
// class of type Room has members
// variable: name-> string
// variable: id ->int 
// variable: bldg-> string
// you have to add
// function:print ->   bldg name . Example  name=311, Bld=FNAS,   output FNAS 311


// you have to add
// Classrom inherits from Room
//in addition has members:
// variable: capacity -> int
// function: print -> bldg name-capacity. Example name=108, Bldg=FNAS, capacity=30, output FNAS 108-30


// you have to add
//Office inherits from Room
//in addition has members:
//variable: occupant-> string
//function: print -> bldg name-occupant. Example name=311, Bldg=FNAS, occupant=hikmat, output FNAS 311-hikmat
