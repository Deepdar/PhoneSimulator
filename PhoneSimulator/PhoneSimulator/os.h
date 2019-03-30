#pragma once
#include<iostream>
class Os {
protected:
	std::string name;
public:
	Os(std::string name) :name(name) {

	}
	void startUp() {
		std::cout << "os start up,welcome" << name.data()<< std::endl;
	}
	void shutDown() {
		std::cout << "os shut down,goodbye" << name.data()<<std::endl;
	}
};
