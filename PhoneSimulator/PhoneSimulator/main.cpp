#include"phone_factory.h"

int main(int argc, const char * argv[]) {
	PhoneFactory* phoneFactory = new PhoneFactory();
	Phone* phone = phoneFactory->createPhone();
	phone->powerOn();
	system("pause");
}