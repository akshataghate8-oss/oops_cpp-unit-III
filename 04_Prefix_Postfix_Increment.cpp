#include <iostream>
using namespace std;

class Counter
{
private:
    int value;

public:
    explicit Counter(int initialValue = 0)
        : value(initialValue)
    {
    }

    Counter& operator++()
    {
        ++value;
        return *this;
    }

    Counter operator++(int)
    {
        Counter old = *this;
        ++value;
        return old;
    }

    void display() const
    {
        cout << value << endl;
    }
};

int main()
{
    Counter counter(10);

    ++counter;

    cout << "After prefix increment: ";
    counter.display();

    Counter oldValue = counter++;

    cout << "Value returned by postfix increment: ";
    oldValue.display();

    cout << "Counter after postfix increment: ";
    counter.display();

    return 0;
}
