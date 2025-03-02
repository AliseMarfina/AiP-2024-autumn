#include <iostream>
#include <algorithm>
int main()
{
int x;
int y;
std::cin >> x >> y;
	if (x > 0 && y > 0) {
	std::cout << "1";
	} else if ( x < 0 && y > 0) {
	  std::cout << "2";
	} else if ( x < 0 && y < 0) {
	  std::cout << "3";
	} else if ( x > 0 && y < 0) {
	  std::cout << "4";
	} else if (x == 0 && y == 0) {
	  std::cout << "1, 2, 3, 4";
	} else if (x == 0 && y > 0) {
	  std::cout <<  "1, 2";
	} else if (x == 0 && y < 0) {
	  std::cout << "3, 4";
	} else if (x > 0 && y == 0) {
	  std::cout << "1, 4";
	} else if (x < 0 && y == 0) {
	  std::cout << "2, 3";
	}
return 0;
}
