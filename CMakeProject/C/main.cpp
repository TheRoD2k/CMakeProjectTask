#include "main.h"
#include <iostream>

int main() {
	int input= 5;
	std::cout << "Is my int, which is currently " << input << ", equale to 5?" << std::endl;
	if (CheckIf5(input))
        std::cout << "YES!" << std::endl;
    else
        std::cout << "NO!" << std::endl;
	return 0;
}
