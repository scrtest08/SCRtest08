#include <cassert>
#include <iostream>
#include "../inc/calc.hpp"

int main()
{
	Calculator calc;
	
	assert(calc.pow(3,4) == 81);
	assert(calc.fac(4) == 24);

	std::cout << "Kawal dobrego kodu!" << std::endl;
}
