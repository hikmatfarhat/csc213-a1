// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Room.h"
void print(Room & r) {
	std::cout << r.print() << std::endl;
}




int main()
{
	Classroom s108("S108", 108, "FNAS", 40);
	Office s311("S311", 311, "FNAS", "Hikmat Farhat");
	std::cout<<s108.print()<<std::endl;
        std::cout<<s311.print()<<std::endl; 
	print(s108);
	print(s311);
}
