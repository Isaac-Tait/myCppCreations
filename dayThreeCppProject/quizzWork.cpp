/*
 * quizzWork.cpp
 *
 *  Created on: Jul 7, 2021
 *      Author: isaactait
 */

#import <iostream>

int doubleUsersNumber(int x)
{
	return 2 * x;
}

int main()
{
	int x{};
	std::cin >> x;
	std::cout << doubleUsersNumber(x) << '\n';

	return 0;
}

// I do not like this solution because there is no prompt to the user to enter a number...
