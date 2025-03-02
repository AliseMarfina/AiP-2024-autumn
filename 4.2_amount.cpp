#include <iostream>
unsigned form(unsigned number)
{
int counter = 0;
while (number !=0)
{
if (number % 2 == 1)
{
counter++;
}
number = number/2;
}
return counter;
}
int main()
{
unsigned q;
std::cin >> q;
if (!std::cin)
{
std::cout << "Error";
return 0;
}
std::cout << form(q);
}