#include "classes.h"


bool Day(int current_hour) {
	if(current_hour >= 8 && current_hour <= 18) {
		return true;
	}
	return false;
}


int main() {
	int current_hour = 7;
	bool day = Day(current_hour);
	Sun sun;
	Air air(11);
	Tree tree;
	Grass grass(10);
	Frog frog("Froggy");
	sun.shining(day);
	tree.photosynthesis(day, air);
	grass.grow(day);
	grass.no_air(air);
	frog.sleep(day);
	frog.move(day);
	frog.eat(grass, day);
	frog.breath(air, day);
	//here may or may not be explicitely written dtors
}
