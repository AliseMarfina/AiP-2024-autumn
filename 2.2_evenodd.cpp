#include <iostream>
#include <algorithm>
int main()
{
int a;
int b;
int c;
std::cout << "Enter three numbers ";
std::cin >> a >> b >> c;
	if ((a % 2 != 0) && ( b % 2 != 0) && (c % 2 !=0)) {
	  std::cout << "NO";
	} else if ((a % 2 == 0) && (b % 2 == 0) && (c % 2 == 0)) {
	  std::cout << "NO";
	} else {
	  std::cout << "YES";
	}
return 0;
}