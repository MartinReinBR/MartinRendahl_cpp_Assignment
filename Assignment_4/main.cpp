//Last Digit Of A Number Assignment

#include <iostream>

using namespace std;

int LastDigit(int number)
{
    return number % 10;
}

int main()
{
    cout << LastDigit(13244) << endl;
    cout << LastDigit(33) << endl;
    cout << LastDigit(4376) << endl;
    cout << LastDigit(122) << endl;

    return 0;
}
