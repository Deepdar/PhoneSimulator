#pragma once
#include "phone.h"
#include "huawei.h"
#include "smart_phone.h"
#include "android.h"
class PhoneFactory {
private:
	PhoneFactory() {

	}
	PhoneFactory(const PhoneFactory& phoneFactory) {

	}
	static PhoneFactory* phoneFactory;
public:
	static PhoneFactory* getInstance() {
		return phoneFactory;
	}
	Phone* createPhone() {
		SmartPhone* phone = new SmartPhone();
		phone->setOs(new Android());
		return phone;
	}

};