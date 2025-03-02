#include <iostream>
#include <cctype>
#include <cstring>
const int MAX_LENGTH = 100;
int function(const std::string& s1, std::string& s2)
{
    int counter[126] = { 0 };
    for (int a = 0; s1[a] != '\0'; ++a)
    {
        counter[(unsigned char)s1[a]]++;
    }
    for (int a = 0; a < 126; ++a)
    {
        if (counter[a] == 1)
        {
            s2 += (char)a;
        }
    }
    return s2.length();
}
int main()
{
    std::string s1;
    std::string s2;
    std::getline(std::cin, s1);
    int length = function(s1, s2);
    if (length > 0)
    {
        std::cout << s2 << std::endl;
    }
    else
    {
        std::cout << "No unique symbols" << std::endl;
    }
    return 0;
}