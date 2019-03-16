#pragma once
#include<iostream>
class Os {
public:
	void startUp();
	void shutDown() {
		std::cout << "os shut down" << std::endl;
	}
};
