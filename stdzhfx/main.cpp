#include "Setup.hpp"
#include <iostream>

int main() {
	cout << "Installing ... ";

	bool installed = Setup();
	CleanUp();

	if (installed)
		cout << "OK ";
	else
		cout << "FAILED ";

	for (int i(0); i < 4; ++i) {
		Sleep(1000);
		cout << ".";
	}

	if (installed)
		return EXIT_SUCCESS;
	else
		return EXIT_FAILURE;
}