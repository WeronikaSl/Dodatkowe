#include <iostream>
#include <set>

class Wallet 
{
private:
    unsigned int _amountOfMoney = 0;
public:
    Wallet(unsigned int amountOfMoney) : _amountOfMoney(amountOfMoney)
    {}
    unsigned int getAmountOfMoney() const
    {
        return _amountOfMoney;
    }

};

bool operator< (const Wallet& other, const Wallet& other2) //jesli tego nie zrobimy to dodawanie do setu nie zadziala
{
    return other.getAmountOfMoney() < other2.getAmountOfMoney(); //jesli damy > to posortuje malejaco
}

int main()
{
    std::set<Wallet> s; //sortuje w zależności od tego jak dużo w portfelu
    Wallet w1(100);
    Wallet w2(50);
    Wallet w3(200);
    s.insert(w1);
    s.insert(w2);
    s.insert(w3);

    for (const auto& elem : s)
    {
        std::cout << elem.getAmountOfMoney() << std::endl;
    }


}