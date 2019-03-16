#pragma once
#include "phone.h"
#include<iostream>
using namespace std;
class Phone {
public:
	virtual void powerOn() {
		cout << "power on" << endl;
	}
	void powerOff() {
		cout << "power off" << endl;
	}
	void call() {
		cout << "call" << endl;
	}
	void recieve() {
		cout << "recieve" << endl;
	}
};

