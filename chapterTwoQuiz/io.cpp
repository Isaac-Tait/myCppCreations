/*
 * io.cpp
 *
 *  Created on: Jul 8, 2021
 *      Author: isaactait
 */

#import <iostream>

int readNumber()
{
	std::cout << "Please enter a number of your choice " << '\n';
	int x {};
	std::cin >> x;

	return x;
}

void writeAnswer(int x)
{
	std::cout << "The answer is " << x << '\n';
}
