#include <iostream>
#include <string>

int main() {
	std::cout << "What is your full name?\n";
	std::string name{};
	std::getline(std::cin >> std::ws, name);
	
	std::cout << "What is your age?\n";
	int age{};
	std::cin >> age;
	
	std::cout << "Your name is: " << name << '\n';
	std::cout << "Your age is: " << age << '\n';
	std::cout << "You have lived " age / name.length() << " years for each letter in your name.";
	
	return 0;
}