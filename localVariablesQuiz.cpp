#include <iostream>

int source() {
	int smaller{};
	int larger{};
	
	std::cout << "Enter an integer " << smaller << '\n';
	std::cin >> smaller;
	std::cout << "Enter a larger integer " << larger << '\n';
	std::cin >> larger;
	
	if (smaller > larger ) {
		smaller == larger && larger == smaller;
	} else {
		smaller == smaller && larger == larger;
	}
	
	std::cout << "The smaller value is " << smaller << "and the larger value is " << larger << '\n';
}

//My attempt above is close but by swapping the values I lose smaller and both larger and smaller 
//would become the same number. A better solution would be to define larger as "temp" value as shown below

#include <iostream>
 
int main()
{
    std::cout << "Enter an integer: ";
    int smaller{};
    std::cin >> smaller;
 
    std::cout << "Enter a larger integer: ";
    int larger{};
    std::cin >> larger;
 
    // if user did it wrong
    if (smaller > larger)
    {
        // swap values of smaller and larger
        std::cout << "Swapping the values\n";
 
        int temp{ larger };
        larger = smaller;
        smaller = temp;
    } // temp dies here
 
    std::cout << "The smaller value is: " << smaller << '\n';
    std::cout << "The larger value is: " << larger << '\n';
 
    return 0;
} // smaller and larger die here