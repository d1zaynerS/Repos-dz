#include <iostream>
#include "String.h"

int main()
{
	String string("Hello world");
	std::cout << string.getStr() << std::endl;

	String str2(string);
	std::cout << str2.getStr() << std::endl;

	String str3(std::move(str2));
	std::cout << str2.getLength() << std::endl;
	std::cout << str3.getStr() << std::endl;

	String str4(String("Hello C++"));
	std::cout << str4.getStr() << std::endl;

	String str5;
	str5 = str4;
	std::cout << str5.getStr() << std::endl;

	String str6;
	str6 = std::move(str5);
	std::cout << str5.getLength() << std::endl;
	std::cout << str6.getStr() << std::endl;
}

