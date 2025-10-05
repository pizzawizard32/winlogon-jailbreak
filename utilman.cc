#include <cstdlib>
#include <iostream>
#include <string>

int main() {
	std::string password = "mypassword"; // replace mypassword to your password
	std::string passinput;

	if (passinput == password)
		system("logonjailbreak");
	else
		std::cout << "incorrect password";

	return 0;
}