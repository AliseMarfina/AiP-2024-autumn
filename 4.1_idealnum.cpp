#include <iostream>
int main()
{
int a;
int q;
int ideal_sum = 0;
std::cin >> a;
if (a<=0)
{
std::cout <<"ERROR:not a natural number";
return 0;
}
for (q = 1; q<a; q++)
{
if (a % q == 0)
{
ideal_sum = ideal_sum+q;
}
}
if (a == ideal_sum)
{
std::cout <<"TRUE";
return 0;
}
else
{
std::cout << "FALSE";
}
}