// Linear Search Assignment

#include <iostream>

using namespace std;

void PrintResult(int numberToFind, int result) 
{
    (result == -1) ? cout << "The number " << numberToFind << " was not located" << endl :
        cout << "The number " << numberToFind << " was located at position " << result << endl;
}

int search(int array[], int arraySize, int numberToFind) {

    for (int i = 0; i < arraySize; i++)
        if (array[i] == numberToFind)
            return i;
    return -1;
}

int main() {
    int array[] = { 2, 4, 0, 1, 9 };
    int arraySize = size(array);

    int numberToFind = 9;
    int result = search(array, arraySize, numberToFind);
    PrintResult(numberToFind,result);

    numberToFind = 12;
    result = search(array, arraySize, numberToFind);
    PrintResult(numberToFind, result);

    numberToFind = 4;
    result = search(array, arraySize, numberToFind);
    PrintResult(numberToFind, result);
}