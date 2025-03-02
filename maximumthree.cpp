#include <iostream>
#include <algorithm>
int main()
{
int a;
int b;
int c;
std::cout << "Enter three numbers ";
std::cin >> a >> b >> c;
        if (a>b && a>c) {
        std::cout << a;
        } else if (b>a && b>c) {
          std::cout << b;
        } else if (c>a && c>b) {
          std::cout << c;
	} else if (a==b && b==c) {
	  std::cout << a;
        } else {
          std::cout << "Error";
        }
return 0;
}

