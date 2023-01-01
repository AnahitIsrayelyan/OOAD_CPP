#include <iostream>

class Sun {
public:
	bool shining(bool day) {
		if(day) {
			std::cout << "The sun is shining" << std::endl;
			return true;
		}
		return false;
	}
};


class Air {
public:
	int volume;
	Air(int volume = 10) {
		this->volume = volume;
	}
};


class Tree {
public:
	void photosynthesis(bool day, Air air) {
		if(day) {
			air.volume += 10;
			std::cout << "Photosynthesis in process." << std::endl;
		}
	}
};


class Grass {
public:
	int grass;
	Grass(int val) {
		grass = val;
	}
	void grow(bool day) {
		if(day) {
			grass += 10;
			std::cout << "The grass is growing." << std::endl;
		}
	}
	void no_air(Air air) {
		if(air.volume <= 0) {
			grass = 0;
			std::cout << "There is no grass" << std::endl;
		}
	}
};


class Frog {
public:
	std::string name;
	Frog(std::string name) {
		this->name = name;
	}
	int stomach = 0;
	void move(bool day) {
		if(day) {
			std::cout << name << " is walking." << std::endl;
		}
	}
	void sleep(bool day) {
		if(day) {
			std::cout << name << " is awake." << std::endl;
		}
		std::cout << "Zzz...don't disturb." << std::endl;
	}
	void eat(Grass grass, bool day) {
		if(stomach > 100) {
			std::cout << name << " is not hungry.";
		}
		if(day) {
			std::cout << name << " is eating grass." << std::endl;
			grass.grass -= 10;
			stomach += 10;
		}
	}
	void breath(Air air, bool day) {
		if(day) {
			if(air.volume >= 10) {
				std::cout << name << " is breathing." << std::endl;
				air.volume -= 15;
			} else {
				std::cout << "There is no air." << name << " died." << std::endl;
				exit(0);
			}
		} else {
			std::cout << "Don't breath" << std::endl;
		}
	}
};
