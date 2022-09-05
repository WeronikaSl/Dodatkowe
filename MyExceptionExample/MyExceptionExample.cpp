#include <iostream>

class DivisionZeroError : public std::exception
{
private:
    const char* _message;
public:
    DivisionZeroError(const char* message) : _message(message)
    {}
    const char* what() const override
    {
        return _message;
    }
};

int divide(int a, int b)
{
    if (b == 0)
    {
        throw DivisionZeroError("Nie dziel przez 0!");
    }
    return a / b;
}

int main()
{
    int x = 10;
    int y = 0;

    try
    {
        std::cout << divide(x, y) << std::endl;
    }
    catch (const DivisionZeroError& error)
    {
        std::cout << error.what() << std::endl;
    }
}
