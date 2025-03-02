#include <iostream>
#include <climits>
int main ()
{
int a;
double middle_aryth_of_all = 0;
double max = INT_MIN;
double min = INT_MAX;
double middle_positive_meaning = 0;
double counter = 0;
double sum = 0;
double counter_of_pos = 0;
double sum_of_pos = 0;
std::cin >>a;
if (a == 0)
{
std::cout <<"ERROR: Empty sequence"<< std::endl;
return 0;
}
while (a != 0)
{
if (a>0)
{
sum_of_pos += a;
counter_of_pos++;
if (a<min)
{
min = a;
}
}
if (a>max)
{
max = a;
}
sum += a;
counter++;
std::cin >> a;
}
if (sum_of_pos == 0)
{
middle_aryth_of_all += sum / counter;
std::cout << "Arithmetic mean of all numbers = "<< middle_aryth_of_all<<std::endl;
std::cout << "Maximum value = " << max << std::endl;
std::cout << "ERROR: Not positive numbers in the sequence"<< std::endl;
return 0;
}
middle_aryth_of_all += sum / counter;
middle_positive_meaning += sum_of_pos / counter_of_pos;
std::cout << "Arithmetic mean of all numbers = "<< middle_aryth_of_all<<std::endl;
std::cout << "Maximum value = " << max << std::endl;
std::cout << "Arithmetic mean of positive numbers = "<< middle_positive_meaning << std::endl;
std::cout << "Minimum positive number = "<< min << std::endl;
}