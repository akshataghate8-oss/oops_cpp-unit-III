#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void pay(double amount) const = 0;

    virtual ~Payment() = default;
};

class CardPayment : public Payment
{
public:
    void pay(double amount) const override
    {
        cout << "Paid Rs. " << amount
             << " using card" << endl;
    }
};

class UpiPayment : public Payment
{
public:
    void pay(double amount) const override
    {
        cout << "Paid Rs. " << amount
             << " using UPI" << endl;
    }
};

class NetBankingPayment : public Payment
{
public:
    void pay(double amount) const override
    {
        cout << "Paid Rs. " << amount
             << " using net banking" << endl;
    }
};

void processPayment(const Payment& payment, double amount)
{
    payment.pay(amount);
}

int main()
{
    CardPayment card;
    UpiPayment upi;
    NetBankingPayment netBanking;

    processPayment(card, 1850.0);
    processPayment(upi, 950.0);
    processPayment(netBanking, 6500.0);

    return 0;
}
