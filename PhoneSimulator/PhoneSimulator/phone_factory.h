#pragma once
#include"phone.h"
#include"huawei.h"
#include"smart_phone.h"
class PhoneFactory {
public:
	Phone* createPhone() {
		Phone* phone = new SmartPhone();
		return phone;
	}

};