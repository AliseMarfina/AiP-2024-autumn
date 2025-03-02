#include <iostream>
#include <cstring>
#include <cctype>
const int MAX_LENGTH = 10;
bool isName(const std::string& a)
{
        if(a.empty()||(a=="_"))
        {
          return false;
        }
        if (isdigit(a[0]))
        {
          return false;
        }
        for (char m : a)
        {
            if (!isalnum(m) && m!='_')
            return false;
        }
          return true;
}
int main()
{
char input [MAX_LENGTH];
std::cin.getline(input, MAX_LENGTH);
std::string inputSTR(input);
if (isName(inputSTR))
{
    std::cout << "true"<<std::endl;
}
else
{
    std::cout << "false"<<std::endl;
}
return 0;
}