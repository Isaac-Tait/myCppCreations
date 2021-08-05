#include <iostream>
#include <string>

int main() {
	std::cout << "What is your full name?\n";
	std::string name{};
	std::getline(std::cin >> std::ws, name);
	
	std::cout << "What is your age?\n";
	int age{};
	std::cin >> age;
	
	//My stab at the logic...
	std::cout << "Your name is: " << name << '\n';
	std::cout << "Your age is: " << age << '\n';
	std::cout << "You have lived " << age / name.length() << " years for each letter in your name.";
	//The solution 
	int letters{ static_cast<int>(name.length()) }; // get number of letters in name (including spaces)
    double agePerLetter{ static_cast<double>(age) / letters }; // static cast age to double to avoid integer division
    std::cout << "You've lived " << agePerLetter << " years for each letter in your name.\n";
    
	return 0;
}