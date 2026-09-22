#include <iostream>
using namespace std;

int add(int first, int second)
{
    return first + second;
}

double add(double first, double second)
{
    return first + second;
}

int add(int first, int second, int third)
{
    return first + second + third;
}

int main()
{
    cout << "Sum of two integers: " << add(15, 25) << endl;
    cout << "Sum of two doubles: " << add(4.5, 2.8) << endl;
    cout << "Sum of three integers: " << add(15, 25, 35) << endl;

    return 0;
}
