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


template<> struct std::less <Wallet> //jesli tego nie zrobimy to dodawanie do setu nie zadziala
{
    bool operator() (const Wallet& lhs, const Wallet& rhs) const
    {
        return lhs.getAmountOfMoney() < rhs.getAmountOfMoney(); //jesli damy > to posortuje malejaco
    }
};

//mozna tez z namespace
//namespace std
//{
//    template<> struct less<Wallet>
//    {
//        bool operator() (const Wallet& lhs, const Wallet& rhs) const
//        {
//            return lhs.getAmountOfMoney() < rhs.getAmountOfMoney();
//        }
//    };
//}


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