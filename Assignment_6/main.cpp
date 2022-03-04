//Arithmetic Progression Assignment

#include <iostream>

using namespace std;

bool CheckProgression(int n1,int n2,int n3,int n4)
{
    int firstStep = n1 - n2;
    firstStep = abs(firstStep);

    if ((n2 + firstStep == n3 && n3 + firstStep == n4) ||
        (n2 - firstStep == n3 && n3 - firstStep == n4))
    {
        cout << n1 << "," << n2 << "," << n3 << "," << n4 << ": ";
        cout << "Series has arithmetic progression." << endl;
        return true;
    }

    else
    {
        cout << n1 << "," << n2 << "," << n3 << "," << n4 << ": ";
        cout << "Series does NOT have arithmetic progression." << endl;
        return false;
    }

}

int main()
{
    CheckProgression(1,2,3,4);
    CheckProgression(1,2,4,7);
    CheckProgression(4,8,12,16);
    CheckProgression(9,6,3,0);

    return 0;
}