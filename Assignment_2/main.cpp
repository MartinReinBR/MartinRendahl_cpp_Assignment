//Celsius To Farenheit Assignment

#include <iostream>

using namespace std;

float CelciusToFahrenheit(float celcius)
{

	float fahrenheit = (celcius * 9.0) / 5.0 + 32.0;

	return fahrenheit;
}

int main() {

	float degree1 = 20.0;
	float degree2 = 36.0;
	float degree3 = -20.0;
	float degree4 = -4;
	float degree5 = 9;

	cout << degree1 << " degrees Celsius is " << CelciusToFahrenheit(degree1) << " degrees Fahrenheit " << endl;
	cout << degree2 << " degrees Celsius is " << CelciusToFahrenheit(degree2) << " degrees Fahrenheit " << endl;
	cout << degree3 << " degrees Celsius is " << CelciusToFahrenheit(degree3) << " degrees Fahrenheit " << endl;
	cout << degree4 << " degrees Celsius is " << CelciusToFahrenheit(degree4) << " degrees Fahrenheit " << endl;
	cout << degree5 << " degrees Celsius is " << CelciusToFahrenheit(degree5) << " degrees Fahrenheit " << endl;

	return 0;
}