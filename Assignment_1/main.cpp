//Absolute Difference Assingment

#include <iostream>

using namespace std;

int IntAbsoluteValue(int value)
{
	int absoluteValue;
	if (value < 0)
	{
		absoluteValue = value - value - value;
		return absoluteValue;
	}

	else
	{
		return value;
	}
}

int AbsoluteDifference(int numA, int numB)
{

	int difference = numA - numB;

	//difference = abs(difference);
	difference = IntAbsoluteValue(difference);

	return difference;
}

int main() {

	cout << "The absolute difference is " << AbsoluteDifference(20, 10) << endl;
	cout << "The absolute difference is " << AbsoluteDifference(1, 35) << endl;
	cout << "The absolute difference is " << AbsoluteDifference(-20, 4) << endl;
	cout << "The absolute difference is " << AbsoluteDifference(4, -20) << endl;
	cout << "The absolute difference is " << AbsoluteDifference(-300, -400) << endl;
	cout << "The absolute difference is " << AbsoluteDifference(-2, -2) << endl;

	return 0;
}
