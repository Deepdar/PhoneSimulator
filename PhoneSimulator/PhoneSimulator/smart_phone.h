#pragma once
#include"phone.h"
#include"os.h"
class SmartPhone :public Phone {
	Os* pOs;
public:	
	SmartPhone() :pOs(NULL) {

	}

	void setOs(Os* os) {
		pOs = os;
	}
	void powerOn() {
		cout << "smartphone power on" << endl;
		pOs->startUp();
	}
};