//Even Or Odd Assignment

#include <iostream>

using namespace std;

void EvenOrOdd(int number)
{
    if (number % 2 == 0)
    {
        cout << number << " is and even number" << endl;
    }
    else
    {
        cout << number << " is an odd number" << endl;
    }
}

int main()
{
    EvenOrOdd(3);
    EvenOrOdd(12);
    EvenOrOdd(886);
    EvenOrOdd(77);
    EvenOrOdd(98);
    EvenOrOdd(4);


    return 0;
}

