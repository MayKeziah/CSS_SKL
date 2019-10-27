#include <iostream>

int main(){

	std::cout << "Hello, World!\n";
	
	#ifdef DEBUG
		std::cout << "Goodbye, World!\n";
	#endif

	return 0;
}
