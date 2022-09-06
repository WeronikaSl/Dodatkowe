#include <iostream>
#include <vector>
#include "Functions.hpp"


int main()
{
    for (const auto& v : pushToVec("hi"))
    {
        std::cout << v << std::endl;
    }
}