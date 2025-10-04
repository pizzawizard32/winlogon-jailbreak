#include <cstdlib>
#include <iostream>
#include <string>

int main() {
	system("title Winlogon Jailbreak");
	std::cout << "Hello! Please select one of these options:\n\n[1] snipping tool\n[2] command prompt\n[3] control panel\n[4] on-screen keyboard\n[5] notepad\n[6] calculator\n[7] magnifier\n[8] narrator\n[9] paint\n[10] taskmgr\n\nEnter your choice: ";
	int option;
	std::cin >> option;

	if (option == 1) {
		system("start snippingtool");
	} else if (option == 2) {
		system("start cmd");
	} else if (option == 3) {
		system("start control");
	} else if (option == 4) {
		system("start osk");
	} else if (option == 5) {
		system("start notepad");
	} else if (option == 6) {
		system("start calc");
	} else if (option == 7) {
		system("start magnify");
	} else if (option == 8) {
		system("start narrator");
	} else if (option == 9) {
		system("start mspaint");
	} else if (option == 10) {
		system("start taskmgr");
	}

	system("cls");
	system("logonjailbreak");

	return 0;
}