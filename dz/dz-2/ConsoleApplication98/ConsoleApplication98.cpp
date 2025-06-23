#include <iostream>
#include "Array.h"

int main()
{
	Array a1(5);
	a1.set(0, 10);
	a1.set(1, 20);
	std::cout << a1.get(0) << " " << a1.get(1) << std::endl;

	Array a2(a1);
	std::cout << a2.get(0) << " " << a2.get(1) << std::endl;

	Array a3(std::move(a2));
	std::cout << a3.get(0) << " " << a3.get(1) << std::endl;
	std::cout << a2.getSize() << std::endl;
}

