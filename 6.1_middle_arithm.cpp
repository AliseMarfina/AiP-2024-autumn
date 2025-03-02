#include <iostream>
#include <stdexcept>
static int arithmeticMeansOfPositive(int* address, int rows, int columns, double* vector);
{
    for (int i; i < rows; ++i)
    {
        int poscounter = 0;
        int sum = 0;
        for (int j = 0; j < columns; ++j)
        {
            if (address[i][j] > 0)
            {
                sum += address[i][j];
                poscounter++;
            }
        }
        if (poscounter == 0)
        {
            std::cerr << "ERROR: It is impossible to construct a vector" << std::endl;
        }
        vector[i] = static_cast<double>(sum) / poscounter;
    }
}
int main()
{
    int rows, columns;
    std::cin >> rows >> columns;
    if (rows < 0)
    {
        std::cerr << "ERROR: Invalid number of rows specified" << std::endl;
        return 1;
    }
    if (columns < 0)
    {
        std::cerr << "ERROR: Invalid number of columns specified" << std::endl;
        return 1;
    }
    int** address = new (std::nothrow) int* [rows];
    if (!address)
    {
        std::cerr << "ERROR: Memory not allocated for array" << std::endl;
        return 1;
    }
    for (int i = 0; i < rows; ++i)
    {
        address[i] = new(std::nothrow) int[columns];
        if (!address[i])
        {
            std::cerr << "ERROR: Memory not allocated for array" << std::endl;
            return 1;
        }
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            if (!(std::cin >> address[i][j]))
            {
                std::cerr << "ERROR: Invalid matrix element" << std::endl;
                return 1;
            }
        }
    }
    double* vector = new (std::nothrow) double[rows];
    if (!vector)
    {
        std::cerr << "ERROR: Memory not allocated for array" << std::endl;
    }
    std::cout << "Vector of arithmetic means = ";
    for (int i = 0; i < rows; ++i)
    {
        std::cout << vector[i] << " ";
    }
    delete[] vector;
    delete[] address;
    return 0;
}

int arithmeticMeansOfPositive(int* address, int rows, int columns, double* vector)
{
    return 0;
}
