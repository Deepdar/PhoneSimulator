#include"phone_factory.h"

int main(int argc, const char * argv[]) {
	PhoneFactory* phoneFactory = PhoneFactory::getInstance();
	Phone* phone = phoneFactory->createPhone();
	phone->powerOn();
	system("pause");
}