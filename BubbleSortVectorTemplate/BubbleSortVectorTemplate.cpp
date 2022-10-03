#include <iostream>
#include <vector>

template <typename T>
void sorting(std::vector<T>& v)
{
    uint16_t size = v.size();

    for (size_t i = 0; i < (size - 1); ++i)
    {
        for (size_t k = 0; k < (size - 1 - i); ++k)
        {
            if (v.at(k) > v.at(k + 1))
            {
                T temp(std::move(v.at(k)));
                v.at(k) = std::move(v.at(k + 1));
                v.at(k + 1) = std::move(temp);
            }
        }
    }
}

int main()
{
    std::vector<int> v = { 3, 7, 2, 1, 8, 9, 100, 50, 40 };

    for (const auto& elem : v)
    {
        std::cout << elem << " ";
    }

    sorting<int>(v);

    std::cout << std::endl << "Po przesortowaniu:" << std::endl;


    for (const auto& elem : v)
    {
        std::cout << elem << " ";
    }
}
