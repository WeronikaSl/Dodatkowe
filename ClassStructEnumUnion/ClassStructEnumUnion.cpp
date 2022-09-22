#include <iostream>

class 
{
private:
    int x = 5;
public:
    int getX() const
    {
        return x;
    }

} a; //jeden jedyny obiekt tej klasy?

class A1
{
private:
    int x = 5;
public:
    int getX() const
    {
        return x;
    }

} a1; //obiekt klasy A1



struct
{
    int x = 6;
} b; //jeden jedyny obiekt tej struktury?



union
{
    int x;
    char y;
} c; // jedyny obiekt tej unii?


//enum class {FEMALE, MALE} d; // dla enuma nie dziala, musi byc enum class d {FEMALE, MALE};


int main()
{
    std::cout << a.getX() << std::endl; //klasa
    std::cout << a1.getX() << std::endl; //klasa A1
    std::cout << b.x << std::endl; //struktura
    c.x = 7;
    std::cout << c.x << std::endl; //unia
}
