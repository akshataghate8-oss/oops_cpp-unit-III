#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int realPart = 0, int imaginaryPart = 0)
        : real(realPart), imaginary(imaginaryPart)
    {
    }

    friend Complex operator+(int value, const Complex& number);

    void display() const
    {
        cout << real;

        if (imaginary >= 0)
            cout << " + " << imaginary << "i";
        else
            cout << " - " << -imaginary << "i";

        cout << endl;
    }
};

Complex operator+(int value, const Complex& number)
{
    return Complex(value + number.real, number.imaginary);
}

int main()
{
    Complex number(6, 5);

    Complex result = 20 + number;

    cout << "Result: ";
    result.display();

    return 0;
}
