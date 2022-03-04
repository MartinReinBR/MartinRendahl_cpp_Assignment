//Reverse Collection Assignment

#include <iostream>

using namespace std;

void PrintCollection(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << " and size is: " << n << endl;
}

void ReverseString(int collection[], int sizeOfCollection)
{
    for (int first = 0, last = sizeOfCollection - 1; first < last; first++, last--) 
    {
        int tempInt = collection[first];
        collection[first] = collection[last];
        collection[last] = tempInt;
    }

    return;
}

int main()
{
    int arr1[] = { 1,2,3,4,5 };
    int arr1Size = size(arr1);
    PrintCollection(arr1, arr1Size);
    ReverseString(arr1, arr1Size);
    PrintCollection(arr1, arr1Size);

    int arr2[] = { 2,4,6,8,10,12,14,16,18,20 };
    int arr2Size = size(arr2);
    PrintCollection(arr2, arr2Size);
    ReverseString(arr2, arr2Size);
    PrintCollection(arr2, arr2Size);

    return 0;
}