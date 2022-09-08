#include <iostream>
#include <vector>
#include "Functions.hpp"


int main()
{
    for (const auto& v : pushToVec<std::string>("hi"))
    {
        std::cout << v << std::endl;
    }
}