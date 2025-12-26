#include <iostream>
#include "operMath.h"

int main(){
	float a = 3.0f;
	float b = 7.0f; 

	std::cout << "resultados\n";
	std::cout << "soma: " << soma(a,b) << std::endl;
	std::cout << "subt: " << subt(a,b) << std::endl;
	std::cout << "mult: " << mult(a,b) << std::endl;

	if(b == 0){
		std::cout << "infinity...\n";
	} else {
		std::cout << "divs: " << divs(a,b) << std::endl;
	}

	return 0;
}