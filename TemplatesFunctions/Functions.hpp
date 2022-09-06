#pragma once
#include <vector>
#include <string>

template <typename T>
std::vector<T> pushToVec(T a)
{
    std::vector<T> v;
    v.push_back(a + 5);
    return v;
}

template <>
std::vector<std::string> pushToVec <std::string>(std::string a)
{
    a.append(std::to_string(5));
    std::vector<std::string> v;
    v.push_back(a);
    return v;
}