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

struct Class1Compare //funktor
{
    bool operator() (const Wallet& lhs, const Wallet& rhs) const
    {
        return lhs.getAmountOfMoney() < rhs.getAmountOfMoney();//jesli damy > to posortuje malejaco
    }
};


int main()
{
    std::set<Wallet, Class1Compare> s; //jesli funtor to trzeba go tutaj wrzucic! inaczej niż przy < i std::less (w mapie tak samo)
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