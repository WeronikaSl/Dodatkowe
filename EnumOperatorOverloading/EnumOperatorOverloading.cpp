#include <iostream>

enum class Gender { FEMALE, MALE };

std::ostream& operator<< (std::ostream& s, Gender& gender)
{
    if (gender == Gender::FEMALE)
    {
        s << "FEMALE";
    }
    else
    {
        s << "MALE";
    }
    return s;
}

int main()
{
    Gender g = Gender::FEMALE;
    std::cout << g << std::endl;
}
